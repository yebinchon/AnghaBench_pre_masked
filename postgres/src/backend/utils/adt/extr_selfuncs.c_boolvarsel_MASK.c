
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int statsTuple; } ;
typedef TYPE_1__ VariableStatData ;
typedef double Selectivity ;
typedef int PlannerInfo ;
typedef int Node ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__) ;
 int FUNC_3 (int *,int *,int,TYPE_1__*) ;
 double FUNC_4 (TYPE_1__*,int ,int ,int,int,int) ;

Selectivity
FUNC_5(PlannerInfo *VAR_1, Node *VAR_2, int VAR_3)
{
 VariableStatData VAR_4;
 double VAR_5;

 FUNC_3(VAR_1, VAR_2, VAR_3, &VAR_4);
 if (FUNC_1(VAR_4.statsTuple))
 {




  VAR_5 = FUNC_4(&VAR_4, VAR_0,
        FUNC_0(1), 0, 1, 0);
 }
 else
 {

  VAR_5 = 0.5;
 }
 FUNC_2(VAR_4);
 return VAR_5;
}
