
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int simple_rel_array_size; int ** append_rel_array; int ** simple_rte_array; int ** simple_rel_array; } ;
typedef int RelOptInfo ;
typedef int RangeTblEntry ;
typedef TYPE_1__ PlannerInfo ;
typedef int AppendRelInfo ;


 int FUNC_0 (int) ;
 int FUNC_1 (int **,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int **,int) ;

void
FUNC_4(PlannerInfo *VAR_0, int VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1 > 0);

 VAR_2 = VAR_0->simple_rel_array_size + VAR_1;

 VAR_0->simple_rel_array = (RelOptInfo **)
  FUNC_3(VAR_0->simple_rel_array,
     sizeof(RelOptInfo *) * VAR_2);
 FUNC_1(VAR_0->simple_rel_array + VAR_0->simple_rel_array_size,
     0, sizeof(RelOptInfo *) * VAR_1);

 VAR_0->simple_rte_array = (RangeTblEntry **)
  FUNC_3(VAR_0->simple_rte_array,
     sizeof(RangeTblEntry *) * VAR_2);
 FUNC_1(VAR_0->simple_rte_array + VAR_0->simple_rel_array_size,
     0, sizeof(RangeTblEntry *) * VAR_1);

 if (VAR_0->append_rel_array)
 {
  VAR_0->append_rel_array = (AppendRelInfo **)
   FUNC_3(VAR_0->append_rel_array,
      sizeof(AppendRelInfo *) * VAR_2);
  FUNC_1(VAR_0->append_rel_array + VAR_0->simple_rel_array_size,
      0, sizeof(AppendRelInfo *) * VAR_1);
 }
 else
 {
  VAR_0->append_rel_array = (AppendRelInfo **)
   FUNC_2(sizeof(AppendRelInfo *) * VAR_2);
 }

 VAR_0->simple_rel_array_size = VAR_2;
}
