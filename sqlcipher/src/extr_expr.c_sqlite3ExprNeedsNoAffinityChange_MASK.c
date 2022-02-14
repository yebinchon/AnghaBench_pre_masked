
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ op; int op2; int iColumn; int iTable; struct TYPE_3__* pLeft; } ;
typedef TYPE_1__ Expr ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;




 int VAR_5 ;

 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;

int FUNC_1(const Expr *VAR_8, char VAR_9){
  u8 VAR_10;
  if( VAR_9==VAR_0 ) return 1;
  while( VAR_8->op==VAR_7 || VAR_8->op==VAR_6 ){ VAR_8 = VAR_8->pLeft; }
  VAR_10 = VAR_8->op;
  if( VAR_10==VAR_5 ) VAR_10 = VAR_8->op2;
  switch( VAR_10 ){
    case 129: {
      return VAR_9==VAR_1 || VAR_9==VAR_2;
    }
    case 130: {
      return VAR_9==VAR_3 || VAR_9==VAR_2;
    }
    case 128: {
      return VAR_9==VAR_4;
    }
    case 132: {
      return 1;
    }
    case 131: {
      FUNC_0( VAR_8->iTable>=0 );
      return VAR_8->iColumn<0
          && (VAR_9==VAR_1 || VAR_9==VAR_2);
    }
    default: {
      return 0;
    }
  }
}
