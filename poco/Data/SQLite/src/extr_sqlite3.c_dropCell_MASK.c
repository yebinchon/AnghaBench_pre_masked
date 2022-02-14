
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_7__ {int nCell; scalar_t__ nFree; int hdrOffset; scalar_t__ childPtrSize; TYPE_1__* pBt; scalar_t__* aCellIdx; scalar_t__* aData; int pDbPage; } ;
struct TYPE_6__ {scalar_t__ usableSize; int mutex; } ;
typedef TYPE_2__ MemPage ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int) ;
 scalar_t__ FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_5 (scalar_t__*,int ,int) ;
 int FUNC_6 (scalar_t__*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(MemPage *VAR_2, int VAR_3, int VAR_4, int *VAR_5){
  u32 VAR_6;
  u8 *VAR_7;
  u8 *VAR_8;
  int VAR_9;
  int VAR_10;

  if( *VAR_5 ) return;
  FUNC_0( VAR_3>=0 && VAR_3<VAR_2->nCell );
  FUNC_0( VAR_0 || VAR_4==FUNC_1(VAR_2, VAR_3) );
  FUNC_0( FUNC_7(VAR_2->pDbPage) );
  FUNC_0( FUNC_8(VAR_2->pBt->mutex) );
  FUNC_0( VAR_2->nFree>=0 );
  VAR_7 = VAR_2->aData;
  VAR_8 = &VAR_2->aCellIdx[2*VAR_3];
  VAR_6 = FUNC_3(VAR_8);
  VAR_10 = VAR_2->hdrOffset;
  FUNC_9( VAR_6==FUNC_3(&VAR_7[VAR_10+5]) );
  FUNC_9( VAR_6+VAR_4==VAR_2->pBt->usableSize );
  if( VAR_6+VAR_4 > VAR_2->pBt->usableSize ){
    *VAR_5 = VAR_1;
    return;
  }
  VAR_9 = FUNC_2(VAR_2, VAR_6, VAR_4);
  if( VAR_9 ){
    *VAR_5 = VAR_9;
    return;
  }
  VAR_2->nCell--;
  if( VAR_2->nCell==0 ){
    FUNC_5(&VAR_7[VAR_10+1], 0, 4);
    VAR_7[VAR_10+7] = 0;
    FUNC_6(&VAR_7[VAR_10+5], VAR_2->pBt->usableSize);
    VAR_2->nFree = VAR_2->pBt->usableSize - VAR_2->hdrOffset
                       - VAR_2->childPtrSize - 8;
  }else{
    FUNC_4(VAR_8, VAR_8+2, 2*(VAR_2->nCell - VAR_3));
    FUNC_6(&VAR_7[VAR_10+3], VAR_2->nCell);
    VAR_2->nFree += 2;
  }
}
