
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int errCode; scalar_t__ eState; } ;
typedef TYPE_1__ Pager ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

int FUNC_4(Pager *VAR_5){
  int VAR_6 = VAR_5->errCode;
  FUNC_0( FUNC_1(VAR_5) );
  if( VAR_6==VAR_4 ){
    FUNC_0( VAR_5->eState==VAR_1
         || VAR_5->eState==VAR_2
         || VAR_5->eState==VAR_3
    );
    FUNC_0( FUNC_1(VAR_5) );
    if( 0==FUNC_2(VAR_5) ){
      VAR_6 = FUNC_3(VAR_5, VAR_0);
    }
  }
  return VAR_6;
}
