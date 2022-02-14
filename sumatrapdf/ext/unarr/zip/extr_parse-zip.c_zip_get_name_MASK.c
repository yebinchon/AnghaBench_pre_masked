
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct zip_entry {int namelen; int flags; } ;
struct TYPE_9__ {char* name; scalar_t__ offset; } ;
struct TYPE_8__ {scalar_t__ end_offset; } ;
struct TYPE_10__ {TYPE_2__ entry; TYPE_1__ dir; } ;
typedef TYPE_3__ ar_archive_zip ;
struct TYPE_11__ {int stream; scalar_t__ entry_offset; } ;
typedef TYPE_4__ ar_archive ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (TYPE_3__*,struct zip_entry*) ;
 int FUNC_7 (TYPE_3__*,struct zip_entry*) ;

const char *FUNC_8(ar_archive *VAR_3)
{
    ar_archive_zip *VAR_4 = (ar_archive_zip *)VAR_3;
    if (!VAR_4->entry.name) {
        struct zip_entry VAR_5;
        char *VAR_6;

        if (VAR_4->dir.end_offset >= 0) {
            if (!FUNC_2(VAR_3->stream, VAR_3->entry_offset, VAR_0))
                return ((void*)0);
            if (!FUNC_6(VAR_4, &VAR_5))
                return ((void*)0);
            if (!FUNC_2(VAR_3->stream, VAR_3->entry_offset + VAR_1, VAR_0))
                return ((void*)0);
        }
        else {
            if (!FUNC_2(VAR_3->stream, VAR_4->entry.offset, VAR_0))
                return ((void*)0);
            if (!FUNC_7(VAR_4, &VAR_5))
                return ((void*)0);
            if (!FUNC_2(VAR_3->stream, VAR_3->entry_offset + VAR_2, VAR_0))
                return ((void*)0);
        }

        VAR_6 = FUNC_4(VAR_5.namelen + 1);
        if (!VAR_6 || FUNC_1(VAR_3->stream, VAR_6, VAR_5.namelen) != VAR_5.namelen) {
            FUNC_3(VAR_6);
            return ((void*)0);
        }
        VAR_6[VAR_5.namelen] = '\0';

        if ((VAR_5.flags & (1 << 11))) {
            VAR_4->entry.name = VAR_6;
        }
        else {
            VAR_4->entry.name = FUNC_0(VAR_6);
            FUNC_3(VAR_6);
        }

        if (VAR_4->entry.name) {
            char *VAR_7 = VAR_4->entry.name;
            while ((VAR_7 = FUNC_5(VAR_7, '\\')) != ((void*)0)) {
                *VAR_7 = '/';
            }
        }
    }
    return VAR_4->entry.name;
}
