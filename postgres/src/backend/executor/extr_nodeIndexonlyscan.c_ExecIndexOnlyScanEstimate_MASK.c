
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int es_snapshot; } ;
struct TYPE_8__ {TYPE_5__* state; } ;
struct TYPE_9__ {TYPE_1__ ps; } ;
struct TYPE_11__ {int ioss_PscanLen; int ioss_RelationDesc; TYPE_2__ ss; } ;
struct TYPE_10__ {int estimator; } ;
typedef TYPE_3__ ParallelContext ;
typedef TYPE_4__ IndexOnlyScanState ;
typedef TYPE_5__ EState ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;

void
FUNC_3(IndexOnlyScanState *VAR_0,
        ParallelContext *VAR_1)
{
 EState *VAR_2 = VAR_0->ss.ps.state;

 VAR_0->ioss_PscanLen = FUNC_0(VAR_0->ioss_RelationDesc,
               VAR_2->es_snapshot);
 FUNC_1(&VAR_1->estimator, VAR_0->ioss_PscanLen);
 FUNC_2(&VAR_1->estimator, 1);
}
