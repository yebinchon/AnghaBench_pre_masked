
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_4__* aArray; } ;
struct TYPE_13__ {int pCtx; int (* xFree ) (int ) ;} ;
struct TYPE_12__ {int pCtx; int (* xFree ) (int ) ;} ;
struct TYPE_15__ {int pEnv; struct TYPE_15__* apShm; struct TYPE_15__* aTrans; TYPE_3__ rollback; TYPE_2__ compress; TYPE_1__ factory; int pFS; scalar_t__ pClient; scalar_t__ nTransOpen; scalar_t__ pCsr; } ;
typedef TYPE_4__ lsm_db ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,TYPE_4__*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

int FUNC_10(lsm_db *VAR_2){
  int VAR_3 = VAR_1;
  if( VAR_2 ){
    FUNC_1(VAR_2);
    if( VAR_2->pCsr || VAR_2->nTransOpen ){
      VAR_3 = VAR_0;
    }else{
      FUNC_7(VAR_2);
      FUNC_4(VAR_2->pEnv, VAR_2->pClient);
      VAR_2->pClient = 0;

      FUNC_0(VAR_2);

      FUNC_2(VAR_2);
      FUNC_6(VAR_2);
      FUNC_5(VAR_2->pFS);




      if( VAR_2->factory.xFree ) VAR_2->factory.xFree(VAR_2->factory.pCtx);
      if( VAR_2->compress.xFree ) VAR_2->compress.xFree(VAR_2->compress.pCtx);

      FUNC_3(VAR_2->pEnv, VAR_2->rollback.aArray);
      FUNC_3(VAR_2->pEnv, VAR_2->aTrans);
      FUNC_3(VAR_2->pEnv, VAR_2->apShm);
      FUNC_3(VAR_2->pEnv, VAR_2);
    }
  }
  return VAR_3;
}
