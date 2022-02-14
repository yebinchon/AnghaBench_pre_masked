
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int nTransOpen; TYPE_2__* aTrans; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_10__ {int log; int tree; } ;
typedef TYPE_2__ TransMark ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;

int FUNC_6(lsm_db *VAR_1, int VAR_2){
  int VAR_3 = VAR_0;
  FUNC_1( VAR_1 );

  if( VAR_1->nTransOpen ){

    if( VAR_2<0 ) VAR_2 = FUNC_0(0, VAR_1->nTransOpen - 1);

    if( VAR_2<=VAR_1->nTransOpen ){
      TransMark *VAR_4 = &VAR_1->aTrans[(VAR_2==0 ? 0 : VAR_2-1)];
      FUNC_5(VAR_1, &VAR_4->tree);
      if( VAR_2 ) FUNC_4(VAR_1, &VAR_4->log);
      VAR_1->nTransOpen = VAR_2;
    }

    if( VAR_1->nTransOpen==0 ){
      FUNC_3(VAR_1, 0);
    }
    FUNC_2(VAR_1);
  }

  return VAR_3;
}
