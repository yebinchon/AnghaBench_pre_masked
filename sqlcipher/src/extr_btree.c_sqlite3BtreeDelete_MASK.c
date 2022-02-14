
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_31__ {int nKey; } ;
struct TYPE_36__ {int curFlags; scalar_t__ pKeyInfo; scalar_t__ eState; int iPage; int ix; int skipNext; TYPE_2__* pPage; TYPE_2__** apPage; TYPE_1__ info; int pgnoRoot; TYPE_4__* pBtree; } ;
struct TYPE_35__ {scalar_t__ inTransaction; int btsFlags; int usableSize; unsigned char* pTmpSpace; } ;
struct TYPE_34__ {TYPE_5__* pBt; } ;
struct TYPE_33__ {int nSize; } ;
struct TYPE_32__ {int nFree; int nCell; unsigned char* aData; int (* xCellSize ) (TYPE_2__*,unsigned char*) ;int pDbPage; int pgno; int leaf; } ;
typedef int Pgno ;
typedef TYPE_2__ MemPage ;
typedef TYPE_3__ CellInfo ;
typedef TYPE_4__ Btree ;
typedef TYPE_5__ BtShared ;
typedef TYPE_6__ BtCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_2__*,unsigned char*) ;
 int FUNC_7 (TYPE_2__*,unsigned char*,TYPE_3__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_2__*,int,int,int*) ;
 unsigned char* FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (TYPE_4__*,int ) ;
 int FUNC_12 (TYPE_4__*,int ,int,int) ;
 int FUNC_13 (TYPE_2__*,int,unsigned char*,int,unsigned char*,int ,int*) ;
 int FUNC_14 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_15 (TYPE_6__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_5__*,int ,TYPE_6__*) ;
 int FUNC_19 (TYPE_6__*) ;
 int FUNC_20 (TYPE_6__*,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (TYPE_2__*,unsigned char*) ;

int FUNC_23(BtCursor *VAR_15, u8 VAR_16){
  Btree *VAR_17 = VAR_15->pBtree;
  BtShared *VAR_18 = VAR_17->pBt;
  int VAR_19;
  MemPage *VAR_20;
  unsigned char *VAR_21;
  int VAR_22;
  int VAR_23;
  CellInfo VAR_24;
  int VAR_25 = 0;
  u8 VAR_26 = VAR_16 & VAR_3;

  FUNC_1( FUNC_8(VAR_15) );
  FUNC_1( VAR_18->inTransaction==VAR_14 );
  FUNC_1( (VAR_18->btsFlags & VAR_4)==0 );
  FUNC_1( VAR_15->curFlags & VAR_1 );
  FUNC_1( FUNC_12(VAR_17, VAR_15->pgnoRoot, VAR_15->pKeyInfo!=0, 2) );
  FUNC_1( !FUNC_11(VAR_17, VAR_15->pgnoRoot) );
  FUNC_1( (VAR_16 & ~(VAR_3 | VAR_2))==0 );
  if( VAR_15->eState==VAR_6 ){
    VAR_19 = FUNC_5(VAR_15);
    if( VAR_19 ) return VAR_19;
  }
  FUNC_1( VAR_15->eState==VAR_8 );

  VAR_23 = VAR_15->iPage;
  VAR_22 = VAR_15->ix;
  VAR_20 = VAR_15->pPage;
  VAR_21 = FUNC_10(VAR_20, VAR_22);
  if( VAR_20->nFree<0 && FUNC_3(VAR_20) ) return VAR_9;
  if( VAR_26 ){
    if( !VAR_20->leaf
     || (VAR_20->nFree+FUNC_6(VAR_20,VAR_21)+2)>(int)(VAR_18->usableSize*2/3)
     || VAR_20->nCell==1
    ){


      VAR_19 = FUNC_19(VAR_15);
      if( VAR_19 ) return VAR_19;
    }else{
      VAR_25 = 1;
    }
  }
  if( !VAR_20->leaf ){
    VAR_19 = FUNC_20(VAR_15, 0);
    FUNC_1( VAR_19!=VAR_11 );
    if( VAR_19 ) return VAR_19;
  }



  if( VAR_15->curFlags & VAR_0 ){
    VAR_19 = FUNC_18(VAR_18, VAR_15->pgnoRoot, VAR_15);
    if( VAR_19 ) return VAR_19;
  }



  if( VAR_15->pKeyInfo==0 ){
    FUNC_14(VAR_17, VAR_15->pgnoRoot, VAR_15->info.nKey, 0);
  }




  VAR_19 = FUNC_21(VAR_20->pDbPage);
  if( VAR_19 ) return VAR_19;
  VAR_19 = FUNC_7(VAR_20, VAR_21, &VAR_24);
  FUNC_9(VAR_20, VAR_22, VAR_24.nSize, &VAR_19);
  if( VAR_19 ) return VAR_19;






  if( !VAR_20->leaf ){
    MemPage *VAR_27 = VAR_15->pPage;
    int VAR_28;
    Pgno VAR_29;
    unsigned char *VAR_30;

    if( VAR_27->nFree<0 ){
      VAR_19 = FUNC_3(VAR_27);
      if( VAR_19 ) return VAR_19;
    }
    if( VAR_23<VAR_15->iPage-1 ){
      VAR_29 = VAR_15->apPage[VAR_23+1]->pgno;
    }else{
      VAR_29 = VAR_15->pPage->pgno;
    }
    VAR_21 = FUNC_10(VAR_27, VAR_27->nCell-1);
    if( VAR_21<&VAR_27->aData[4] ) return VAR_10;
    VAR_28 = VAR_27->xCellSize(VAR_27, VAR_21);
    FUNC_1( FUNC_0(VAR_18) >= VAR_28 );
    VAR_30 = VAR_18->pTmpSpace;
    FUNC_1( VAR_30!=0 );
    VAR_19 = FUNC_21(VAR_27->pDbPage);
    if( VAR_19==VAR_13 ){
      FUNC_13(VAR_20, VAR_22, VAR_21-4, VAR_28+4, VAR_30, VAR_29, &VAR_19);
    }
    FUNC_9(VAR_27, VAR_27->nCell-1, VAR_28, &VAR_19);
    if( VAR_19 ) return VAR_19;
  }
  VAR_19 = FUNC_2(VAR_15);
  if( VAR_19==VAR_13 && VAR_15->iPage>VAR_23 ){
    FUNC_17(VAR_15->pPage);
    VAR_15->iPage--;
    while( VAR_15->iPage>VAR_23 ){
      FUNC_16(VAR_15->apPage[VAR_15->iPage--]);
    }
    VAR_15->pPage = VAR_15->apPage[VAR_15->iPage];
    VAR_19 = FUNC_2(VAR_15);
  }

  if( VAR_19==VAR_13 ){
    if( VAR_25 ){
      FUNC_1( VAR_26 && (VAR_15->iPage==VAR_23 || VAR_5) );
      FUNC_1( VAR_20==VAR_15->pPage || VAR_5 );
      FUNC_1( (VAR_20->nCell>0 || VAR_5) && VAR_22<=VAR_20->nCell );
      VAR_15->eState = VAR_7;
      if( VAR_22>=VAR_20->nCell ){
        VAR_15->skipNext = -1;
        VAR_15->ix = VAR_20->nCell-1;
      }else{
        VAR_15->skipNext = 1;
      }
    }else{
      VAR_19 = FUNC_15(VAR_15);
      if( VAR_26 ){
        FUNC_4(VAR_15);
        VAR_15->eState = VAR_6;
      }
      if( VAR_19==VAR_12 ) VAR_19 = VAR_13;
    }
  }
  return VAR_19;
}
