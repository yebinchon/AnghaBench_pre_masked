
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int simple_rel_array_size; int ** simple_rel_array; } ;
typedef int RelOptInfo ;
typedef TYPE_1__ PlannerInfo ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;

RelOptInfo *
FUNC_2(PlannerInfo *VAR_1, int VAR_2)
{
 RelOptInfo *VAR_3;

 FUNC_0(VAR_2 > 0);

 if (VAR_2 < VAR_1->simple_rel_array_size)
 {
  VAR_3 = VAR_1->simple_rel_array[VAR_2];
  if (VAR_3)
   return VAR_3;
 }

 FUNC_1(VAR_0, "no relation entry for relid %d", VAR_2);

 return ((void*)0);
}
