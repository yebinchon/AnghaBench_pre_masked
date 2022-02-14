
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RestrictInfo ;
typedef int Relids ;
typedef int Index ;
typedef int Expr ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *,int,int,int,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int,int,int,int ,int ,int ,int ) ;

RestrictInfo *
FUNC_5(Expr *VAR_0,
      bool VAR_1,
      bool VAR_2,
      bool VAR_3,
      Index VAR_4,
      Relids VAR_5,
      Relids VAR_6,
      Relids VAR_7)
{




 if (FUNC_2(VAR_0))
  return (RestrictInfo *) FUNC_4(VAR_0,
                VAR_1,
                VAR_2,
                VAR_3,
                VAR_4,
                VAR_5,
                VAR_6,
                VAR_7);


 FUNC_0(!FUNC_1(VAR_0));

 return FUNC_3(VAR_0,
           ((void*)0),
           VAR_1,
           VAR_2,
           VAR_3,
           VAR_4,
           VAR_5,
           VAR_6,
           VAR_7);
}
