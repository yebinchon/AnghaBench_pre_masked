
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {unsigned char* aData; int hdrOffset; int childPtrSize; int nFree; TYPE_1__* pBt; int pDbPage; } ;
struct TYPE_4__ {int usableSize; int btsFlags; int mutex; } ;
typedef TYPE_2__ MemPage ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(MemPage *VAR_4, u16 VAR_5, u16 VAR_6){
  u16 VAR_7;
  u16 VAR_8;
  u8 VAR_9;
  u8 VAR_10 = 0;
  u16 VAR_11 = VAR_6;
  u32 VAR_12 = VAR_4->pBt->usableSize-4;
  u32 VAR_13 = VAR_5 + VAR_6;
  unsigned char *VAR_14 = VAR_4->aData;

  FUNC_0( VAR_4->pBt!=0 );
  FUNC_0( FUNC_4(VAR_4->pDbPage) );
  FUNC_0( VAR_1 || VAR_5>=VAR_4->hdrOffset+6+VAR_4->childPtrSize );
  FUNC_0( VAR_1 || VAR_13 <= VAR_4->pBt->usableSize );
  FUNC_0( FUNC_5(VAR_4->pBt->mutex) );
  FUNC_0( VAR_6>=4 );
  FUNC_0( VAR_5<=VAR_12 );



  if( VAR_4->pBt->btsFlags & VAR_0 ){
    FUNC_2(&VAR_14[VAR_5], 0, VAR_6);
  }




  VAR_9 = VAR_4->hdrOffset;
  VAR_7 = VAR_9 + 1;
  if( VAR_14[VAR_7+1]==0 && VAR_14[VAR_7]==0 ){
    VAR_8 = 0;
  }else{
    while( (VAR_8 = FUNC_1(&VAR_14[VAR_7]))<VAR_5 ){
      if( VAR_8<VAR_7+4 ){
        if( VAR_8==0 ) break;
        return VAR_2;
      }
      VAR_7 = VAR_8;
    }
    if( VAR_8>VAR_12 ) return VAR_2;
    FUNC_0( VAR_8>VAR_7 || VAR_8==0 );







    if( VAR_8 && VAR_13+3>=VAR_8 ){
      VAR_10 = VAR_8 - VAR_13;
      if( VAR_13>VAR_8 ) return VAR_2;
      VAR_13 = VAR_8 + FUNC_1(&VAR_14[VAR_8+2]);
      if( VAR_13 > VAR_4->pBt->usableSize ) return VAR_2;
      VAR_6 = VAR_13 - VAR_5;
      VAR_8 = FUNC_1(&VAR_14[VAR_8]);
    }





    if( VAR_7>VAR_9+1 ){
      int VAR_15 = VAR_7 + FUNC_1(&VAR_14[VAR_7+2]);
      if( VAR_15+3>=VAR_5 ){
        if( VAR_15>VAR_5 ) return VAR_2;
        VAR_10 += VAR_5 - VAR_15;
        VAR_6 = VAR_13 - VAR_7;
        VAR_5 = VAR_7;
      }
    }
    if( VAR_10>VAR_14[VAR_9+7] ) return VAR_2;
    VAR_14[VAR_9+7] -= VAR_10;
  }
  if( VAR_5==FUNC_1(&VAR_14[VAR_9+5]) ){



    if( VAR_7!=VAR_9+1 ) return VAR_2;
    FUNC_3(&VAR_14[VAR_9+1], VAR_8);
    FUNC_3(&VAR_14[VAR_9+5], VAR_13);
  }else{

    FUNC_3(&VAR_14[VAR_7], VAR_5);
    FUNC_3(&VAR_14[VAR_5], VAR_8);
    FUNC_3(&VAR_14[VAR_5+2], VAR_6);
  }
  VAR_4->nFree += VAR_11;
  return VAR_3;
}
