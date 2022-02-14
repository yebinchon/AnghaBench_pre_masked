
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int pEnv; struct TYPE_10__* pNext; int pFS; scalar_t__ pShmhdr; TYPE_3__* pDatabase; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_13__ {TYPE_3__* pDatabase; } ;
struct TYPE_12__ {scalar_t__ nDbRef; scalar_t__ bMultiProc; int nShmChunk; TYPE_2__* pLsmFile; TYPE_2__** apShmChunk; struct TYPE_12__* pDbNext; int pClientMutex; TYPE_1__* pConn; } ;
struct TYPE_11__ {int pFile; struct TYPE_11__* pNext; } ;
typedef TYPE_2__ LsmFile ;
typedef TYPE_3__ Database ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 TYPE_6__ VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

void FUNC_10(lsm_db *VAR_1){
  Database *VAR_2 = VAR_1->pDatabase;
  if( VAR_2 ){
    lsm_db **VAR_3;

    if( VAR_1->pShmhdr ){
      FUNC_1(VAR_1);
    }

    FUNC_7(VAR_1->pFS);
    FUNC_8(VAR_1->pEnv, VAR_2->pClientMutex);
    for(VAR_3=&VAR_2->pConn; *VAR_3!=VAR_1; VAR_3=&((*VAR_3)->pNext));
    *VAR_3 = VAR_1->pNext;
    FUNC_0(VAR_1);
    FUNC_9(VAR_1->pEnv, VAR_2->pClientMutex);

    FUNC_2(VAR_1->pEnv);
    VAR_2->nDbRef--;
    if( VAR_2->nDbRef==0 ){
      LsmFile *VAR_4;
      LsmFile *VAR_5;
      Database **VAR_6;


      for(VAR_6=&VAR_0.pDatabase; *VAR_6!=VAR_2; VAR_6=&((*VAR_6)->pDbNext));
      *VAR_6 = VAR_2->pDbNext;


      if( VAR_2->bMultiProc==0 ){
        int VAR_7;
        for(VAR_7=0; VAR_7<VAR_2->nShmChunk; VAR_7++){
          FUNC_6(VAR_1->pEnv, VAR_2->apShmChunk[VAR_7]);
        }
      }


      for(VAR_4=VAR_2->pLsmFile; VAR_4; VAR_4=VAR_5){
        VAR_5 = VAR_4->pNext;
        FUNC_5(VAR_1->pEnv, VAR_4->pFile);
        FUNC_6(VAR_1->pEnv, VAR_4);
      }
      FUNC_3(VAR_1->pEnv, VAR_2);
    }
    FUNC_4(VAR_1->pEnv);
  }
}
