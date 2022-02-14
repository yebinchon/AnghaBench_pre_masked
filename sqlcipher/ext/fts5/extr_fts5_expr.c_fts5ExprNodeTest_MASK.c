
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ bEof; int eType; } ;
typedef TYPE_1__ Fts5ExprNode ;
typedef int Fts5Expr ;



 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(
  Fts5Expr *VAR_2,
  Fts5ExprNode *VAR_3
){
  int VAR_4 = VAR_1;
  if( VAR_3->bEof==0 ){
    switch( VAR_3->eType ){

      case 129: {
        VAR_4 = FUNC_4(VAR_2, VAR_3);
        break;
      }

      case 128: {
        VAR_4 = FUNC_5(VAR_2, VAR_3);
        break;
      }

      case 131: {
        VAR_4 = FUNC_1(VAR_2, VAR_3);
        break;
      }

      case 130: {
        FUNC_3(VAR_2, VAR_3);
        break;
      }

      default: FUNC_0( VAR_3->eType==VAR_0 ); {
        VAR_4 = FUNC_2(VAR_2, VAR_3);
        break;
      }
    }
  }
  return VAR_4;
}
