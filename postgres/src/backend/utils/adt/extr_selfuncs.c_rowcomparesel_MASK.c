
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rargs; int largs; int inputcollids; int opnos; } ;
typedef int SpecialJoinInfo ;
typedef int Selectivity ;
typedef TYPE_1__ RowCompareExpr ;
typedef int PlannerInfo ;
typedef int Oid ;
typedef int Node ;
typedef int List ;
typedef int JoinType ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ,int *,int ,int) ;

Selectivity
FUNC_6(PlannerInfo *VAR_0,
     RowCompareExpr *VAR_1,
     int VAR_2, JoinType VAR_3, SpecialJoinInfo *VAR_4)
{
 Selectivity VAR_5;
 Oid VAR_6 = FUNC_3(VAR_1->opnos);
 Oid VAR_7 = FUNC_3(VAR_1->inputcollids);
 List *VAR_8;
 bool VAR_9;


 VAR_8 = FUNC_4(FUNC_2(VAR_1->largs), FUNC_2(VAR_1->rargs));






 if (VAR_2 != 0)
 {




  VAR_9 = 0;
 }
 else if (VAR_4 == ((void*)0))
 {




  VAR_9 = 0;
 }
 else
 {



  VAR_9 = (FUNC_0((Node *) VAR_8) > 1);
 }

 if (VAR_9)
 {

  VAR_5 = FUNC_1(VAR_0, VAR_6,
         VAR_8,
         VAR_7,
         VAR_3,
         VAR_4);
 }
 else
 {

  VAR_5 = FUNC_5(VAR_0, VAR_6,
          VAR_8,
          VAR_7,
          VAR_2);
 }

 return VAR_5;
}
