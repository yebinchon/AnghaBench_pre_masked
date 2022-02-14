
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int nMerge; } ;
typedef TYPE_1__ lsm_db ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int,int ,int,int ) ;

int FUNC_5(lsm_db *VAR_2){
  int VAR_3;

  VAR_3 = FUNC_0(VAR_2);
  while( VAR_3==VAR_0 && FUNC_2(VAR_2) ){
    VAR_3 = FUNC_4(VAR_2, 256, VAR_2->nMerge, 1, 0);
  }

  if( VAR_3==VAR_0 ){
    VAR_3 = FUNC_3(VAR_2, VAR_1, 0);
  }

  FUNC_1(VAR_2, 1, &VAR_3);
  return VAR_3;
}
