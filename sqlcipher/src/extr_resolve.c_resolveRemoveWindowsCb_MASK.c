
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


struct TYPE_13__ {struct TYPE_13__* pNextWin; } ;
typedef TYPE_4__ Window ;
struct TYPE_11__ {TYPE_1__* pSelect; } ;
struct TYPE_14__ {TYPE_2__ u; } ;
typedef TYPE_5__ Walker ;
struct TYPE_12__ {TYPE_4__* pWin; } ;
struct TYPE_15__ {TYPE_3__ y; } ;
struct TYPE_10__ {TYPE_4__* pWin; } ;
typedef TYPE_6__ Expr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(Walker *VAR_2, Expr *VAR_3){
  if( FUNC_0(VAR_3, VAR_0) ){
    Window **VAR_4;
    for(VAR_4=&VAR_2->u.pSelect->pWin; *VAR_4; VAR_4=&(*VAR_4)->pNextWin){
      if( *VAR_4==VAR_3->y.pWin ){
        *VAR_4 = (*VAR_4)->pNextWin;
        break;
      }
    }
  }
  return VAR_1;
}
