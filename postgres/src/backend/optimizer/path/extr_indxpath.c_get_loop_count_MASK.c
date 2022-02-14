
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int simple_rel_array_size; TYPE_1__** simple_rel_array; } ;
struct TYPE_6__ {int relid; scalar_t__ rows; } ;
typedef int * Relids ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ PlannerInfo ;
typedef int Index ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 double FUNC_2 (TYPE_2__*,int ,int,scalar_t__) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static double
FUNC_4(PlannerInfo *VAR_0, Index VAR_1, Relids VAR_2)
{
 double VAR_3;
 int VAR_4;


 if (VAR_2 == ((void*)0))
  return 1.0;

 VAR_3 = 0.0;
 VAR_4 = -1;
 while ((VAR_4 = FUNC_3(VAR_2, VAR_4)) >= 0)
 {
  RelOptInfo *VAR_5;
  double VAR_6;


  if (VAR_4 >= VAR_0->simple_rel_array_size)
   continue;
  VAR_5 = VAR_0->simple_rel_array[VAR_4];
  if (VAR_5 == ((void*)0))
   continue;
  FUNC_0(VAR_5->relid == VAR_4);


  if (FUNC_1(VAR_5))
   continue;


  FUNC_0(VAR_5->rows > 0);


  VAR_6 = FUNC_2(VAR_0,
             VAR_1,
             VAR_4,
             VAR_5->rows);


  if (VAR_3 == 0.0 || VAR_3 > VAR_6)
   VAR_3 = VAR_6;
 }

 return (VAR_3 > 0.0) ? VAR_3 : 1.0;
}
