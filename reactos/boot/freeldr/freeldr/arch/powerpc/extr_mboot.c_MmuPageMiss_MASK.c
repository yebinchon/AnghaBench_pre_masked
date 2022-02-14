
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* gpr; } ;
typedef TYPE_1__ ppc_trap_frame_t ;


 int FUNC_0 (char*,...) ;

int FUNC_1(int VAR_0, ppc_trap_frame_t *VAR_1)
{
    int VAR_2;
    FUNC_0("TRAP %x\n", VAR_0);
    for( VAR_2 = 0; VAR_2 < 40; VAR_2++ )
    FUNC_0("r[%d] %x\n", VAR_2, VAR_1->gpr[VAR_2]);
    FUNC_0("HALT!\n");
    while(1);
}
