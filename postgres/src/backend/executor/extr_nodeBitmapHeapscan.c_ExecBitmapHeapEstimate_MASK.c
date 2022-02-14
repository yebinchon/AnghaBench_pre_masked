
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* state; } ;
struct TYPE_9__ {TYPE_1__ ps; } ;
struct TYPE_12__ {int pscan_len; TYPE_2__ ss; } ;
struct TYPE_11__ {int es_snapshot; } ;
struct TYPE_10__ {int estimator; } ;
typedef TYPE_3__ ParallelContext ;
typedef TYPE_4__ EState ;
typedef TYPE_5__ BitmapHeapScanState ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;

void
FUNC_5(BitmapHeapScanState *VAR_2,
        ParallelContext *VAR_3)
{
 EState *VAR_4 = VAR_2->ss.ps.state;

 VAR_2->pscan_len = FUNC_1(FUNC_2(VAR_0,
          VAR_1),
          FUNC_0(VAR_4->es_snapshot));

 FUNC_3(&VAR_3->estimator, VAR_2->pscan_len);
 FUNC_4(&VAR_3->estimator, 1);
}
