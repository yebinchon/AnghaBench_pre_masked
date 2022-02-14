
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ xs_recheck; } ;
struct TYPE_4__ {int slot; int scan; TYPE_3__* iscan; scalar_t__ irel; } ;
typedef TYPE_1__* SysScanDesc ;
typedef int * HeapTuple ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * FUNC_1 (int ,int,int*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;

HeapTuple
FUNC_5(SysScanDesc VAR_2)
{
 HeapTuple VAR_3 = ((void*)0);

 if (VAR_2->irel)
 {
  if (FUNC_3(VAR_2->iscan, VAR_1, VAR_2->slot))
  {
   bool VAR_4;

   VAR_3 = FUNC_1(VAR_2->slot, 0, &VAR_4);
   FUNC_0(!VAR_4);
   if (VAR_2->iscan->xs_recheck)
    FUNC_2(VAR_0, "system catalog scans with lossy index conditions are not implemented");
  }
 }
 else
 {
  if (FUNC_4(VAR_2->scan, VAR_1, VAR_2->slot))
  {
   bool VAR_5;

   VAR_3 = FUNC_1(VAR_2->slot, 0, &VAR_5);
   FUNC_0(!VAR_5);
  }
 }

 return VAR_3;
}
