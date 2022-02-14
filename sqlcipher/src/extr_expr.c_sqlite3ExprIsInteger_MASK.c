
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iValue; int zToken; } ;
struct TYPE_5__ {int op; int flags; struct TYPE_5__* pLeft; TYPE_1__ u; } ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int*) ;

int FUNC_2(Expr *VAR_2, int *VAR_3){
  int VAR_4 = 0;
  if( VAR_2==0 ) return 0;



  FUNC_0( VAR_2->op!=VAR_1 || (VAR_2->flags & VAR_0)!=0
           || FUNC_1(VAR_2->u.zToken, &VAR_4)==0 );

  if( VAR_2->flags & VAR_0 ){
    *VAR_3 = VAR_2->u.iValue;
    return 1;
  }
  switch( VAR_2->op ){
    case 128: {
      VAR_4 = FUNC_2(VAR_2->pLeft, VAR_3);
      break;
    }
    case 129: {
      int VAR_5;
      if( FUNC_2(VAR_2->pLeft, &VAR_5) ){
        FUNC_0( VAR_5!=(-2147483647-1) );
        *VAR_3 = -VAR_5;
        VAR_4 = 1;
      }
      break;
    }
    default: break;
  }
  return VAR_4;
}
