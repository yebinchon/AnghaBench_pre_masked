
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;


typedef int u8 ;
typedef size_t i64 ;
typedef int aSz ;
struct TYPE_19__ {int nPagesize; int nWrite; TYPE_1__* pMapped; int nCacheAlloc; int pEnv; scalar_t__ pMap; int fdDb; TYPE_1__* pWaiting; TYPE_1__** apHash; int nHash; int * aOBuffer; scalar_t__ pCompress; } ;
struct TYPE_18__ {int flags; int iPg; int nCompress; int nData; scalar_t__ pWaitingNext; struct TYPE_18__* pMappedNext; int * aData; int nRef; struct TYPE_18__* pHashNext; TYPE_14__* pSeg; TYPE_2__* pFS; } ;
struct TYPE_17__ {int iFirst; int nSize; } ;
typedef TYPE_1__ Page ;
typedef TYPE_2__ FileSystem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_14__*,int *,int,int*) ;
 int FUNC_2 (TYPE_2__*,TYPE_14__*,int*,int*,int*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,int,int*) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (int ,int ,size_t,int *,int) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (TYPE_2__*,int*) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (int *,int *,int) ;
 int FUNC_15 (int *,int *,int) ;
 int FUNC_16 (int *,int,int ) ;

int FUNC_17(Page *VAR_4){
  int VAR_5 = VAR_0;
  if( VAR_4 && (VAR_4->flags & VAR_1) ){
    FileSystem *VAR_6 = VAR_4->pFS;

    if( VAR_6->pCompress ){
      int VAR_7;
      u8 VAR_8[3];
      FUNC_0( VAR_4->pSeg && VAR_4->iPg==0 && VAR_4->nCompress==0 );


      VAR_5 = FUNC_3(VAR_6, VAR_4);


      FUNC_16(VAR_8, VAR_4->nCompress, 0);


      VAR_4->iPg = FUNC_1(VAR_6, VAR_4->pSeg, VAR_8, sizeof(VAR_8), &VAR_5);
      FUNC_1(VAR_6, VAR_4->pSeg, VAR_6->aOBuffer, VAR_4->nCompress, &VAR_5);
      FUNC_1(VAR_6, VAR_4->pSeg, VAR_8, sizeof(VAR_8), &VAR_5);


      VAR_7 = FUNC_5(VAR_6->nHash, VAR_4->iPg);
      VAR_4->pHashNext = VAR_6->apHash[VAR_7];
      VAR_6->apHash[VAR_7] = VAR_4;

      VAR_4->pSeg->nSize += (sizeof(VAR_8) * 2) + VAR_4->nCompress;

      VAR_4->flags &= ~VAR_1;
      VAR_6->nWrite++;
    }else{

      if( VAR_4->iPg==0 ){







        Page **VAR_9;
        int VAR_10 = 0;
        int VAR_11 = 0;
        int VAR_12;

        FUNC_0( VAR_4->pSeg->iFirst );
        FUNC_0( VAR_4->flags & VAR_2 );
        FUNC_0( (VAR_4->flags & VAR_3)==0 );
        FUNC_0( VAR_4->nData==VAR_6->nPagesize-4 );

        VAR_5 = FUNC_2(VAR_6, VAR_4->pSeg, &VAR_4->iPg, &VAR_10, &VAR_11);
        if( VAR_5!=VAR_0 ) return VAR_5;

        FUNC_0( VAR_4->flags & VAR_2 );
        VAR_12 = FUNC_5(VAR_6->nHash, VAR_4->iPg);
        FUNC_8(VAR_6, VAR_4->iPg);
        VAR_4->pHashNext = VAR_6->apHash[VAR_12];
        VAR_6->apHash[VAR_12] = VAR_4;
        FUNC_0( VAR_4->pHashNext==0 || VAR_4->pHashNext->iPg!=VAR_4->iPg );

        if( VAR_10 ){
          FUNC_0( VAR_11==0 );
          FUNC_15(&VAR_4->aData[4], VAR_4->aData, VAR_4->nData);
          FUNC_12(VAR_4->aData, VAR_10);
          VAR_4->flags |= VAR_3;
          VAR_4->aData += 4;
        }else if( VAR_11 ){
          FUNC_0( VAR_10==0 );
          FUNC_12(&VAR_4->aData[VAR_4->nData], VAR_11);
        }else{
          int VAR_13 = VAR_4->nData;
          VAR_4->nData += 4;
          FUNC_13(VAR_4, VAR_13);
        }

        VAR_4->nRef++;
        for(VAR_9=&VAR_6->pWaiting; *VAR_9; VAR_9=&(*VAR_9)->pWaitingNext);
        *VAR_9 = VAR_4;
        FUNC_0( VAR_4->pWaitingNext==0 );

      }else{
        i64 VAR_14;

        VAR_14 = (i64)VAR_6->nPagesize * (i64)(VAR_4->iPg-1);
        if( FUNC_6(VAR_6, VAR_4->iPg)==0 ){
          u8 *VAR_15 = VAR_4->aData - (VAR_4->flags & VAR_3);
          VAR_5 = FUNC_9(VAR_6->pEnv, VAR_6->fdDb, VAR_14, VAR_15, VAR_6->nPagesize);
        }else if( VAR_4->flags & VAR_2 ){
          FUNC_4(VAR_6, VAR_14 + VAR_6->nPagesize, &VAR_5);
          if( VAR_5==VAR_0 ){
            u8 *VAR_16 = &((u8 *)(VAR_6->pMap))[VAR_14];
            u8 *VAR_17 = VAR_4->aData - (VAR_4->flags & VAR_3);
            FUNC_14(VAR_16, VAR_17, VAR_6->nPagesize);
            FUNC_10(VAR_6->pEnv, VAR_17);
            VAR_6->nCacheAlloc--;
            VAR_4->aData = VAR_16 + (VAR_4->flags & VAR_3);
            VAR_4->flags &= ~VAR_2;
            FUNC_7(VAR_6, VAR_4);
            VAR_4->pMappedNext = VAR_6->pMapped;
            VAR_6->pMapped = VAR_4;
          }
        }

        FUNC_11(VAR_6, &VAR_5);
        VAR_4->flags &= ~VAR_1;
        VAR_6->nWrite++;
      }
    }
  }

  return VAR_5;
}
