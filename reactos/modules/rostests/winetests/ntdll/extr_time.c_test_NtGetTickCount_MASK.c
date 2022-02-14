
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int TickCountQuad; int TickCountMultiplier; } ;
typedef int LONG ;
typedef TYPE_1__ KSHARED_USER_DATA ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{

    KSHARED_USER_DATA *VAR_0 = (void *)0x7ffe0000;
    LONG VAR_1;
    int VAR_2;

    if (!&FUNC_2)
    {
        FUNC_3("NtGetTickCount is not available\n");
        return;
    }

    for (VAR_2 = 0; VAR_2 < 5; ++VAR_2)
    {
        VAR_1 = (VAR_0->TickCountQuad * VAR_0->TickCountMultiplier) >> 24;
        VAR_1 = FUNC_2() - VAR_1;
        FUNC_1(VAR_1 < 32, "NtGetTickCount - TickCountQuad too high, expected < 32 got %d\n", VAR_1);
        FUNC_0(50);
    }

}
