
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TuplesortInstrumentation ;
struct TYPE_10__ {scalar_t__ nworkers; int estimator; } ;
struct TYPE_7__ {int instrument; } ;
struct TYPE_8__ {TYPE_1__ ps; } ;
struct TYPE_9__ {TYPE_2__ ss; } ;
typedef TYPE_3__ SortState ;
typedef int Size ;
typedef TYPE_4__ ParallelContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int VAR_1 ;

void
FUNC_5(SortState *VAR_2, ParallelContext *VAR_3)
{
 Size VAR_4;


 if (!VAR_2->ss.ps.instrument || VAR_3->nworkers == 0)
  return;

 VAR_4 = FUNC_1(VAR_3->nworkers, sizeof(TuplesortInstrumentation));
 VAR_4 = FUNC_0(VAR_4, FUNC_2(VAR_0, VAR_1));
 FUNC_3(&VAR_3->estimator, VAR_4);
 FUNC_4(&VAR_3->estimator, 1);
}
