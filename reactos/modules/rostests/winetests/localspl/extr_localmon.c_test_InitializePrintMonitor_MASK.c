
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwMonitorSize; } ;
typedef int MONITOR ;
typedef TYPE_1__* LPMONITOREX ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int * VAR_1 ;
 int FUNC_1 (int) ;
 int * VAR_2 ;
 int FUNC_2 (int,char*,...) ;
 TYPE_1__* FUNC_3 (int *) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_4(void)
{
    LPMONITOREX VAR_4;

    if (!&FUNC_3) return;

    FUNC_1(0xdeadbeef);
    VAR_4 = FUNC_3(((void*)0));

    FUNC_2( VAR_4 || (FUNC_0() == VAR_0),
        "returned %p with %u\n (expected '!= NULL' or: NULL with "
        "ERROR_INVALID_PARAMETER)\n", VAR_4, FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_4 = FUNC_3(VAR_2);
    FUNC_2( VAR_4 || (FUNC_0() == VAR_0),
        "returned %p with %u\n (expected '!= NULL' or: NULL with "
        "ERROR_INVALID_PARAMETER)\n", VAR_4, FUNC_0());


    FUNC_1(0xdeadbeef);
    VAR_4 = FUNC_3(VAR_1);
    FUNC_2( VAR_4 == VAR_3,
        "returned %p with %u (expected %p)\n", VAR_4, FUNC_0(), VAR_3);
    FUNC_2(VAR_4->dwMonitorSize == sizeof(MONITOR), "wrong dwMonitorSize %u\n", VAR_4->dwMonitorSize);
}
