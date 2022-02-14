
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_4__ {scalar_t__ pUpsertIdx; int * pUpsertWhere; int * pUpsertSet; int * pUpsertTargetWhere; int * pUpsertTarget; } ;
typedef TYPE_1__ Upsert ;
typedef int ExprList ;
typedef int Expr ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

Upsert *FUNC_3(
  sqlite3 *VAR_0,
  ExprList *VAR_1,
  Expr *VAR_2,
  ExprList *VAR_3,
  Expr *VAR_4
){
  Upsert *VAR_5;
  VAR_5 = FUNC_0(VAR_0, sizeof(Upsert));
  if( VAR_5==0 ){
    FUNC_2(VAR_0, VAR_1);
    FUNC_1(VAR_0, VAR_2);
    FUNC_2(VAR_0, VAR_3);
    FUNC_1(VAR_0, VAR_4);
    return 0;
  }else{
    VAR_5->pUpsertTarget = VAR_1;
    VAR_5->pUpsertTargetWhere = VAR_2;
    VAR_5->pUpsertSet = VAR_3;
    VAR_5->pUpsertWhere = VAR_4;
    VAR_5->pUpsertIdx = 0;
  }
  return VAR_5;
}
