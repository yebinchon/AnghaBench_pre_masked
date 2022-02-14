
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int (* InitializeDSMCustomScan ) (TYPE_5__*,TYPE_4__*,void*) ;} ;
struct TYPE_12__ {TYPE_1__* plan; } ;
struct TYPE_13__ {TYPE_2__ ps; } ;
struct TYPE_15__ {int pscan_len; TYPE_3__ ss; TYPE_6__* methods; } ;
struct TYPE_14__ {int toc; } ;
struct TYPE_11__ {int plan_node_id; } ;
typedef TYPE_4__ ParallelContext ;
typedef TYPE_5__ CustomScanState ;
typedef TYPE_6__ CustomExecMethods ;


 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,void*) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*,void*) ;

void
FUNC_3(CustomScanState *VAR_0, ParallelContext *VAR_1)
{
 const CustomExecMethods *VAR_2 = VAR_0->methods;

 if (VAR_2->InitializeDSMCustomScan)
 {
  int VAR_3 = VAR_0->ss.ps.plan->plan_node_id;
  void *VAR_4;

  VAR_4 = FUNC_0(VAR_1->toc, VAR_0->pscan_len);
  VAR_2->InitializeDSMCustomScan(VAR_0, VAR_1, VAR_4);
  FUNC_1(VAR_1->toc, VAR_3, VAR_4);
 }
}
