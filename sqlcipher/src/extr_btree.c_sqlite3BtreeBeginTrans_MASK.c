
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int flags; int nSavepoint; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_22__ {int iTable; struct TYPE_22__* pNext; int eLock; TYPE_3__* pBtree; } ;
struct TYPE_21__ {scalar_t__ inTransaction; int btsFlags; scalar_t__ nPage; int pPager; TYPE_2__* pPage1; TYPE_3__* pWriter; TYPE_5__* pLock; int nTransaction; int bDoTruncate; } ;
struct TYPE_20__ {scalar_t__ inTrans; TYPE_1__* db; TYPE_5__ lock; scalar_t__ sharable; TYPE_4__* pBt; } ;
struct TYPE_19__ {int * aData; int pDbPage; } ;
typedef TYPE_2__ MemPage ;
typedef TYPE_3__ Btree ;
typedef TYPE_4__ BtShared ;
typedef TYPE_5__ BtLock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (TYPE_3__*,int ,int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_12 (int ,int,int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_4__*) ;

int FUNC_19(Btree *VAR_15, int VAR_16, int *VAR_17){
  BtShared *VAR_18 = VAR_15->pBt;
  int VAR_19 = VAR_9;

  FUNC_9(VAR_15);
  FUNC_2(VAR_15);





  if( VAR_15->inTrans==VAR_14 || (VAR_15->inTrans==VAR_13 && !VAR_16) ){
    goto trans_begun;
  }
  FUNC_1( VAR_18->inTransaction==VAR_14 || FUNC_0(VAR_18->bDoTruncate)==0 );

  if( (VAR_15->db->flags & VAR_11)
   && FUNC_13(VAR_18->pPager)==0
  ){
    VAR_18->btsFlags &= ~VAR_3;
  }


  if( (VAR_18->btsFlags & VAR_3)!=0 && VAR_16 ){
    VAR_19 = VAR_10;
    goto trans_begun;
  }


  {
    sqlite3 *VAR_20 = 0;




    if( (VAR_16 && VAR_18->inTransaction==VAR_14)
     || (VAR_18->btsFlags & VAR_2)!=0
    ){
      VAR_20 = VAR_18->pWriter->db;
    }else if( VAR_16>1 ){
      BtLock *VAR_21;
      for(VAR_21=VAR_18->pLock; VAR_21; VAR_21=VAR_21->pNext){
        if( VAR_21->pBtree!=VAR_15 ){
          VAR_20 = VAR_21->pBtree->db;
          break;
        }
      }
    }
    if( VAR_20 ){
      FUNC_11(VAR_15->db, VAR_20);
      VAR_19 = VAR_8;
      goto trans_begun;
    }
  }





  VAR_19 = FUNC_8(VAR_15, VAR_4, VAR_5);
  if( VAR_9!=VAR_19 ) goto trans_begun;

  VAR_18->btsFlags &= ~VAR_1;
  if( VAR_18->nPage==0 ) VAR_18->btsFlags |= VAR_1;
  do {







    while( VAR_18->pPage1==0 && VAR_9==(VAR_19 = FUNC_5(VAR_18)) );

    if( VAR_19==VAR_9 && VAR_16 ){
      if( (VAR_18->btsFlags & VAR_3)!=0 ){
        VAR_19 = VAR_10;
      }else{
        VAR_19 = FUNC_12(VAR_18->pPager,VAR_16>1,FUNC_17(VAR_15->db));
        if( VAR_19==VAR_9 ){
          VAR_19 = FUNC_6(VAR_18);
        }else if( VAR_19==VAR_7 && VAR_18->inTransaction==VAR_12 ){



          VAR_19 = VAR_6;
        }
      }
    }

    if( VAR_19!=VAR_9 ){
      FUNC_18(VAR_18);
    }
  }while( (VAR_19&0xFF)==VAR_6 && VAR_18->inTransaction==VAR_12 &&
          FUNC_3(VAR_18) );
  FUNC_15(VAR_18->pPager);

  if( VAR_19==VAR_9 ){
    if( VAR_15->inTrans==VAR_12 ){
      VAR_18->nTransaction++;

      if( VAR_15->sharable ){
        FUNC_1( VAR_15->lock.pBtree==VAR_15 && VAR_15->lock.iTable==1 );
        VAR_15->lock.eLock = VAR_5;
        VAR_15->lock.pNext = VAR_18->pLock;
        VAR_18->pLock = &VAR_15->lock;
      }

    }
    VAR_15->inTrans = (VAR_16?VAR_14:VAR_13);
    if( VAR_15->inTrans>VAR_18->inTransaction ){
      VAR_18->inTransaction = VAR_15->inTrans;
    }
    if( VAR_16 ){
      MemPage *VAR_22 = VAR_18->pPage1;

      FUNC_1( !VAR_18->pWriter );
      VAR_18->pWriter = VAR_15;
      VAR_18->btsFlags &= ~VAR_0;
      if( VAR_16>1 ) VAR_18->btsFlags |= VAR_0;
      if( VAR_18->nPage!=FUNC_4(&VAR_22->aData[28]) ){
        VAR_19 = FUNC_16(VAR_22->pDbPage);
        if( VAR_19==VAR_9 ){
          FUNC_7(&VAR_22->aData[28], VAR_18->nPage);
        }
      }
    }
  }

trans_begun:
  if( VAR_19==VAR_9 ){
    if( VAR_17 ){
      *VAR_17 = FUNC_4(&VAR_18->pPage1->aData[40]);
    }
    if( VAR_16 ){




      VAR_19 = FUNC_14(VAR_18->pPager, VAR_15->db->nSavepoint);
    }
  }

  FUNC_2(VAR_15);
  FUNC_10(VAR_15);
  return VAR_19;
}
