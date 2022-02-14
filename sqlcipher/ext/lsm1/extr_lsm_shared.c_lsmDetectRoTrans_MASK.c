
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bReadonly; } ;
typedef TYPE_1__ lsm_db ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int,int ) ;

int FUNC_2(lsm_db *VAR_4, int *VAR_5){
  int VAR_6;


  FUNC_0( VAR_4->bReadonly==0 );

  VAR_6 = FUNC_1(VAR_4, VAR_2, 1, VAR_1);
  if( VAR_6==VAR_0 ){
    *VAR_5 = 1;
    VAR_6 = VAR_3;
  }else{
    *VAR_5 = 0;
  }

  return VAR_6;
}
