
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_5__ {int usableSize; int mutex; } ;
struct TYPE_4__ {int hdrOffset; scalar_t__ nOverflow; scalar_t__ nCell; int nFree; int * aCellIdx; int pDbPage; TYPE_3__* pBt; int * aData; } ;
typedef TYPE_1__ MemPage ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 int const FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,scalar_t__) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(
  MemPage *VAR_0,
  int VAR_1,
  u8 **VAR_2,
  u16 *VAR_3
){
  int VAR_4;
  u8 *VAR_5;
  int VAR_6;
  u8 * const VAR_7 = VAR_0->aData;
  const int VAR_8 = VAR_0->hdrOffset;
  const int VAR_9 = VAR_0->pBt->usableSize;

  FUNC_1( VAR_0->nOverflow==0 );
  FUNC_1( FUNC_6(VAR_0->pBt->mutex) );
  FUNC_1( VAR_1>=0 && VAR_1<=(int)FUNC_0(VAR_0->pBt)
            && (int)FUNC_0(VAR_0->pBt)<=10921);
  FUNC_1( FUNC_5(VAR_0->pDbPage) );


  FUNC_1( VAR_0->nCell==0 );
  FUNC_1( FUNC_2(&VAR_7[VAR_8+5])==VAR_9 );

  VAR_5 = &VAR_0->aCellIdx[VAR_1*2];
  VAR_6 = VAR_9;
  for(VAR_4=VAR_1-1; VAR_4>=0; VAR_4--){
    u16 VAR_10 = VAR_3[VAR_4];
    VAR_5 -= 2;
    VAR_6 -= VAR_10;
    FUNC_4(VAR_5, VAR_6);
    FUNC_3(&VAR_7[VAR_6], VAR_2[VAR_4], VAR_10);
  }
  FUNC_4(&VAR_7[VAR_8+3], VAR_1);
  FUNC_4(&VAR_7[VAR_8+5], VAR_6);
  VAR_0->nFree -= (VAR_1*2 + VAR_9 - VAR_6);
  VAR_0->nCell = (u16)VAR_1;
}
