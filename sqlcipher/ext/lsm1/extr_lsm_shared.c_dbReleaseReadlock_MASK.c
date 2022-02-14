
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iReader; scalar_t__ bRoTrans; } ;
typedef TYPE_1__ lsm_db ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;

int FUNC_2(lsm_db *VAR_2){
  int VAR_3 = VAR_1;
  if( VAR_2->iReader>=0 ){
    VAR_3 = FUNC_1(VAR_2, FUNC_0(VAR_2->iReader), VAR_0, 0);
    VAR_2->iReader = -1;
  }
  VAR_2->bRoTrans = 0;
  return VAR_3;
}
