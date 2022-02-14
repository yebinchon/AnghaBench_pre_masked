
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {unsigned char* aData; int hdrOffset; int childPtrSize; int nFree; TYPE_1__* pBt; int pDbPage; } ;
struct TYPE_5__ {int usableSize; int btsFlags; int mutex; } ;
typedef TYPE_2__ MemPage ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (unsigned char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(MemPage *VAR_3, u16 VAR_4, u16 VAR_5){
  u16 VAR_6;
  u16 VAR_7;
  u8 VAR_8;
  u8 VAR_9 = 0;
  u16 VAR_10 = VAR_5;
  u16 VAR_11;
  u32 VAR_12 = VAR_4 + VAR_5;
  unsigned char *VAR_13 = VAR_3->aData;

  FUNC_1( VAR_3->pBt!=0 );
  FUNC_1( FUNC_5(VAR_3->pDbPage) );
  FUNC_1( VAR_1 || VAR_4>=VAR_3->hdrOffset+6+VAR_3->childPtrSize );
  FUNC_1( VAR_1 || VAR_12 <= VAR_3->pBt->usableSize );
  FUNC_1( FUNC_6(VAR_3->pBt->mutex) );
  FUNC_1( VAR_5>=4 );
  FUNC_1( VAR_4<=VAR_3->pBt->usableSize-4 );




  VAR_8 = VAR_3->hdrOffset;
  VAR_6 = VAR_8 + 1;
  if( VAR_13[VAR_6+1]==0 && VAR_13[VAR_6]==0 ){
    VAR_7 = 0;
  }else{
    while( (VAR_7 = FUNC_2(&VAR_13[VAR_6]))<VAR_4 ){
      if( VAR_7<VAR_6+4 ){
        if( VAR_7==0 ) break;
        return FUNC_0(VAR_3);
      }
      VAR_6 = VAR_7;
    }
    if( VAR_7>VAR_3->pBt->usableSize-4 ){
      return FUNC_0(VAR_3);
    }
    FUNC_1( VAR_7>VAR_6 || VAR_7==0 );







    if( VAR_7 && VAR_12+3>=VAR_7 ){
      VAR_9 = VAR_7 - VAR_12;
      if( VAR_12>VAR_7 ) return FUNC_0(VAR_3);
      VAR_12 = VAR_7 + FUNC_2(&VAR_13[VAR_7+2]);
      if( VAR_12 > VAR_3->pBt->usableSize ){
        return FUNC_0(VAR_3);
      }
      VAR_5 = VAR_12 - VAR_4;
      VAR_7 = FUNC_2(&VAR_13[VAR_7]);
    }





    if( VAR_6>VAR_8+1 ){
      int VAR_14 = VAR_6 + FUNC_2(&VAR_13[VAR_6+2]);
      if( VAR_14+3>=VAR_4 ){
        if( VAR_14>VAR_4 ) return FUNC_0(VAR_3);
        VAR_9 += VAR_4 - VAR_14;
        VAR_5 = VAR_12 - VAR_6;
        VAR_4 = VAR_6;
      }
    }
    if( VAR_9>VAR_13[VAR_8+7] ) return FUNC_0(VAR_3);
    VAR_13[VAR_8+7] -= VAR_9;
  }
  VAR_11 = FUNC_2(&VAR_13[VAR_8+5]);
  if( VAR_4<=VAR_11 ){



    if( VAR_4<VAR_11 || VAR_6!=VAR_8+1 ) return FUNC_0(VAR_3);
    FUNC_4(&VAR_13[VAR_8+1], VAR_7);
    FUNC_4(&VAR_13[VAR_8+5], VAR_12);
  }else{

    FUNC_4(&VAR_13[VAR_6], VAR_4);
  }
  if( VAR_3->pBt->btsFlags & VAR_0 ){


    FUNC_3(&VAR_13[VAR_4], 0, VAR_5);
  }
  FUNC_4(&VAR_13[VAR_4], VAR_7);
  FUNC_4(&VAR_13[VAR_4+2], VAR_5);
  VAR_3->nFree += VAR_10;
  return VAR_2;
}
