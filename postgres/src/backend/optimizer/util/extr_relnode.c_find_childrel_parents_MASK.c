
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int parent_relid; } ;
struct TYPE_9__ {size_t simple_rel_array_size; TYPE_3__** append_rel_array; } ;
struct TYPE_8__ {scalar_t__ reloptkind; size_t relid; } ;
typedef int * Relids ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ PlannerInfo ;
typedef int Index ;
typedef TYPE_3__ AppendRelInfo ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (int *,int ) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int ) ;

Relids
FUNC_3(PlannerInfo *VAR_2, RelOptInfo *VAR_3)
{
 Relids VAR_4 = ((void*)0);

 FUNC_0(VAR_3->reloptkind == VAR_1);
 FUNC_0(VAR_3->relid > 0 && VAR_3->relid < VAR_2->simple_rel_array_size);

 do
 {
  AppendRelInfo *VAR_5 = VAR_2->append_rel_array[VAR_3->relid];
  Index VAR_6 = VAR_5->parent_relid;

  VAR_4 = FUNC_1(VAR_4, VAR_6);


  VAR_3 = FUNC_2(VAR_2, VAR_6);
 } while (VAR_3->reloptkind == VAR_1);

 FUNC_0(VAR_3->reloptkind == VAR_0);

 return VAR_4;
}
