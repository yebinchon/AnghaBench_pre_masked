
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* pSelect; } ;
struct TYPE_14__ {TYPE_3__ u; } ;
typedef TYPE_5__ Walker ;
struct TYPE_10__ {TYPE_2__* pWin; } ;
struct TYPE_15__ {scalar_t__ op; TYPE_1__ y; } ;
struct TYPE_13__ {TYPE_2__* pWin; } ;
struct TYPE_11__ {struct TYPE_11__* pNextWin; } ;
typedef TYPE_6__ Expr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(Walker *VAR_3, Expr *VAR_4){
  if( VAR_4->op==VAR_1 && VAR_4->y.pWin!=0 ){
    FUNC_1( FUNC_0(VAR_4, VAR_0) );
    VAR_4->y.pWin->pNextWin = VAR_3->u.pSelect->pWin;
    VAR_3->u.pSelect->pWin = VAR_4->y.pWin;
  }
  return VAR_2;
}
