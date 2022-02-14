
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ss_currentRelation; TYPE_1__* ss_currentScanDesc; } ;
struct TYPE_7__ {TYPE_2__ ss; } ;
struct TYPE_5__ {int rs_parallel; } ;
typedef TYPE_3__ SeqScanState ;
typedef int ParallelTableScanDesc ;
typedef int ParallelContext ;


 int FUNC_0 (int ,int ) ;

void
FUNC_1(SeqScanState *VAR_0,
         ParallelContext *VAR_1)
{
 ParallelTableScanDesc VAR_2;

 VAR_2 = VAR_0->ss.ss_currentScanDesc->rs_parallel;
 FUNC_0(VAR_0->ss.ss_currentRelation, VAR_2);
}
