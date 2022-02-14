
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int Node ;
typedef int List ;
typedef int FuncExpr ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int ,int ,int *,int ,int ,int ) ;
 int * FUNC_2 (int ,int ) ;

void
FUNC_3(Oid VAR_2,
          Oid VAR_3,
          Oid VAR_4,
          Expr **VAR_5)
{
 Node *VAR_6;
 List *VAR_7;
 FuncExpr *VAR_8;


 VAR_6 = FUNC_2(VAR_2, VAR_3);

 VAR_7 = FUNC_0(VAR_6, VAR_6);

 VAR_8 = FUNC_1(VAR_4,
       VAR_2,
       VAR_7,
       VAR_1,
       VAR_3,
       VAR_0);

 *VAR_5 = (Expr *) VAR_8;
}
