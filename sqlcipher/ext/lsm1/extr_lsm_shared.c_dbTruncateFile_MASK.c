
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_5__* pWorker; int pEnv; int pFS; } ;
typedef TYPE_1__ lsm_db ;
typedef int i64 ;
struct TYPE_10__ {scalar_t__ nBlock; } ;
struct TYPE_9__ {int iInUse; scalar_t__ nBlock; } ;
typedef TYPE_2__ DbTruncateCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_5__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int,int ,void*) ;

__attribute__((used)) static int FUNC_7(lsm_db *VAR_4){
  int VAR_5;

  FUNC_0( VAR_4->pWorker==0 );
  FUNC_0( FUNC_5(VAR_4, VAR_0, VAR_1) );
  VAR_5 = FUNC_1(VAR_4);

  if( VAR_5==VAR_2 ){
    DbTruncateCtx VAR_6;




    VAR_6.nBlock = VAR_4->pWorker->nBlock;
    VAR_6.iInUse = -1;
    VAR_5 = FUNC_6(VAR_4, 1, VAR_3, (void *)&VAR_6);



    if( VAR_5==VAR_2 ){
      VAR_5 = FUNC_4(
          VAR_4->pFS, (i64)VAR_6.nBlock*FUNC_3(VAR_4->pFS)
      );
    }
  }

  FUNC_2(VAR_4->pEnv, VAR_4->pWorker);
  VAR_4->pWorker = 0;
  return VAR_5;
}
