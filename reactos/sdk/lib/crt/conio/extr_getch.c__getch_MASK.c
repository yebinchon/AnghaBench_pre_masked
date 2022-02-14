
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int _file; } ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int*) ;
 int FUNC_1 (scalar_t__,char*,int,int*,int *) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 char VAR_4 ;

int FUNC_4(void)
{
    DWORD VAR_5 = 0;
    char VAR_6;
    HANDLE VAR_7;
    BOOL VAR_8;
    DWORD VAR_9;

    if (VAR_2) {
        VAR_6 = VAR_4;
        VAR_2 = 0;
    } else {






        VAR_7 = (HANDLE) FUNC_3(VAR_3->_file);
        VAR_8 = FUNC_0(VAR_7, &VAR_9) &&
                      (0 != (VAR_9 &
                             (VAR_0 | VAR_1)));
        if (VAR_8) {
            FUNC_2(VAR_7,
                           VAR_9 & (~ (VAR_0 | VAR_1)));
        }
        FUNC_1((HANDLE)FUNC_3(VAR_3->_file),
               &VAR_6,
               1,
               &VAR_5,
               ((void*)0));
        if (VAR_8) {
            FUNC_2(VAR_7, VAR_9);
        }
    }
    if (VAR_6 == 10)
        VAR_6 = 13;
    return VAR_6;
}
