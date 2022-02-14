
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_join; int varRelid; int selectivity; int * sjinfo; int jointype; void* inputcollid; int * args; void* funcid; int * root; int type; } ;
typedef TYPE_1__ SupportRequestSelectivity ;
typedef int SpecialJoinInfo ;
typedef int Selectivity ;
typedef int RegProcedure ;
typedef int PlannerInfo ;
typedef void* Oid ;
typedef int List ;
typedef int JoinType ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,double) ;
 int FUNC_4 (void*) ;

Selectivity
FUNC_5(PlannerInfo *VAR_2,
      Oid VAR_3,
      List *VAR_4,
      Oid VAR_5,
      bool VAR_6,
      int VAR_7,
      JoinType VAR_8,
      SpecialJoinInfo *VAR_9)
{
 RegProcedure VAR_10 = FUNC_4(VAR_3);
 SupportRequestSelectivity VAR_11;
 SupportRequestSelectivity *VAR_12;
 if (!VAR_10)
  return (Selectivity) 0.3333333;

 VAR_11.type = VAR_1;
 VAR_11.root = VAR_2;
 VAR_11.funcid = VAR_3;
 VAR_11.args = VAR_4;
 VAR_11.inputcollid = VAR_5;
 VAR_11.is_join = VAR_6;
 VAR_11.varRelid = VAR_7;
 VAR_11.jointype = VAR_8;
 VAR_11.sjinfo = VAR_9;
 VAR_11.selectivity = -1;

 VAR_12 = (SupportRequestSelectivity *)
  FUNC_0(FUNC_1(VAR_10,
           FUNC_2(&VAR_11)));


 if (VAR_12 != &VAR_11)
  return (Selectivity) 0.3333333;

 if (VAR_11.selectivity < 0.0 || VAR_11.selectivity > 1.0)
  FUNC_3(VAR_0, "invalid function selectivity: %f", VAR_11.selectivity);

 return (Selectivity) VAR_11.selectivity;
}
