
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ xs_recheck; } ;
struct TYPE_4__ {TYPE_3__* iscan; int slot; int irel; } ;
typedef TYPE_1__* SysScanDesc ;
typedef int ScanDirection ;
typedef int * HeapTuple ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ,int ) ;

HeapTuple
FUNC_4(SysScanDesc VAR_1, ScanDirection VAR_2)
{
 HeapTuple VAR_3 = ((void*)0);

 FUNC_0(VAR_1->irel);
 if (FUNC_3(VAR_1->iscan, VAR_2, VAR_1->slot))
  VAR_3 = FUNC_1(VAR_1->slot, 0, ((void*)0));


 if (VAR_3 && VAR_1->iscan->xs_recheck)
  FUNC_2(VAR_0, "system catalog scans with lossy index conditions are not implemented");

 return VAR_3;
}
