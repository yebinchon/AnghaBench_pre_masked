
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int srr1; int dsisr; int dar; int srr0; int xer; int ctr; int cr; int lr; int gpr; } ;
typedef TYPE_1__ ppc_trap_frame_t ;
typedef int VOID ;
typedef int ULONG ;
struct TYPE_6__ {int Msr; int Dr1; int Dr0; int Iar; int Xer; int Ctr; int Cr; int Lr; int Gpr0; } ;
typedef TYPE_2__* PKTRAP_FRAME ;


 int FUNC_0 (int *,int ,int) ;

VOID FUNC_1(ppc_trap_frame_t *VAR_0, PKTRAP_FRAME VAR_1)
{
    FUNC_0(&VAR_1->Gpr0, VAR_0->gpr, 12 * sizeof(ULONG));
    VAR_1->Lr = VAR_0->lr;
    VAR_1->Cr = VAR_0->cr;
    VAR_1->Ctr = VAR_0->ctr;
    VAR_1->Xer = VAR_0->xer;
    VAR_1->Iar = VAR_0->srr0;
    VAR_1->Msr = VAR_0->srr1 & 0xffff;
    VAR_1->Dr0 = VAR_0->dar;
    VAR_1->Dr1 = VAR_0->dsisr;
}
