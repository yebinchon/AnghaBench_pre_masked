
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_7__ {scalar_t__ nMapLimit; int nMetaRwSize; int pEnv; int fdDb; int nMetasize; } ;
struct TYPE_6__ {int iPg; struct TYPE_6__* aData; scalar_t__ bWrite; TYPE_2__* pFS; } ;
typedef TYPE_1__ MetaPage ;
typedef TYPE_2__ FileSystem ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,TYPE_1__*,int) ;
 int FUNC_1 (int ,TYPE_1__*) ;

int FUNC_2(MetaPage *VAR_1){
  int VAR_2 = VAR_0;
  if( VAR_1 ){
    FileSystem *VAR_3 = VAR_1->pFS;

    if( VAR_3->nMapLimit==0 ){
      if( VAR_1->bWrite ){
        i64 VAR_4 = (VAR_1->iPg==2 ? VAR_3->nMetasize : 0);
        int VAR_5 = VAR_3->nMetaRwSize;
        VAR_2 = FUNC_0(VAR_3->pEnv, VAR_3->fdDb, VAR_4, VAR_1->aData, VAR_5);
      }
      FUNC_1(VAR_3->pEnv, VAR_1->aData);
    }

    FUNC_1(VAR_3->pEnv, VAR_1);
  }
  return VAR_2;
}
