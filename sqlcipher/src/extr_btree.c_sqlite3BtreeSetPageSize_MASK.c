
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_8__ {int optimalReserve; int btsFlags; int pageSize; int usableSize; int pPager; int pCursor; } ;
struct TYPE_7__ {TYPE_2__* pBt; } ;
typedef TYPE_1__ Btree ;
typedef TYPE_2__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int*,int) ;

int FUNC_5(Btree *VAR_4, int VAR_5, int VAR_6, int VAR_7){
  int VAR_8 = VAR_2;
  BtShared *VAR_9 = VAR_4->pBt;
  FUNC_0( VAR_6>=-1 && VAR_6<=255 );
  FUNC_2(VAR_4);



  if( VAR_9->btsFlags & VAR_0 ){
    FUNC_3(VAR_4);
    return VAR_3;
  }
  if( VAR_6<0 ){
    VAR_6 = VAR_9->pageSize - VAR_9->usableSize;
  }
  FUNC_0( VAR_6>=0 && VAR_6<=255 );
  if( VAR_5>=512 && VAR_5<=VAR_1 &&
        ((VAR_5-1)&VAR_5)==0 ){
    FUNC_0( (VAR_5 & 7)==0 );
    FUNC_0( !VAR_9->pCursor );
    VAR_9->pageSize = (u32)VAR_5;
    FUNC_1(VAR_9);
  }
  VAR_8 = FUNC_4(VAR_9->pPager, &VAR_9->pageSize, VAR_6);
  VAR_9->usableSize = VAR_9->pageSize - (u16)VAR_6;
  if( VAR_7 ) VAR_9->btsFlags |= VAR_0;
  FUNC_3(VAR_4);
  return VAR_8;
}
