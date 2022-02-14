
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int outer_tuples; int inner_tuples; } ;
struct TYPE_4__ {int nbatch; TYPE_2__* batches; } ;
typedef TYPE_1__* HashJoinTable ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(HashJoinTable VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nbatch; ++VAR_1)
 {

  FUNC_2(VAR_0->batches[VAR_1].inner_tuples);
  FUNC_2(VAR_0->batches[VAR_1].outer_tuples);
  FUNC_1(VAR_0->batches[VAR_1].inner_tuples);
  FUNC_1(VAR_0->batches[VAR_1].outer_tuples);
 }
 FUNC_0(VAR_0->batches);
 VAR_0->batches = ((void*)0);
}
