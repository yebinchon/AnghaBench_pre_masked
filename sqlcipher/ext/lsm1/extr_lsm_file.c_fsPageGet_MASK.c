
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int u8 ;
typedef int i64 ;
struct TYPE_27__ {int nPagesize; scalar_t__ pCompress; int nOut; TYPE_2__** apHash; int nRead; int fdDb; int pEnv; TYPE_2__* pMapped; scalar_t__ pMap; TYPE_2__* pFree; } ;
struct TYPE_26__ {int flags; scalar_t__ nRef; scalar_t__ pMappedNext; scalar_t__ pLruNext; scalar_t__ pLruPrev; int nData; int * aData; struct TYPE_26__* pHashNext; TYPE_3__* pFS; scalar_t__ iPg; struct TYPE_26__* pFreeNext; } ;
struct TYPE_25__ {int pRedirect; } ;
typedef TYPE_1__ Segment ;
typedef TYPE_2__ Page ;
typedef scalar_t__ LsmPgno ;
typedef TYPE_3__ FileSystem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int,int*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_3__*,scalar_t__) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__**) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_2__* FUNC_9 (TYPE_3__*,scalar_t__,int*) ;
 int FUNC_10 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_11 (TYPE_3__*,TYPE_1__*,TYPE_2__*,int*) ;
 int FUNC_12 (int ,int ,int,int *,int) ;
 scalar_t__ FUNC_13 (TYPE_3__*,int ,scalar_t__) ;
 TYPE_2__* FUNC_14 (int ,int,int*) ;
 int FUNC_15 (int *,int,scalar_t__) ;

__attribute__((used)) static int FUNC_16(
  FileSystem *VAR_3,
  Segment *VAR_4,
  LsmPgno VAR_5,
  int VAR_6,
  Page **VAR_7,
  int *VAR_8
){
  Page *VAR_9;
  int VAR_10;
  int VAR_11 = VAR_0;




  LsmPgno VAR_12 = FUNC_13(VAR_3, (VAR_4 ? VAR_4->pRedirect : 0), VAR_5);

  FUNC_1(VAR_3);
  FUNC_0( VAR_5>=FUNC_2(VAR_3, 1) );
  FUNC_0( VAR_12>=FUNC_2(VAR_3, 1) );
  *VAR_7 = 0;


  VAR_9 = FUNC_9(VAR_3, VAR_12, &VAR_10);

  if( VAR_9 ){
    FUNC_0( VAR_9->flags & VAR_1 );
    if( VAR_9->nRef==0 ) FUNC_10(VAR_3, VAR_9);
  }else{

    if( FUNC_6(VAR_3, VAR_12) ){
      i64 VAR_13 = (i64)VAR_12 * VAR_3->nPagesize;
      FUNC_3(VAR_3, VAR_13, &VAR_11);
      if( VAR_11!=VAR_0 ) return VAR_11;

      if( VAR_3->pFree ){
        VAR_9 = VAR_3->pFree;
        VAR_3->pFree = VAR_9->pFreeNext;
        FUNC_0( VAR_9->nRef==0 );
      }else{
        VAR_9 = FUNC_14(VAR_3->pEnv, sizeof(Page), &VAR_11);
        if( VAR_11 ) return VAR_11;
        VAR_9->pFS = VAR_3;
      }
      VAR_9->aData = &((u8 *)VAR_3->pMap)[VAR_3->nPagesize * (VAR_12-1)];
      VAR_9->iPg = VAR_12;



      FUNC_0( VAR_9->pMappedNext==0 );
      VAR_9->pMappedNext = VAR_3->pMapped;
      VAR_3->pMapped = VAR_9;

      FUNC_0( VAR_3->pCompress==0 );
      FUNC_0( (VAR_9->flags & VAR_1)==0 );
    }else{
      VAR_11 = FUNC_7(VAR_3, &VAR_9);
      if( VAR_11==VAR_0 ){
        int VAR_14 = 0;
        VAR_9->iPg = VAR_12;
        VAR_9->nRef = 0;
        VAR_9->pFS = VAR_3;
        FUNC_0( VAR_9->flags==0 || VAR_9->flags==VAR_1 );




        FUNC_0( VAR_9->pLruNext==0 && VAR_9->pLruPrev==0 );
        if( VAR_6==0 ){
          if( VAR_3->pCompress ){
            VAR_11 = FUNC_11(VAR_3, VAR_4, VAR_9, &VAR_14);
          }else{
            int VAR_15 = VAR_3->nPagesize;
            i64 VAR_16 = (i64)(VAR_12-1) * VAR_3->nPagesize;
            VAR_11 = FUNC_12(VAR_3->pEnv, VAR_3->fdDb, VAR_16, VAR_9->aData, VAR_15);
          }
          VAR_3->nRead++;
        }




        if( VAR_11==VAR_0 && VAR_14==0 ){
          VAR_9->pHashNext = VAR_3->apHash[VAR_10];
          VAR_3->apHash[VAR_10] = VAR_9;
        }else{
          FUNC_8(VAR_9);
          VAR_9 = 0;
          if( VAR_8 ) *VAR_8 = VAR_14;
        }
      }
    }

    FUNC_0( (VAR_11==VAR_0 && (VAR_9 || (VAR_8 && *VAR_8)))
         || (VAR_11!=VAR_0 && VAR_9==0)
    );
  }

  if( VAR_11==VAR_0 && VAR_9 ){
    if( VAR_3->pCompress==0 && (FUNC_5(VAR_3, VAR_12) || FUNC_4(VAR_3, VAR_12)) ){
      VAR_9->nData = VAR_3->nPagesize - 4;
      if( FUNC_4(VAR_3, VAR_12) && VAR_9->nRef==0 ){
        VAR_9->aData += 4;
        VAR_9->flags |= VAR_2;
      }
    }else{
      VAR_9->nData = VAR_3->nPagesize;
    }
    VAR_3->nOut += (VAR_9->nRef==0);
    VAR_9->nRef++;
  }
  *VAR_7 = VAR_9;
  return VAR_11;
}
