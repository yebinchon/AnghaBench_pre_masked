
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_15__ {int btsFlags; int usableSize; int mutex; TYPE_2__* pPage1; } ;
struct TYPE_14__ {int pgno; scalar_t__ isInit; int * aData; int pDbPage; TYPE_1__* pBt; } ;
struct TYPE_13__ {int pageSize; } ;
typedef int Pgno ;
typedef TYPE_2__ MemPage ;
typedef TYPE_3__ BtShared ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int,TYPE_2__**,int ,int ) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (TYPE_3__*,int,int ,int ,int*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(BtShared *VAR_5, MemPage *VAR_6, Pgno VAR_7){
  MemPage *VAR_8 = 0;
  Pgno VAR_9 = 0;
  MemPage *VAR_10 = VAR_5->pPage1;
  MemPage *VAR_11;
  int VAR_12;
  int VAR_13;

  FUNC_1( FUNC_13(VAR_5->mutex) );
  FUNC_1( VAR_7>1 );
  FUNC_1( !VAR_6 || VAR_6->pgno==VAR_7 );

  if( VAR_6 ){
    VAR_11 = VAR_6;
    FUNC_11(VAR_11->pDbPage);
  }else{
    VAR_11 = FUNC_3(VAR_5, VAR_7);
  }


  VAR_12 = FUNC_12(VAR_10->pDbPage);
  if( VAR_12 ) goto freepage_out;
  VAR_13 = FUNC_5(&VAR_10->aData[36]);
  FUNC_8(&VAR_10->aData[36], VAR_13+1);

  if( VAR_5->btsFlags & VAR_0 ){



    if( (!VAR_11 && ((VAR_12 = FUNC_2(VAR_5, VAR_7, &VAR_11, 0, 0))!=0) )
     || ((VAR_12 = FUNC_12(VAR_11->pDbPage))!=0)
    ){
      goto freepage_out;
    }
    FUNC_6(VAR_11->aData, 0, VAR_11->pBt->pageSize);
  }




  if( VAR_1 ){
    FUNC_7(VAR_5, VAR_7, VAR_2, 0, &VAR_12);
    if( VAR_12 ) goto freepage_out;
  }
  if( VAR_13!=0 ){
    u32 VAR_14;

    VAR_9 = FUNC_5(&VAR_10->aData[32]);
    VAR_12 = FUNC_2(VAR_5, VAR_9, &VAR_8, 0, 0);
    if( VAR_12!=VAR_4 ){
      goto freepage_out;
    }

    VAR_14 = FUNC_5(&VAR_8->aData[4]);
    FUNC_1( VAR_5->usableSize>32 );
    if( VAR_14 > (u32)VAR_5->usableSize/4 - 2 ){
      VAR_12 = VAR_3;
      goto freepage_out;
    }
    if( VAR_14 < (u32)VAR_5->usableSize/4 - 8 ){
      VAR_12 = FUNC_12(VAR_8->pDbPage);
      if( VAR_12==VAR_4 ){
        FUNC_8(&VAR_8->aData[4], VAR_14+1);
        FUNC_8(&VAR_8->aData[8+VAR_14*4], VAR_7);
        if( VAR_11 && (VAR_5->btsFlags & VAR_0)==0 ){
          FUNC_10(VAR_11->pDbPage);
        }
        VAR_12 = FUNC_4(VAR_5, VAR_7);
      }
      FUNC_0(("FREE-PAGE: %d leaf on trunk page %d\n",VAR_11->pgno,VAR_8->pgno));
      goto freepage_out;
    }
  }







  if( VAR_11==0 && VAR_4!=(VAR_12 = FUNC_2(VAR_5, VAR_7, &VAR_11, 0, 0)) ){
    goto freepage_out;
  }
  VAR_12 = FUNC_12(VAR_11->pDbPage);
  if( VAR_12!=VAR_4 ){
    goto freepage_out;
  }
  FUNC_8(VAR_11->aData, VAR_9);
  FUNC_8(&VAR_11->aData[4], 0);
  FUNC_8(&VAR_10->aData[32], VAR_7);
  FUNC_0(("FREE-PAGE: %d new trunk page replacing %d\n", VAR_11->pgno, VAR_9));

freepage_out:
  if( VAR_11 ){
    VAR_11->isInit = 0;
  }
  FUNC_9(VAR_11);
  FUNC_9(VAR_8);
  return VAR_12;
}
