
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ eType; } ;
typedef TYPE_1__ Fts3Expr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1(Fts3Expr *VAR_5){
  FUNC_0( VAR_5->eType!=VAR_3 );
  if( VAR_4 ){
    return VAR_5->eType;
  }else if( VAR_5->eType==VAR_1 ){
    return 1;
  }else if( VAR_5->eType==VAR_2 ){
    return 2;
  }
  FUNC_0( VAR_5->eType==VAR_0 );
  return 3;
}
