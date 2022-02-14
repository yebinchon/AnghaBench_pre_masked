
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ result; } ;
typedef TYPE_1__ uv_fs_t ;
typedef scalar_t__ uv_file ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,TYPE_1__*,char*,int,int,int *) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(char *VAR_5, int VAR_6, uv_file *VAR_7)
{
    uv_fs_t VAR_8;
    int VAR_9, VAR_10, VAR_11;

    for (VAR_11 = 1 ; VAR_11 >= 0 ; --VAR_11) {




        VAR_10 = VAR_6;
        if (VAR_11) {
            VAR_10 |= VAR_1;
        }
        VAR_9 = FUNC_4(((void*)0), &VAR_8, VAR_5, VAR_10, VAR_2 | VAR_3, ((void*)0));
        if (VAR_9 < 0) {
            if ((VAR_11) && (VAR_4 == VAR_9)) {
                FUNC_1("File \"%s\" does not support direct I/O, falling back to buffered I/O.", VAR_5);
            } else {
                FUNC_1("Failed to open file \"%s\".", VAR_5);
                --VAR_11;
            }
        } else {
            FUNC_0(VAR_8.result >= 0);
            *VAR_7 = VAR_8.result;




            --VAR_11;
        }
        FUNC_5(&VAR_8);
    }

    return VAR_9;
}
