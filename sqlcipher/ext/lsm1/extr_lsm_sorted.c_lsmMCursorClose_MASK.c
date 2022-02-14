
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pEnv; TYPE_3__* pCsrCache; TYPE_3__* pCsr; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_9__ {int nPtr; int val; int key; struct TYPE_9__* pNext; int * apTreeCsr; TYPE_2__* aPtr; int pBtCsr; TYPE_1__* pDb; } ;
struct TYPE_8__ {scalar_t__ pPg; } ;
typedef TYPE_2__ SegmentPtr ;
typedef TYPE_3__ MultiCursor ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;

void FUNC_6(MultiCursor *VAR_0, int VAR_1){
  if( VAR_0 ){
    lsm_db *VAR_2 = VAR_0->pDb;
    MultiCursor **VAR_3;



    for(VAR_3=&VAR_2->pCsr; *VAR_3; VAR_3=&((*VAR_3)->pNext)){
      if( *VAR_3==VAR_0 ){
        *VAR_3 = VAR_0->pNext;
        break;
      }
    }

    if( VAR_1 ){
      int VAR_4;


      FUNC_0( !VAR_0->pBtCsr );
      for(VAR_4=0; VAR_4<VAR_0->nPtr; VAR_4++){
        SegmentPtr *VAR_5 = &VAR_0->aPtr[VAR_4];
        FUNC_2(VAR_5->pPg);
        VAR_5->pPg = 0;
      }


      FUNC_3(VAR_0->apTreeCsr[0]);
      FUNC_3(VAR_0->apTreeCsr[1]);


      VAR_0->pNext = VAR_2->pCsrCache;
      VAR_2->pCsrCache = VAR_0;
    }else{

      FUNC_5(&VAR_0->key);
      FUNC_5(&VAR_0->val);


      FUNC_4(VAR_0);


      FUNC_1(VAR_2->pEnv, VAR_0);
    }
  }
}
