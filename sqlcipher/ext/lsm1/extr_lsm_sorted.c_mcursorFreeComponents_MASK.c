
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lsm_env ;
struct TYPE_5__ {int nPtr; scalar_t__ pBtCsr; scalar_t__* apTreeCsr; int * pSystemVal; int * aTree; scalar_t__ nTree; int * aPtr; TYPE_1__* pDb; } ;
struct TYPE_4__ {int * pEnv; } ;
typedef TYPE_2__ MultiCursor ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(MultiCursor *VAR_0){
  int VAR_1;
  lsm_env *VAR_2 = VAR_0->pDb->pEnv;


  FUNC_2(VAR_0->apTreeCsr[0]);
  FUNC_2(VAR_0->apTreeCsr[1]);


  for(VAR_1=0; VAR_1<VAR_0->nPtr; VAR_1++){
    FUNC_3(&VAR_0->aPtr[VAR_1], 0);
  }


  FUNC_0(VAR_0->pBtCsr);


  FUNC_1(VAR_2, VAR_0->aPtr);
  FUNC_1(VAR_2, VAR_0->aTree);
  FUNC_1(VAR_2, VAR_0->pSystemVal);


  VAR_0->nPtr = 0;
  VAR_0->aPtr = 0;
  VAR_0->nTree = 0;
  VAR_0->aTree = 0;
  VAR_0->pSystemVal = 0;
  VAR_0->apTreeCsr[0] = 0;
  VAR_0->apTreeCsr[1] = 0;
  VAR_0->pBtCsr = 0;
}
