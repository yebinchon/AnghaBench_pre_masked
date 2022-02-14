
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int op; struct TYPE_4__* pLeft; } ;
typedef TYPE_1__ Expr ;


 int VAR_0 ;






 int VAR_1 ;

 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(Expr *VAR_2){
  if( !FUNC_0(VAR_2) ){
    return 0;
  }
  if( (VAR_2->flags & VAR_0)==0 ){
    return 1;
  }
  while( VAR_2->op==VAR_1 ) VAR_2 = VAR_2->pLeft;
  switch( VAR_2->op ){

    case 134:

    case 128:
    case 132:
    case 133:
    case 131:
    case 130: {
      FUNC_1( VAR_2->op==134 );
      FUNC_1( VAR_2->op==128 );
      FUNC_1( VAR_2->op==132 );
      FUNC_1( VAR_2->op==133 );
      FUNC_1( VAR_2->op==131 );
      FUNC_1( VAR_2->op==130 );




      return 0;
    }
    case 129: {
      if( VAR_2->pLeft->op==133 || VAR_2->pLeft->op==132 ){
        return 0;
      }
      break;
    }
    default: {
      break;
    }
  }
  return 1;
}
