
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int simple_rel_array_size; TYPE_1__** simple_rel_array; } ;
struct TYPE_5__ {int relid; double rows; } ;
typedef int Relids ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ PlannerInfo ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static double
FUNC_3(PlannerInfo *VAR_0, Relids VAR_1)
{
 double VAR_2 = 1.0;
 int VAR_3;

 VAR_3 = -1;
 while ((VAR_3 = FUNC_2(VAR_1, VAR_3)) >= 0)
 {
  RelOptInfo *VAR_4;


  if (VAR_3 >= VAR_0->simple_rel_array_size)
   continue;
  VAR_4 = VAR_0->simple_rel_array[VAR_3];
  if (VAR_4 == ((void*)0))
   continue;
  FUNC_0(VAR_4->relid == VAR_3);


  if (FUNC_1(VAR_4))
   continue;


  FUNC_0(VAR_4->rows > 0);


  VAR_2 *= VAR_4->rows;
 }
 return VAR_2;
}
