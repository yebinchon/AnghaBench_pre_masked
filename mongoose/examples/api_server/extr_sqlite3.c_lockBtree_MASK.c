
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef void* u16 ;
struct TYPE_12__ {int btsFlags; int pageSize; int usableSize; int autoVacuum; int incrVacuum; int maxLocal; scalar_t__ maxLeaf; int max1bytePayload; int nPage; TYPE_2__* pPage1; void* minLeaf; void* minLocal; TYPE_1__* db; int pPager; int mutex; } ;
struct TYPE_11__ {int* aData; } ;
struct TYPE_10__ {int flags; } ;
typedef TYPE_2__ MemPage ;
typedef TYPE_3__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int,TYPE_2__**,int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (int*,...) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int*) ;
 int FUNC_8 (int ,int*) ;
 int FUNC_9 (int ,int*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 char* VAR_7 ;

__attribute__((used)) static int FUNC_12(BtShared *VAR_8){
  int VAR_9;
  MemPage *VAR_10;
  int VAR_11;
  int VAR_12 = 0;
  int VAR_13;

  FUNC_1( FUNC_11(VAR_8->mutex) );
  FUNC_1( VAR_8->pPage1==0 );
  VAR_9 = FUNC_10(VAR_8->pPager);
  if( VAR_9!=VAR_5 ) return VAR_9;
  VAR_9 = FUNC_2(VAR_8, 1, &VAR_10, 0, 0);
  if( VAR_9!=VAR_5 ) return VAR_9;




  VAR_11 = VAR_13 = FUNC_4(28+(u8*)VAR_10->aData);
  FUNC_8(VAR_8->pPager, &VAR_12);
  if( VAR_11==0 || FUNC_5(24+(u8*)VAR_10->aData, 92+(u8*)VAR_10->aData,4)!=0 ){
    VAR_11 = VAR_12;
  }
  if( VAR_11>0 ){
    u32 VAR_14;
    u32 VAR_15;
    u8 *VAR_16 = VAR_10->aData;
    VAR_9 = VAR_4;
    if( FUNC_5(VAR_16, VAR_7, 16)!=0 ){
      goto page1_init_failed;
    }
    if( VAR_16[18]>2 ){
      VAR_8->btsFlags |= VAR_1;
    }
    if( VAR_16[19]>2 ){
      goto page1_init_failed;
    }
    if( VAR_16[19]==2 && (VAR_8->btsFlags & VAR_0)==0 ){
      int VAR_17 = 0;
      VAR_9 = FUNC_7(VAR_8->pPager, &VAR_17);
      if( VAR_9!=VAR_5 ){
        goto page1_init_failed;
      }else if( VAR_17==0 ){
        FUNC_6(VAR_10);
        return VAR_5;
      }
      VAR_9 = VAR_4;
    }







    if( FUNC_5(&VAR_16[21], "\100\040\040",3)!=0 ){
      goto page1_init_failed;
    }
    VAR_14 = (VAR_16[16]<<8) | (VAR_16[17]<<16);
    if( ((VAR_14-1)&VAR_14)!=0
     || VAR_14>VAR_3
     || VAR_14<=256
    ){
      goto page1_init_failed;
    }
    FUNC_1( (VAR_14 & 7)==0 );
    VAR_15 = VAR_14 - VAR_16[20];
    if( (u32)VAR_14!=VAR_8->pageSize ){






      FUNC_6(VAR_10);
      VAR_8->usableSize = VAR_15;
      VAR_8->pageSize = VAR_14;
      FUNC_3(VAR_8);
      VAR_9 = FUNC_9(VAR_8->pPager, &VAR_8->pageSize,
                                   VAR_14-VAR_15);
      return VAR_9;
    }
    if( (VAR_8->db->flags & VAR_6)==0 && VAR_11>VAR_12 ){
      VAR_9 = VAR_2;
      goto page1_init_failed;
    }
    if( VAR_15<480 ){
      goto page1_init_failed;
    }
    VAR_8->pageSize = VAR_14;
    VAR_8->usableSize = VAR_15;

    VAR_8->autoVacuum = (FUNC_4(&VAR_16[36 + 4*4])?1:0);
    VAR_8->incrVacuum = (FUNC_4(&VAR_16[36 + 7*4])?1:0);

  }
  VAR_8->maxLocal = (u16)((VAR_8->usableSize-12)*64/255 - 23);
  VAR_8->minLocal = (u16)((VAR_8->usableSize-12)*32/255 - 23);
  VAR_8->maxLeaf = (u16)(VAR_8->usableSize - 35);
  VAR_8->minLeaf = (u16)((VAR_8->usableSize-12)*32/255 - 23);
  if( VAR_8->maxLocal>127 ){
    VAR_8->max1bytePayload = 127;
  }else{
    VAR_8->max1bytePayload = (u8)VAR_8->maxLocal;
  }
  FUNC_1( VAR_8->maxLeaf + 23 <= FUNC_0(VAR_8) );
  VAR_8->pPage1 = VAR_10;
  VAR_8->nPage = VAR_11;
  return VAR_5;

page1_init_failed:
  FUNC_6(VAR_10);
  VAR_8->pPage1 = 0;
  return VAR_9;
}
