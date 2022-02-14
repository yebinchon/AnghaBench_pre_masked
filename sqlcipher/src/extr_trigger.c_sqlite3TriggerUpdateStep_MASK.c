
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3 ;
struct TYPE_7__ {int orconf; int * pWhere; int * pExprList; } ;
typedef TYPE_1__ TriggerStep ;
typedef int Token ;
struct TYPE_8__ {int * db; } ;
typedef TYPE_2__ Parse ;
typedef int ExprList ;
typedef int Expr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *,int ) ;
 TYPE_1__* FUNC_4 (TYPE_2__*,int ,int *,char const*,char const*) ;

TriggerStep *FUNC_5(
  Parse *VAR_3,
  Token *VAR_4,
  ExprList *VAR_5,
  Expr *VAR_6,
  u8 VAR_7,
  const char *VAR_8,
  const char *VAR_9
){
  sqlite3 *VAR_10 = VAR_3->db;
  TriggerStep *VAR_11;

  VAR_11 = FUNC_4(VAR_3, VAR_2, VAR_4,VAR_8,VAR_9);
  if( VAR_11 ){
    if( VAR_1 ){
      VAR_11->pExprList = VAR_5;
      VAR_11->pWhere = VAR_6;
      VAR_5 = 0;
      VAR_6 = 0;
    }else{
      VAR_11->pExprList = FUNC_3(VAR_10, VAR_5, VAR_0);
      VAR_11->pWhere = FUNC_1(VAR_10, VAR_6, VAR_0);
    }
    VAR_11->orconf = VAR_7;
  }
  FUNC_2(VAR_10, VAR_5);
  FUNC_0(VAR_10, VAR_6);
  return VAR_11;
}
