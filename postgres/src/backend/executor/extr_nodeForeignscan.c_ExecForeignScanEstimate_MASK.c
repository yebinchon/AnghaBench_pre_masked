
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int (* EstimateDSMForeignScan ) (TYPE_2__*,TYPE_1__*) ;} ;
struct TYPE_9__ {int pscan_len; TYPE_3__* fdwroutine; } ;
struct TYPE_8__ {int estimator; } ;
typedef TYPE_1__ ParallelContext ;
typedef TYPE_2__ ForeignScanState ;
typedef TYPE_3__ FdwRoutine ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;

void
FUNC_3(ForeignScanState *VAR_0, ParallelContext *VAR_1)
{
 FdwRoutine *VAR_2 = VAR_0->fdwroutine;

 if (VAR_2->EstimateDSMForeignScan)
 {
  VAR_0->pscan_len = VAR_2->EstimateDSMForeignScan(VAR_0, VAR_1);
  FUNC_0(&VAR_1->estimator, VAR_0->pscan_len);
  FUNC_1(&VAR_1->estimator, 1);
 }
}
