
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct rar_header {int flags; } ;
typedef int data ;
struct TYPE_6__ {char* name; scalar_t__ header_size; } ;
struct TYPE_7__ {TYPE_1__ entry; } ;
typedef TYPE_2__ ar_archive_rar ;
struct TYPE_8__ {scalar_t__ entry_offset; int stream; } ;
typedef TYPE_3__ ar_archive ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int) ;
 char* FUNC_6 (char*,int) ;
 int FUNC_7 (TYPE_3__*,struct rar_header*) ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (unsigned char*) ;
 int FUNC_11 (char*) ;

const char *FUNC_12(ar_archive *VAR_3)
{
    ar_archive_rar *VAR_4 = (ar_archive_rar *)VAR_3;
    if (!VAR_4->entry.name) {
        unsigned char VAR_5[21];
        uint16_t VAR_6;
        char *VAR_7;

        struct rar_header VAR_8;
        if (!FUNC_2(VAR_3->stream, VAR_3->entry_offset, VAR_2))
            return ((void*)0);
        if (!FUNC_7(VAR_3, &VAR_8))
            return ((void*)0);
        if (FUNC_1(VAR_3->stream, VAR_5, sizeof(VAR_5)) != sizeof(VAR_5))
            return ((void*)0);
        if ((VAR_8.flags & VAR_0) && !FUNC_3(VAR_3->stream, 8))
            return ((void*)0);

        VAR_6 = FUNC_10(VAR_5 + 15);
        VAR_7 = FUNC_5(VAR_6 + 1);
        if (!VAR_7 || FUNC_1(VAR_3->stream, VAR_7, VAR_6) != VAR_6) {
            FUNC_4(VAR_7);
            return ((void*)0);
        }
        VAR_7[VAR_6] = '\0';

        if (!(VAR_8.flags & VAR_1)) {
            VAR_4->entry.name = FUNC_0(VAR_7);
            FUNC_4(VAR_7);
        }
        else if (VAR_6 == FUNC_9(VAR_7)) {
            VAR_4->entry.name = VAR_7;
        }
        else {
            VAR_4->entry.name = FUNC_6(VAR_7, VAR_6);
            FUNC_4(VAR_7);
        }

        if (VAR_4->entry.name) {
            char *VAR_9 = VAR_4->entry.name;
            while ((VAR_9 = FUNC_8(VAR_9, '\\')) != ((void*)0)) {
                *VAR_9 = '/';
            }
        }

        if (!FUNC_2(VAR_3->stream, VAR_3->entry_offset + VAR_4->entry.header_size, VAR_2))
            FUNC_11("Couldn't seek back to the end of the entry header");
    }
    return VAR_4->entry.name;
}
