
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int List ;
typedef int FuncExpr ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ,int *,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(Oid VAR_4,
         Expr **VAR_5)
{
 List *VAR_6;
 FuncExpr *VAR_7;


 VAR_6 = FUNC_0(FUNC_2(VAR_2, VAR_3));

 VAR_7 = FUNC_1(VAR_4,
       VAR_0,
       VAR_6,
       VAR_3,
       VAR_3,
       VAR_1);
 *VAR_5 = (Expr *) VAR_7;
}
