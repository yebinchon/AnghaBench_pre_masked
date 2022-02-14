
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* name; scalar_t__ is_ustar; } ;
struct TYPE_6__ {TYPE_1__ entry; } ;
typedef TYPE_2__ ar_archive_tar ;
struct TYPE_7__ {int stream; scalar_t__ entry_offset; } ;
typedef TYPE_3__ ar_archive ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*,char*) ;
 char* FUNC_8 (char*,char) ;

const char *FUNC_9(ar_archive *VAR_2)
{
    ar_archive_tar *VAR_3 = (ar_archive_tar *)VAR_2;
    if (!VAR_3->entry.name) {
        char *VAR_4;

        if (!FUNC_3(VAR_2->stream, VAR_2->entry_offset, VAR_0))
            return ((void*)0);

        VAR_4 = FUNC_6(100 + 1);
        if (!VAR_4 || FUNC_2(VAR_2->stream, VAR_4, 100) != 100) {
            FUNC_5(VAR_4);
            FUNC_3(VAR_2->stream, VAR_2->entry_offset + VAR_1, VAR_0);
            return ((void*)0);
        }
        VAR_4[100] = '\0';

        if (VAR_3->entry.is_ustar) {
            char *VAR_5 = FUNC_6(256 + 1);
            if (!VAR_5 || !FUNC_4(VAR_2->stream, 245) || FUNC_2(VAR_2->stream, VAR_5, 167) != 167) {
                FUNC_5(VAR_4);
                FUNC_5(VAR_5);
                FUNC_3(VAR_2->stream, VAR_2->entry_offset + VAR_1, VAR_0);
                return ((void*)0);
            }
            if (VAR_5[0] != '\0') {
                VAR_5[156] = '\0';
                FUNC_7(VAR_5, "/");
                FUNC_7(VAR_5, VAR_4);
                FUNC_5(VAR_4);
                VAR_4 = VAR_5;
                VAR_5 = ((void*)0);
            }
            FUNC_5(VAR_5);
        }
        else
            FUNC_4(VAR_2->stream, VAR_1 - 100);


        if (FUNC_1(VAR_4)) {
            VAR_3->entry.name = VAR_4;
        }
        else {
            VAR_3->entry.name = FUNC_0(VAR_4);
            FUNC_5(VAR_4);
        }

        if (VAR_3->entry.name) {
            char *VAR_6 = VAR_3->entry.name;
            while ((VAR_6 = FUNC_8(VAR_6, '\\')) != ((void*)0)) {
                *VAR_6 = '/';
            }
        }
    }
    return VAR_3->entry.name;
}
