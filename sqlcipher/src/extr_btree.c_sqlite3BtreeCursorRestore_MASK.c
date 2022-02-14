
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ eState; } ;
typedef TYPE_1__ BtCursor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(BtCursor *VAR_2, int *VAR_3){
  int VAR_4;

  FUNC_0( VAR_2!=0 );
  FUNC_0( VAR_2->eState!=VAR_0 );
  VAR_4 = FUNC_1(VAR_2);
  if( VAR_4 ){
    *VAR_3 = 1;
    return VAR_4;
  }
  if( VAR_2->eState!=VAR_0 ){
    *VAR_3 = 1;
  }else{
    *VAR_3 = 0;
  }
  return VAR_1;
}
