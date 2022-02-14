
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int var; int * rel; } ;
typedef TYPE_1__ VariableStatData ;
typedef int PlannerInfo ;
typedef int Node ;
typedef int List ;


 int FUNC_0 (TYPE_1__) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

bool
FUNC_6(PlannerInfo *VAR_0, List *VAR_1, int VAR_2,
       VariableStatData *VAR_3, Node **VAR_4,
       bool *VAR_5)
{
 Node *VAR_6,
      *VAR_7;
 VariableStatData VAR_8;


 if (FUNC_4(VAR_1) != 2)
  return 0;

 VAR_6 = (Node *) FUNC_3(VAR_1);
 VAR_7 = (Node *) FUNC_5(VAR_1);





 FUNC_2(VAR_0, VAR_6, VAR_2, VAR_3);
 FUNC_2(VAR_0, VAR_7, VAR_2, &VAR_8);




 if (VAR_3->rel && VAR_8.rel == ((void*)0))
 {
  *VAR_5 = 1;
  *VAR_4 = FUNC_1(VAR_0, VAR_8.var);

  return 1;
 }

 if (VAR_3->rel == ((void*)0) && VAR_8.rel)
 {
  *VAR_5 = 0;
  *VAR_4 = FUNC_1(VAR_0, VAR_3->var);

  *VAR_3 = VAR_8;
  return 1;
 }


 FUNC_0(*VAR_3);
 FUNC_0(VAR_8);

 return 0;
}
