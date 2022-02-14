
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int (* InitializeWorkerForeignScan ) (TYPE_5__*,int ,void*) ;} ;
struct TYPE_11__ {TYPE_1__* plan; } ;
struct TYPE_12__ {TYPE_2__ ps; } ;
struct TYPE_14__ {TYPE_3__ ss; TYPE_6__* fdwroutine; } ;
struct TYPE_13__ {int toc; } ;
struct TYPE_10__ {int plan_node_id; } ;
typedef TYPE_4__ ParallelWorkerContext ;
typedef TYPE_5__ ForeignScanState ;
typedef TYPE_6__ FdwRoutine ;


 void* FUNC_0 (int ,int,int) ;
 int FUNC_1 (TYPE_5__*,int ,void*) ;

void
FUNC_2(ForeignScanState *VAR_0,
        ParallelWorkerContext *VAR_1)
{
 FdwRoutine *VAR_2 = VAR_0->fdwroutine;

 if (VAR_2->InitializeWorkerForeignScan)
 {
  int VAR_3 = VAR_0->ss.ps.plan->plan_node_id;
  void *VAR_4;

  VAR_4 = FUNC_0(VAR_1->toc, VAR_3, 0);
  VAR_2->InitializeWorkerForeignScan(VAR_0, VAR_1->toc, VAR_4);
 }
}
