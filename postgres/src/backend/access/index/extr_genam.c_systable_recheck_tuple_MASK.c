
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int slot; int heap_rel; } ;
typedef TYPE_1__* SysScanDesc ;
typedef int Snapshot ;
typedef scalar_t__ HeapTuple ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

bool
FUNC_5(SysScanDesc VAR_0, HeapTuple VAR_1)
{
 Snapshot VAR_2;
 bool VAR_3;

 FUNC_0(VAR_1 == FUNC_1(VAR_0->slot, 0, ((void*)0)));







 VAR_2 = FUNC_2(FUNC_3(VAR_0->heap_rel));

 VAR_3 = FUNC_4(VAR_0->heap_rel,
           VAR_0->slot,
           VAR_2);

 return VAR_3;
}
