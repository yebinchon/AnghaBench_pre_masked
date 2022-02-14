
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int w ;
struct TYPE_5__ {int* aiCol; } ;
struct TYPE_6__ {int eCode; TYPE_1__ u; int xExprCallback; } ;
typedef TYPE_2__ Walker ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int) ;

int FUNC_3(
  Expr *VAR_3,
  int *VAR_4,
  int VAR_5
){
  Walker VAR_6;
  FUNC_0(&VAR_6, 0, sizeof(VAR_6));
  VAR_6.eCode = 0;
  VAR_6.xExprCallback = VAR_2;
  VAR_6.u.aiCol = VAR_4;
  FUNC_1(&VAR_6, VAR_3);
  if( !VAR_5 ){
    FUNC_2( (VAR_6.eCode & VAR_1)!=0 );
    VAR_6.eCode &= ~VAR_1;
  }
  FUNC_2( VAR_6.eCode==0 );
  FUNC_2( VAR_6.eCode==VAR_0 );
  FUNC_2( VAR_6.eCode==VAR_1 );
  FUNC_2( VAR_6.eCode==(VAR_1|VAR_0) );
  return VAR_6.eCode!=0;
}
