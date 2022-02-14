
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ pShmhdr; scalar_t__ iReader; int bReadonly; } ;
typedef TYPE_1__ lsm_db ;
typedef int lsm_cursor ;
typedef int MultiCursor ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_1__*,int **) ;

int FUNC_7(lsm_db *VAR_1, lsm_cursor **VAR_2){
  int VAR_3 = VAR_0;
  MultiCursor *VAR_4 = 0;


  FUNC_1(VAR_1);

  if( VAR_1->pShmhdr==0 ){
    FUNC_0( VAR_1->bReadonly );
    VAR_3 = FUNC_4(VAR_1);
  }else if( VAR_1->iReader<0 ){
    VAR_3 = FUNC_3(VAR_1);
  }


  if( VAR_3==VAR_0 ){
    VAR_3 = FUNC_6(VAR_1, &VAR_4);
  }




  if( VAR_3!=VAR_0 ){
    FUNC_5(VAR_4, 0);
    FUNC_2(VAR_1);
  }

  FUNC_1(VAR_1);
  *VAR_2 = (lsm_cursor *)VAR_4;
  return VAR_3;
}
