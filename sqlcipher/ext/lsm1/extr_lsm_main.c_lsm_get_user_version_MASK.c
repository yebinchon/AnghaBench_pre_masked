
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned int iUsrVersion; } ;
struct TYPE_9__ {scalar_t__ pShmhdr; scalar_t__ iReader; TYPE_1__ treehdr; int bReadonly; } ;
typedef TYPE_2__ lsm_db ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

int FUNC_5(lsm_db *VAR_1, unsigned int *VAR_2){
  int VAR_3 = VAR_0;


  FUNC_1(VAR_1);
  if( VAR_1->pShmhdr==0 ){
    FUNC_0( VAR_1->bReadonly );
    VAR_3 = FUNC_4(VAR_1);
  }else if( VAR_1->iReader<0 ){
    VAR_3 = FUNC_3(VAR_1);
  }


  if( VAR_3==VAR_0 ){
    *VAR_2 = VAR_1->treehdr.iUsrVersion;
  }

  FUNC_2(VAR_1);
  FUNC_1(VAR_1);
  return VAR_3;
}
