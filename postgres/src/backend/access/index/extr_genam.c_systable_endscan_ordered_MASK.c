
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ snapshot; int iscan; int irel; int * slot; } ;
typedef TYPE_1__* SysScanDesc ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

void
FUNC_5(SysScanDesc VAR_0)
{
 if (VAR_0->slot)
 {
  FUNC_1(VAR_0->slot);
  VAR_0->slot = ((void*)0);
 }

 FUNC_0(VAR_0->irel);
 FUNC_3(VAR_0->iscan);
 if (VAR_0->snapshot)
  FUNC_2(VAR_0->snapshot);
 FUNC_4(VAR_0);
}
