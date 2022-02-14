
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ snapshot; int scan; scalar_t__ irel; int iscan; int * slot; } ;
typedef TYPE_1__* SysScanDesc ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;

void
FUNC_6(SysScanDesc VAR_1)
{
 if (VAR_1->slot)
 {
  FUNC_0(VAR_1->slot);
  VAR_1->slot = ((void*)0);
 }

 if (VAR_1->irel)
 {
  FUNC_3(VAR_1->iscan);
  FUNC_2(VAR_1->irel, VAR_0);
 }
 else
  FUNC_5(VAR_1->scan);

 if (VAR_1->snapshot)
  FUNC_1(VAR_1->snapshot);

 FUNC_4(VAR_1);
}
