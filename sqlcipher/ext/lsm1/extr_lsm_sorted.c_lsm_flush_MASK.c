
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ nTransOpen; scalar_t__ pCsr; } ;
typedef TYPE_1__ lsm_db ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(lsm_db *VAR_2){
  int VAR_3;

  if( VAR_2->nTransOpen>0 || VAR_2->pCsr ){
    VAR_3 = VAR_0;
  }else{
    VAR_3 = FUNC_0(VAR_2);
    if( VAR_3==VAR_1 ){
      FUNC_3(VAR_2);
      FUNC_4(VAR_2);
      FUNC_5(VAR_2);
      FUNC_4(VAR_2);
    }

    if( VAR_3==VAR_1 ){
      VAR_3 = FUNC_2(VAR_2, 1);
    }else{
      FUNC_2(VAR_2, 0);
    }
    FUNC_1(VAR_2);
  }

  return VAR_3;
}
