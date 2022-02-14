
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nMerge; int pFS; scalar_t__ pCsr; scalar_t__ nTransOpen; } ;
typedef TYPE_1__ lsm_db ;
typedef int i64 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(lsm_db *VAR_1, int VAR_2, int VAR_3, int *VAR_4){
  int VAR_5;
  int VAR_6;
  int VAR_7;
  int VAR_8 = 0;



  if( VAR_1->nTransOpen || VAR_1->pCsr ) return VAR_0;
  if( VAR_2<=0 ) VAR_2 = VAR_1->nMerge;

  FUNC_2(VAR_1->pFS);


  VAR_6 = FUNC_1(VAR_1->pFS);
  if( VAR_3>=0 ){
    VAR_7 = ((i64)VAR_3 * 1024 + VAR_6 - 1) / VAR_6;
  }else{
    VAR_7 = -1;
  }

  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_7, &VAR_8);

  if( VAR_4 ){

    *VAR_4 = (int)(((i64)VAR_8 * 1024 + VAR_6 - 1) / VAR_6);
  }
  return VAR_5;
}
