
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_5__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_4__ {scalar_t__ sortOrder; } ;
typedef TYPE_2__ ExprList ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;

void FUNC_1(ExprList *VAR_3, int VAR_4){
  if( VAR_3==0 ) return;
  FUNC_0( VAR_2<0 && VAR_0>=0 && VAR_1>0 );
  FUNC_0( VAR_3->nExpr>0 );
  if( VAR_4<0 ){
    FUNC_0( VAR_3->a[VAR_3->nExpr-1].sortOrder==VAR_0 );
    return;
  }
  VAR_3->a[VAR_3->nExpr-1].sortOrder = (u8)VAR_4;
}
