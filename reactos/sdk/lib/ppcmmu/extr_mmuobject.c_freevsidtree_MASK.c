
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
struct TYPE_5__ {scalar_t__* leaves; } ;
typedef TYPE_1__ MmuVsidTree ;
typedef TYPE_2__ MmuFreeTree ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (scalar_t__) ;

void FUNC_1(MmuVsidTree *VAR_1)
{
    int VAR_2;
    for(VAR_2 = 0; VAR_2 < 256; VAR_2++)
 if(VAR_1->leaves[VAR_2])
     FUNC_0(VAR_1->leaves[VAR_2]);
    MmuFreeTree *VAR_3 = (MmuFreeTree *)VAR_1;
    VAR_3->next = VAR_0;
    VAR_0 = VAR_3;
}
