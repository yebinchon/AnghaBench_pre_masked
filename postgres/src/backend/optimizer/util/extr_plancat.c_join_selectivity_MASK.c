
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double float8 ;
typedef int SpecialJoinInfo ;
typedef int Selectivity ;
typedef int RegProcedure ;
typedef int PlannerInfo ;
typedef int Oid ;
typedef int List ;
typedef int JoinType ;


 double FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,double) ;
 int FUNC_6 (int ) ;

Selectivity
FUNC_7(PlannerInfo *VAR_1,
     Oid VAR_2,
     List *VAR_3,
     Oid VAR_4,
     JoinType VAR_5,
     SpecialJoinInfo *VAR_6)
{
 RegProcedure VAR_7 = FUNC_6(VAR_2);
 float8 VAR_8;





 if (!VAR_7)
  return (Selectivity) 0.5;

 VAR_8 = FUNC_0(FUNC_3(VAR_7,
             VAR_4,
             FUNC_4(VAR_1),
             FUNC_2(VAR_2),
             FUNC_4(VAR_3),
             FUNC_1(VAR_5),
             FUNC_4(VAR_6)));

 if (VAR_8 < 0.0 || VAR_8 > 1.0)
  FUNC_5(VAR_0, "invalid join selectivity: %f", VAR_8);

 return (Selectivity) VAR_8;
}
