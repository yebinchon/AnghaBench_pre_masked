
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Oid ;
typedef int List ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

Expr *
FUNC_7(Oid VAR_4)
{
 Expr *VAR_5 = ((void*)0);


 if (FUNC_1(VAR_4))
 {
  Relation VAR_6 = FUNC_6(VAR_4, VAR_1);
  List *VAR_7;

  VAR_7 = FUNC_0(VAR_6);


  if (VAR_7 == VAR_2)
   VAR_5 = ((void*)0);
  else if (FUNC_3(VAR_7) > 1)
   VAR_5 = FUNC_4(VAR_0, VAR_7, -1);
  else
   VAR_5 = FUNC_2(VAR_7);


  FUNC_5(VAR_6, VAR_3);
 }

 return VAR_5;
}
