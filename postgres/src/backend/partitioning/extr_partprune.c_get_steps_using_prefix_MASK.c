
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StrategyNumber ;
typedef int PartitionPruneStep ;
typedef int Oid ;
typedef int List ;
typedef int GeneratePruningStepsContext ;
typedef int Expr ;
typedef int Bitmapset ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,int,int *,int ,int *) ;
 int * FUNC_1 (int *,int ,int,int *,int ,int,int *,int *,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static List *
FUNC_6(GeneratePruningStepsContext *VAR_1,
        StrategyNumber VAR_2,
        bool VAR_3,
        Expr *VAR_4,
        Oid VAR_5,
        int VAR_6,
        Bitmapset *VAR_7,
        List *VAR_8)
{

 if (FUNC_3(VAR_8) == 0)
 {
  PartitionPruneStep *VAR_9;

  VAR_9 = FUNC_0(VAR_1,
         VAR_2,
         VAR_3,
         FUNC_4(VAR_4),
         FUNC_5(VAR_5),
         VAR_7);
  return FUNC_4(VAR_9);
 }


 return FUNC_1(VAR_1,
            VAR_2,
            VAR_3,
            VAR_4,
            VAR_5,
            VAR_6,
            VAR_7,
            VAR_8,
            FUNC_2(VAR_8),
            VAR_0, VAR_0);
}
