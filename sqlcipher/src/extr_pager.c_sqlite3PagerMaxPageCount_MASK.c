
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mxPgno; scalar_t__ eState; } ;
typedef TYPE_1__ Pager ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

int FUNC_1(Pager *VAR_1, int VAR_2){
  if( VAR_2>0 ){
    VAR_1->mxPgno = VAR_2;
  }
  FUNC_0( VAR_1->eState!=VAR_0 );




  return VAR_1->mxPgno;
}
