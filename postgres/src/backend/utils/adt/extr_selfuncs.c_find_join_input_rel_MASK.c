
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relids ;
typedef int RelOptInfo ;
typedef int PlannerInfo ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *,int ) ;

__attribute__((used)) static RelOptInfo *
FUNC_5(PlannerInfo *VAR_1, Relids VAR_2)
{
 RelOptInfo *VAR_3 = ((void*)0);

 switch (FUNC_0(VAR_2))
 {
  case 130:

   break;
  case 128:
   VAR_3 = FUNC_3(VAR_1, FUNC_1(VAR_2));
   break;
  case 129:
   VAR_3 = FUNC_4(VAR_1, VAR_2);
   break;
 }

 if (VAR_3 == ((void*)0))
  FUNC_2(VAR_0, "could not find RelOptInfo for given relids");

 return VAR_3;
}
