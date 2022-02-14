
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int instrument; } ;
struct TYPE_8__ {TYPE_1__ ps; } ;
struct TYPE_7__ {scalar_t__ nworkers; int estimator; } ;
typedef TYPE_2__ ParallelContext ;
typedef TYPE_3__ HashState ;
typedef int HashInstrumentation ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,int ) ;
 int VAR_1 ;
 size_t FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *,int) ;

void
FUNC_5(HashState *VAR_2, ParallelContext *VAR_3)
{
 size_t VAR_4;


 if (!VAR_2->ps.instrument || VAR_3->nworkers == 0)
  return;

 VAR_4 = FUNC_1(VAR_3->nworkers, sizeof(HashInstrumentation));
 VAR_4 = FUNC_0(VAR_4, FUNC_2(VAR_0, VAR_1));
 FUNC_3(&VAR_3->estimator, VAR_4);
 FUNC_4(&VAR_3->estimator, 1);
}
