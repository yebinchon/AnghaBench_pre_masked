
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_4__ {int zName; } ;
typedef int IdList ;
typedef TYPE_2__ ExprList ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(IdList *VAR_0, ExprList *VAR_1){
  int VAR_2;
  if( VAR_0==0 || FUNC_0(VAR_1==0) ) return 1;
  for(VAR_2=0; VAR_2<VAR_1->nExpr; VAR_2++){
    if( FUNC_1(VAR_0, VAR_1->a[VAR_2].zName)>=0 ) return 1;
  }
  return 0;
}
