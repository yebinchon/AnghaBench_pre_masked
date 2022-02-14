
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int VAR_7 ;

void FUNC_1(int VAR_8, DWORD VAR_9) {
    if (VAR_8 > VAR_7) return;
    FUNC_0(VAR_6, "userland disposition = ");
    if (VAR_9 == VAR_5)
        FUNC_0(VAR_6, "FILE_SUPERSEDE\n");
    else if (VAR_9 == VAR_0)
        FUNC_0(VAR_6, "FILE_CREATE\n");
    else if (VAR_9 == VAR_1)
        FUNC_0(VAR_6, "FILE_OPEN\n");
    else if (VAR_9 == VAR_2)
        FUNC_0(VAR_6, "FILE_OPEN_IF\n");
    else if (VAR_9 == VAR_3)
        FUNC_0(VAR_6, "FILE_OVERWRITE\n");
    else if (VAR_9 == VAR_4)
        FUNC_0(VAR_6, "FILE_OVERWRITE_IF\n");
}
