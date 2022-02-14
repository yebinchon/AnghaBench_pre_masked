
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ addr; scalar_t__ proc; } ;
typedef TYPE_1__ ppc_map_t ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ MmuFreePage ;


 TYPE_2__* VAR_0 ;

void FUNC_0(ppc_map_t *VAR_1)
{
    MmuFreePage *VAR_2 = (MmuFreePage*)VAR_1;
    VAR_1->proc = VAR_1->addr = 0;
    VAR_2->next = VAR_0;
    VAR_0 = VAR_2;
}
