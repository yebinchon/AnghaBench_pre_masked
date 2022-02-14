
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int const u16 ;
struct TYPE_7__ {int hdrOffset; int const (* xCellSize ) (TYPE_2__*,int *) ;int nCell; scalar_t__ nOverflow; TYPE_1__* pBt; int * aCellIdx; int * aData; } ;
struct TYPE_6__ {int usableSize; int pPager; } ;
typedef TYPE_2__ MemPage ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int * const,int * const) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int const) ;
 int FUNC_4 (int *,int) ;
 int * FUNC_5 (int ) ;
 int const FUNC_6 (TYPE_2__*,int *) ;
 int const FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(
  MemPage *VAR_3,
  int VAR_4,
  u8 **VAR_5,
  u16 *VAR_6
){
  const int VAR_7 = VAR_3->hdrOffset;
  u8 * const VAR_8 = VAR_3->aData;
  const int VAR_9 = VAR_3->pBt->usableSize;
  u8 * const VAR_10 = &VAR_8[VAR_9];
  int VAR_11;
  u8 *VAR_12 = VAR_3->aCellIdx;
  u8 *VAR_13 = FUNC_5(VAR_3->pBt->pPager);
  u8 *VAR_14;

  VAR_11 = FUNC_2(&VAR_8[VAR_7+5]);
  FUNC_3(&VAR_13[VAR_11], &VAR_8[VAR_11], VAR_9 - VAR_11);

  VAR_14 = VAR_10;
  for(VAR_11=0; VAR_11<VAR_4; VAR_11++){
    u8 *VAR_15 = VAR_5[VAR_11];
    if( FUNC_0(VAR_15,VAR_8,VAR_10) ){
      VAR_15 = &VAR_13[VAR_15 - VAR_8];
    }
    VAR_14 -= VAR_6[VAR_11];
    FUNC_4(VAR_12, (VAR_14 - VAR_8));
    VAR_12 += 2;
    if( VAR_14 < VAR_12 ) return VAR_1;
    FUNC_3(VAR_14, VAR_15, VAR_6[VAR_11]);
    FUNC_1( VAR_6[VAR_11]==VAR_3->xCellSize(VAR_3, VAR_15) || VAR_0 );
    FUNC_8( VAR_6[VAR_11]!=VAR_3->xCellSize(VAR_3,VAR_15) );
  }


  VAR_3->nCell = VAR_4;
  VAR_3->nOverflow = 0;

  FUNC_4(&VAR_8[VAR_7+1], 0);
  FUNC_4(&VAR_8[VAR_7+3], VAR_3->nCell);
  FUNC_4(&VAR_8[VAR_7+5], VAR_14 - VAR_8);
  VAR_8[VAR_7+7] = 0x00;
  return VAR_2;
}
