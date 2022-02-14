
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int nTransOpen; int nTransAlloc; TYPE_2__* aTrans; int pEnv; scalar_t__ bReadonly; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_11__ {int log; int tree; } ;
typedef TYPE_2__ TransMark ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*,int) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;

int FUNC_6(lsm_db *VAR_3, int VAR_4){
  int VAR_5;

  FUNC_0( VAR_3 );
  VAR_5 = (VAR_3->bReadonly ? VAR_2 : VAR_1);


  if( VAR_4<0 ) VAR_4 = VAR_3->nTransOpen + 1;
  if( VAR_4>VAR_3->nTransOpen ){
    int VAR_6;


    if( VAR_5==VAR_1 && VAR_3->nTransAlloc<VAR_4 ){
      TransMark *VAR_7;
      int VAR_8 = sizeof(TransMark) * (VAR_4+1);
      VAR_7 = (TransMark *)FUNC_3(VAR_3->pEnv, VAR_3->aTrans, VAR_8);
      if( !VAR_7 ){
        VAR_5 = VAR_0;
      }else{
        VAR_8 = sizeof(TransMark) * (VAR_4+1 - VAR_3->nTransAlloc);
        FUNC_5(&VAR_7[VAR_3->nTransAlloc], 0, VAR_8);
        VAR_3->nTransAlloc = VAR_4+1;
        VAR_3->aTrans = VAR_7;
      }
    }

    if( VAR_5==VAR_1 && VAR_3->nTransOpen==0 ){
      VAR_5 = FUNC_1(VAR_3);
    }

    if( VAR_5==VAR_1 ){
      for(VAR_6=VAR_3->nTransOpen; VAR_6<VAR_4; VAR_6++){
        FUNC_4(VAR_3, &VAR_3->aTrans[VAR_6].tree);
        FUNC_2(VAR_3, &VAR_3->aTrans[VAR_6].log);
      }
      VAR_3->nTransOpen = VAR_4;
    }
  }

  return VAR_5;
}
