
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_10__ {scalar_t__ iRoot; } ;
struct TYPE_9__ {int nDepth; int iPg; TYPE_1__* aPg; TYPE_5__* pSeg; int * pFS; } ;
struct TYPE_8__ {int iCell; int * pPage; } ;
typedef int Page ;
typedef int FileSystem ;
typedef TYPE_1__ BtreePg ;
typedef TYPE_2__ BtreeCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,TYPE_5__*,int,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*,int,int*) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int,int ) ;

__attribute__((used)) static int FUNC_10(BtreeCursor *VAR_2){
  int VAR_3;

  Page *VAR_4 = 0;
  FileSystem *VAR_5 = VAR_2->pFS;
  int VAR_6 = (int)VAR_2->pSeg->iRoot;

  do {
    VAR_3 = FUNC_3(VAR_5, VAR_2->pSeg, VAR_6, &VAR_4);
    FUNC_0( (VAR_3==VAR_0)==(VAR_4!=0) );
    if( VAR_3==VAR_0 ){
      u8 *VAR_7;
      int VAR_8;
      int VAR_9;

      VAR_7 = FUNC_2(VAR_4, &VAR_8);
      VAR_9 = FUNC_8(VAR_7, VAR_8);
      if( (VAR_9 & VAR_1)==0 ) break;

      if( (VAR_2->nDepth % 8)==0 ){
        int VAR_10 = VAR_2->nDepth + 8;
        VAR_2->aPg = (BtreePg *)FUNC_6(
            FUNC_4(VAR_5), VAR_2->aPg, sizeof(BtreePg) * VAR_10, &VAR_3
        );
        if( VAR_3==VAR_0 ){
          FUNC_7(&VAR_2->aPg[VAR_2->nDepth], 0, sizeof(BtreePg) * 8);
        }
      }

      if( VAR_3==VAR_0 ){
        FUNC_0( VAR_2->aPg[VAR_2->nDepth].iCell==0 );
        VAR_2->aPg[VAR_2->nDepth].pPage = VAR_4;
        VAR_2->nDepth++;
        VAR_6 = (int)FUNC_9(VAR_7, VAR_8, 0);
      }
    }
  }while( VAR_3==VAR_0 );
  FUNC_5(VAR_4);
  VAR_2->iPg = VAR_2->nDepth-1;

  if( VAR_3==VAR_0 && VAR_2->nDepth ){
    VAR_2->aPg[VAR_2->iPg].iCell = -1;
    VAR_3 = FUNC_1(VAR_2);
  }

  return VAR_3;
}
