
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_7__ {int nCell; int hdrOffset; int nFree; int * aCellIdx; TYPE_1__* pBt; int * aData; int pDbPage; } ;
struct TYPE_6__ {scalar_t__ usableSize; int mutex; } ;
typedef TYPE_2__ MemPage ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(MemPage *VAR_1, int VAR_2, int VAR_3, int *VAR_4){
  u32 VAR_5;
  u8 *VAR_6;
  u8 *VAR_7;
  u8 *VAR_8;
  int VAR_9;
  int VAR_10;

  if( *VAR_4 ) return;

  FUNC_1( VAR_2>=0 && VAR_2<VAR_1->nCell );
  FUNC_1( VAR_3==FUNC_2(VAR_1, VAR_2) );
  FUNC_1( FUNC_6(VAR_1->pDbPage) );
  FUNC_1( FUNC_7(VAR_1->pBt->mutex) );
  VAR_6 = VAR_1->aData;
  VAR_7 = &VAR_1->aCellIdx[2*VAR_2];
  VAR_5 = FUNC_4(VAR_7);
  VAR_10 = VAR_1->hdrOffset;
  FUNC_8( VAR_5==FUNC_4(&VAR_6[VAR_10+5]) );
  FUNC_8( VAR_5+VAR_3==VAR_1->pBt->usableSize );
  if( VAR_5 < (u32)FUNC_4(&VAR_6[VAR_10+5]) || VAR_5+VAR_3 > VAR_1->pBt->usableSize ){
    *VAR_4 = VAR_0;
    return;
  }
  VAR_9 = FUNC_3(VAR_1, VAR_5, VAR_3);
  if( VAR_9 ){
    *VAR_4 = VAR_9;
    return;
  }
  VAR_8 = &VAR_1->aCellIdx[2*VAR_1->nCell - 2];
  FUNC_1( (FUNC_0(VAR_7)&1)==0 );
  while( VAR_7<VAR_8 ){
    *(u16*)VAR_7 = *(u16*)&VAR_7[2];
    VAR_7 += 2;
  }
  VAR_1->nCell--;
  FUNC_5(&VAR_6[VAR_10+3], VAR_1->nCell);
  VAR_1->nFree += 2;
}
