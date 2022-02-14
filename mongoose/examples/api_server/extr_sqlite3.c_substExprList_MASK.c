
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_7__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_6__ {int pExpr; } ;
typedef TYPE_2__ ExprList ;


 int FUNC_0 (int *,int ,int,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(
  sqlite3 *VAR_0,
  ExprList *VAR_1,
  int VAR_2,
  ExprList *VAR_3
){
  int VAR_4;
  if( VAR_1==0 ) return;
  for(VAR_4=0; VAR_4<VAR_1->nExpr; VAR_4++){
    VAR_1->a[VAR_4].pExpr = FUNC_0(VAR_0, VAR_1->a[VAR_4].pExpr, VAR_2, VAR_3);
  }
}
