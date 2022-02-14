
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_4__ {int pExpr; } ;
typedef int NameContext ;
typedef TYPE_2__ ExprList ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;

int FUNC_1(
  NameContext *VAR_2,
  ExprList *VAR_3
){
  int VAR_4;
  if( VAR_3 ){
    for(VAR_4=0; VAR_4<VAR_3->nExpr; VAR_4++){
      if( FUNC_0(VAR_2, VAR_3->a[VAR_4].pExpr) ) return VAR_0;
    }
  }
  return VAR_1;
}
