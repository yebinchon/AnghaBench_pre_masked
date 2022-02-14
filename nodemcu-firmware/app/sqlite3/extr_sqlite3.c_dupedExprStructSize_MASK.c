
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pList; } ;
struct TYPE_6__ {scalar_t__ op; scalar_t__ pRight; TYPE_1__ x; scalar_t__ pLeft; } ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(Expr *VAR_10, int VAR_11){
  int VAR_12;
  FUNC_1( VAR_11==VAR_5 || VAR_11==0 );
  FUNC_1( VAR_6<=0xfff );
  FUNC_1( (0xfff & (VAR_3|VAR_4))==0 );
  if( 0==VAR_11 || VAR_10->op==VAR_9 ){
    VAR_12 = VAR_6;
  }else{
    FUNC_1( !FUNC_0(VAR_10, VAR_4|VAR_3) );
    FUNC_1( !FUNC_0(VAR_10, VAR_0) );
    FUNC_1( !FUNC_0(VAR_10, VAR_1) );
    FUNC_1( !FUNC_0(VAR_10, VAR_2) );
    if( VAR_10->pLeft || VAR_10->x.pList ){
      VAR_12 = VAR_7 | VAR_3;
    }else{
      FUNC_1( VAR_10->pRight==0 );
      VAR_12 = VAR_8 | VAR_4;
    }
  }
  return VAR_12;
}
