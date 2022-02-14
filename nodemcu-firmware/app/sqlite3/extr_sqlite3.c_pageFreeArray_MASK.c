
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_9__ {int* szCell; int ** apCell; } ;
struct TYPE_8__ {int hdrOffset; int childPtrSize; TYPE_1__* pBt; int * aData; } ;
struct TYPE_7__ {size_t usableSize; } ;
typedef TYPE_2__ MemPage ;
typedef TYPE_3__ CellArray ;


 scalar_t__ FUNC_0 (int *,int * const,int * const) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_3(
  MemPage *VAR_0,
  int VAR_1,
  int VAR_2,
  CellArray *VAR_3
){
  u8 * const VAR_4 = VAR_0->aData;
  u8 * const VAR_5 = &VAR_4[VAR_0->pBt->usableSize];
  u8 * const VAR_6 = &VAR_4[VAR_0->hdrOffset + 8 + VAR_0->childPtrSize];
  int VAR_7 = 0;
  int VAR_8;
  int VAR_9 = VAR_1 + VAR_2;
  u8 *VAR_10 = 0;
  int VAR_11 = 0;

  for(VAR_8=VAR_1; VAR_8<VAR_9; VAR_8++){
    u8 *VAR_12 = VAR_3->apCell[VAR_8];
    if( FUNC_0(VAR_12, VAR_6, VAR_5) ){
      int VAR_13;



      VAR_13 = VAR_3->szCell[VAR_8]; FUNC_1( VAR_13>0 );
      if( VAR_10!=(VAR_12 + VAR_13) ){
        if( VAR_10 ){
          FUNC_1( VAR_10>VAR_4 && (VAR_10 - VAR_4)<65536 );
          FUNC_2(VAR_0, (u16)(VAR_10 - VAR_4), VAR_11);
        }
        VAR_10 = VAR_12;
        VAR_11 = VAR_13;
        if( VAR_10+VAR_13>VAR_5 ) return 0;
      }else{
        VAR_10 = VAR_12;
        VAR_11 += VAR_13;
      }
      VAR_7++;
    }
  }
  if( VAR_10 ){
    FUNC_1( VAR_10>VAR_4 && (VAR_10 - VAR_4)<65536 );
    FUNC_2(VAR_0, (u16)(VAR_10 - VAR_4), VAR_11);
  }
  return VAR_7;
}
