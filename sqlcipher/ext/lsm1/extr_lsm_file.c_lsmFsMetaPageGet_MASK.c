
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int iPg; int bWrite; TYPE_3__* pFS; struct TYPE_12__* aData; } ;
typedef TYPE_1__ u8 ;
typedef int i64 ;
struct TYPE_13__ {int nMetasize; scalar_t__ nMapLimit; int pEnv; int nMetaRwSize; int fdDb; scalar_t__ pMap; } ;
typedef int Page ;
typedef TYPE_1__ MetaPage ;
typedef TYPE_3__ FileSystem ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int,int*) ;
 int FUNC_2 (int ,int ,int,TYPE_1__*,int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,int,int*) ;
 TYPE_1__* FUNC_5 (int ,int,int*) ;
 int FUNC_6 (TYPE_1__*,int,int) ;

int FUNC_7(
  FileSystem *VAR_1,
  int VAR_2,
  int VAR_3,
  MetaPage **VAR_4
){
  int VAR_5 = VAR_0;
  MetaPage *VAR_6;
  FUNC_0( VAR_3==1 || VAR_3==2 );

  VAR_6 = FUNC_5(VAR_1->pEnv, sizeof(Page), &VAR_5);

  if( VAR_6 ){
    i64 VAR_7 = (VAR_3-1) * VAR_1->nMetasize;
    if( VAR_1->nMapLimit>0 ){
      FUNC_1(VAR_1, 2*VAR_1->nMetasize, &VAR_5);
      VAR_6->aData = (u8 *)(VAR_1->pMap) + VAR_7;
    }else{
      VAR_6->aData = FUNC_4(VAR_1->pEnv, VAR_1->nMetasize, &VAR_5);
      if( VAR_5==VAR_0 && VAR_2==0 ){
        VAR_5 = FUNC_2(
            VAR_1->pEnv, VAR_1->fdDb, VAR_7, VAR_6->aData, VAR_1->nMetaRwSize
        );
      }






      else if( VAR_5==VAR_0 ){
        FUNC_6( VAR_6->aData, 0x77, VAR_1->nMetasize );
      }

    }

    if( VAR_5!=VAR_0 ){
      if( VAR_1->nMapLimit==0 ) FUNC_3(VAR_1->pEnv, VAR_6->aData);
      FUNC_3(VAR_1->pEnv, VAR_6);
      VAR_6 = 0;
    }else{
      VAR_6->iPg = VAR_3;
      VAR_6->bWrite = VAR_2;
      VAR_6->pFS = VAR_1;
    }
  }

  *VAR_4 = VAR_6;
  return VAR_5;
}
