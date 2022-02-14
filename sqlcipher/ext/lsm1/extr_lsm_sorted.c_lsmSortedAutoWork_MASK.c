
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ pWorker; scalar_t__ nTransOpen; scalar_t__ pClient; int aSnapshot; int pEnv; scalar_t__ pCsr; int nMerge; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_14__ {struct TYPE_14__* pNext; } ;
typedef TYPE_2__ Level ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,scalar_t__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 TYPE_2__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,int,char*,int,int,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;

int FUNC_11(
  lsm_db *VAR_2,
  int VAR_3
){
  int VAR_4 = VAR_1;
  int VAR_5 = 0;
  Level *VAR_6;
  int VAR_7 = 0;

  FUNC_0( VAR_2->pWorker==0 );
  FUNC_0( VAR_2->nTransOpen>0 );



  for(VAR_6=FUNC_4(VAR_2->pClient); VAR_6; VAR_6=VAR_6->pNext){

    VAR_5 += 1;
  }
  if( FUNC_10(VAR_2) ){
    VAR_5 += 1;
    VAR_7 = 1;
    VAR_4 = FUNC_9(VAR_2);
    if( VAR_4!=VAR_1 ) return VAR_4;
  }

  if( VAR_5>0 ){
    int VAR_8;

    VAR_8 = VAR_3 * VAR_5;




    FUNC_0( VAR_8>=0 );
    VAR_4 = FUNC_1(VAR_2, VAR_2->nMerge, VAR_8, 0);
    if( VAR_4==VAR_0 ) VAR_4 = VAR_1;

    if( VAR_7 && VAR_2->pCsr ){
      FUNC_7(VAR_2);
      FUNC_5(VAR_2->pEnv, VAR_2->pClient);
      VAR_2->pClient = 0;
      if( VAR_4==VAR_1 ){
        VAR_4 = FUNC_3(VAR_2, 0);
      }
      if( VAR_4==VAR_1 ){
        VAR_4 = FUNC_2(VAR_2, 0, VAR_2->aSnapshot, &VAR_2->pClient);
      }
      if( VAR_4==VAR_1 ){
        VAR_4 = FUNC_8(VAR_2);
      }
    }
  }

  return VAR_4;
}
