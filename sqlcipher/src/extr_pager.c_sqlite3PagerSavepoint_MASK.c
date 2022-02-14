
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int errCode; int nSavepoint; scalar_t__ journalMode; scalar_t__ eState; TYPE_1__* aSavepoint; int jfd; scalar_t__ nSubRec; int sjfd; } ;
struct TYPE_8__ {int pInSavepoint; } ;
typedef TYPE_1__ PagerSavepoint ;
typedef TYPE_2__ Pager ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(Pager *VAR_8, int VAR_9, int VAR_10){
  int VAR_11 = VAR_8->errCode;





  FUNC_0( VAR_9==VAR_3 || VAR_9==VAR_4 );
  FUNC_0( VAR_10>=0 || VAR_9==VAR_4 );

  if( VAR_11==VAR_7 && VAR_10<VAR_8->nSavepoint ){
    int VAR_12;
    int VAR_13;





    VAR_13 = VAR_10 + (( VAR_9==VAR_3 ) ? 0 : 1);
    for(VAR_12=VAR_13; VAR_12<VAR_8->nSavepoint; VAR_12++){
      FUNC_5(VAR_8->aSavepoint[VAR_12].pInSavepoint);
    }
    VAR_8->nSavepoint = VAR_13;



    if( VAR_9==VAR_3 ){
      if( VAR_13==0 && FUNC_1(VAR_8->sjfd) ){

        if( FUNC_6(VAR_8->sjfd) ){
          VAR_11 = FUNC_7(VAR_8->sjfd, 0);
          FUNC_0( VAR_11==VAR_7 );
        }
        VAR_8->nSubRec = 0;
      }
    }





    else if( FUNC_3(VAR_8) || FUNC_1(VAR_8->jfd) ){
      PagerSavepoint *VAR_14 = (VAR_13==0)?0:&VAR_8->aSavepoint[VAR_13-1];
      VAR_11 = FUNC_2(VAR_8, VAR_14);
      FUNC_0(VAR_11!=VAR_6);
    }
  }

  return VAR_11;
}
