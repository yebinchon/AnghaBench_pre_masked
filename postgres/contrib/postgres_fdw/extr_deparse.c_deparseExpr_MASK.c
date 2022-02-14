
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int deparse_expr_cxt ;
typedef int Var ;
typedef int SubscriptingRef ;
typedef int ScalarArrayOpExpr ;
typedef int RelabelType ;
typedef int Param ;
typedef int OpExpr ;
typedef int NullTest ;
typedef int FuncExpr ;
typedef int Expr ;
typedef int DistinctExpr ;
typedef int Const ;
typedef int BoolExpr ;
typedef int ArrayExpr ;
typedef int Aggref ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int ,char*,int) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void
FUNC_15(Expr *VAR_1, deparse_expr_cxt *VAR_2)
{
 if (VAR_1 == ((void*)0))
  return;

 switch (FUNC_14(VAR_1))
 {
  case 128:
   FUNC_12((Var *) VAR_1, VAR_2);
   break;
  case 137:
   FUNC_3((Const *) VAR_1, VAR_2, 0);
   break;
  case 132:
   FUNC_8((Param *) VAR_1, VAR_2);
   break;
  case 129:
   FUNC_11((SubscriptingRef *) VAR_1, VAR_2);
   break;
  case 135:
   FUNC_5((FuncExpr *) VAR_1, VAR_2);
   break;
  case 133:
   FUNC_7((OpExpr *) VAR_1, VAR_2);
   break;
  case 136:
   FUNC_4((DistinctExpr *) VAR_1, VAR_2);
   break;
  case 130:
   FUNC_10((ScalarArrayOpExpr *) VAR_1, VAR_2);
   break;
  case 131:
   FUNC_9((RelabelType *) VAR_1, VAR_2);
   break;
  case 138:
   FUNC_2((BoolExpr *) VAR_1, VAR_2);
   break;
  case 134:
   FUNC_6((NullTest *) VAR_1, VAR_2);
   break;
  case 139:
   FUNC_1((ArrayExpr *) VAR_1, VAR_2);
   break;
  case 140:
   FUNC_0((Aggref *) VAR_1, VAR_2);
   break;
  default:
   FUNC_13(VAR_0, "unsupported expression type for deparse: %d",
     (int) FUNC_14(VAR_1));
   break;
 }
}
