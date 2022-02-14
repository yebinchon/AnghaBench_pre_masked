
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef void* u16 ;
struct TYPE_13__ {int flags; } ;
struct TYPE_12__ {int btsFlags; scalar_t__ pageSize; int usableSize; int autoVacuum; int incrVacuum; int maxLocal; scalar_t__ maxLeaf; int max1bytePayload; TYPE_1__* pPage1; scalar_t__ nPage; void* minLeaf; void* minLocal; TYPE_3__* db; int pPager; int mutex; } ;
struct TYPE_11__ {int* aData; } ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int,TYPE_1__**,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (int*,...) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (int ,int*) ;
 int FUNC_9 (int ,int*) ;
 int FUNC_10 (int ,scalar_t__*,scalar_t__) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int ) ;
 char* VAR_10 ;

__attribute__((used)) static int FUNC_14(BtShared *VAR_11){
  int VAR_12;
  MemPage *VAR_13;
  u32 VAR_14;
  u32 VAR_15 = 0;
  u32 VAR_16;

  FUNC_1( FUNC_13(VAR_11->mutex) );
  FUNC_1( VAR_11->pPage1==0 );
  VAR_12 = FUNC_11(VAR_11->pPager);
  if( VAR_12!=VAR_8 ) return VAR_12;
  VAR_12 = FUNC_2(VAR_11, 1, &VAR_13, 0);
  if( VAR_12!=VAR_8 ) return VAR_12;




  VAR_14 = VAR_16 = FUNC_4(28+(u8*)VAR_13->aData);
  FUNC_9(VAR_11->pPager, (int*)&VAR_15);
  if( VAR_14==0 || FUNC_5(24+(u8*)VAR_13->aData, 92+(u8*)VAR_13->aData,4)!=0 ){
    VAR_14 = VAR_15;
  }
  if( (VAR_11->db->flags & VAR_9)!=0 ){
    VAR_14 = 0;
  }
  if( VAR_14>0 ){
    u32 VAR_17;
    u32 VAR_18;
    u8 *VAR_19 = VAR_13->aData;
    VAR_12 = VAR_7;



    if( FUNC_5(VAR_19, VAR_10, 16)!=0 ){
      goto page1_init_failed;
    }
    if( VAR_19[18]>2 ){
      VAR_11->btsFlags |= VAR_2;
    }
    if( VAR_19[19]>2 ){
      goto page1_init_failed;
    }
    if( VAR_19[19]==2 && (VAR_11->btsFlags & VAR_0)==0 ){
      int VAR_20 = 0;
      VAR_12 = FUNC_8(VAR_11->pPager, &VAR_20);
      if( VAR_12!=VAR_8 ){
        goto page1_init_failed;
      }else{
        FUNC_7(VAR_11, VAR_5+1);
        if( VAR_20==0 ){
          FUNC_6(VAR_13);
          return VAR_8;
        }
      }
      VAR_12 = VAR_7;
    }else{
      FUNC_7(VAR_11, VAR_4+1);
    }
    if( FUNC_5(&VAR_19[21], "\100\040\040",3)!=0 ){
      goto page1_init_failed;
    }



    VAR_17 = (VAR_19[16]<<8) | (VAR_19[17]<<16);


    if( ((VAR_17-1)&VAR_17)!=0
     || VAR_17>VAR_6
     || VAR_17<=256
    ){
      goto page1_init_failed;
    }
    VAR_11->btsFlags |= VAR_1;
    FUNC_1( (VAR_17 & 7)==0 );







    VAR_18 = VAR_17 - VAR_19[20];
    if( (u32)VAR_17!=VAR_11->pageSize ){






      FUNC_6(VAR_13);
      VAR_11->usableSize = VAR_18;
      VAR_11->pageSize = VAR_17;
      FUNC_3(VAR_11);
      VAR_12 = FUNC_10(VAR_11->pPager, &VAR_11->pageSize,
                                   VAR_17-VAR_18);
      return VAR_12;
    }
    if( FUNC_12(VAR_11->db)==0 && VAR_14>VAR_15 ){
      VAR_12 = VAR_3;
      goto page1_init_failed;
    }



    if( VAR_18<480 ){
      goto page1_init_failed;
    }
    VAR_11->pageSize = VAR_17;
    VAR_11->usableSize = VAR_18;

    VAR_11->autoVacuum = (FUNC_4(&VAR_19[36 + 4*4])?1:0);
    VAR_11->incrVacuum = (FUNC_4(&VAR_19[36 + 7*4])?1:0);

  }
  VAR_11->maxLocal = (u16)((VAR_11->usableSize-12)*64/255 - 23);
  VAR_11->minLocal = (u16)((VAR_11->usableSize-12)*32/255 - 23);
  VAR_11->maxLeaf = (u16)(VAR_11->usableSize - 35);
  VAR_11->minLeaf = (u16)((VAR_11->usableSize-12)*32/255 - 23);
  if( VAR_11->maxLocal>127 ){
    VAR_11->max1bytePayload = 127;
  }else{
    VAR_11->max1bytePayload = (u8)VAR_11->maxLocal;
  }
  FUNC_1( VAR_11->maxLeaf + 23 <= FUNC_0(VAR_11) );
  VAR_11->pPage1 = VAR_13;
  VAR_11->nPage = VAR_14;
  return VAR_8;

page1_init_failed:
  FUNC_6(VAR_13);
  VAR_11->pPage1 = 0;
  return VAR_12;
}
