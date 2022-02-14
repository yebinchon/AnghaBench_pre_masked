
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cbInQue; scalar_t__ cbOutQue; } ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ COMSTAT ;


 int FUNC_0 (scalar_t__,scalar_t__*,TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,char*,...) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void)
{
    HANDLE VAR_2;
    DWORD VAR_3;
    COMSTAT VAR_4;

    VAR_2 = FUNC_3(VAR_0);
    if (VAR_2 == VAR_1) return;

    FUNC_2(FUNC_0(VAR_2, &VAR_3, &VAR_4), "ClearCommError failed\n");
    FUNC_2(VAR_4.cbInQue == 0, "Unexpected %d chars in InQueue\n", VAR_4.cbInQue);
    FUNC_2(VAR_4.cbOutQue == 0, "Unexpected %d chars in OutQueue\n", VAR_4.cbOutQue);
    FUNC_2(VAR_3 == 0, "ClearCommErrors: Unexpected error 0x%08x\n", VAR_3);

    FUNC_1(VAR_2);
}
