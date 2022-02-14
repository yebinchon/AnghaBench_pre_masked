
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_14__ {TYPE_1__* aDb; } ;
typedef TYPE_2__ sqlite3 ;
typedef int i64 ;
struct TYPE_15__ {int iReadOff; int nAlloc; int nBuffer; int iEof; int * aBuffer; int * aAlloc; int pFile; } ;
typedef TYPE_3__ VdbeSorterIter ;
struct TYPE_16__ {int iWriteOff; int pTemp1; } ;
typedef TYPE_4__ VdbeSorter ;
struct TYPE_13__ {int pBt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ,int *,int,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,int*) ;

__attribute__((used)) static int FUNC_6(
  sqlite3 *VAR_3,
  const VdbeSorter *VAR_4,
  i64 VAR_5,
  VdbeSorterIter *VAR_6,
  i64 *VAR_7
){
  int VAR_8 = VAR_2;
  int VAR_9;

  VAR_9 = FUNC_1(VAR_3->aDb[0].pBt);

  FUNC_0( VAR_4->iWriteOff>VAR_5 );
  FUNC_0( VAR_6->aAlloc==0 );
  FUNC_0( VAR_6->aBuffer==0 );
  VAR_6->pFile = VAR_4->pTemp1;
  VAR_6->iReadOff = VAR_5;
  VAR_6->nAlloc = 128;
  VAR_6->aAlloc = (u8 *)FUNC_2(VAR_3, VAR_6->nAlloc);
  VAR_6->nBuffer = VAR_9;
  VAR_6->aBuffer = (u8 *)FUNC_2(VAR_3, VAR_9);

  if( !VAR_6->aBuffer ){
    VAR_8 = VAR_1;
  }else{
    int VAR_10;

    VAR_10 = VAR_5 % VAR_9;
    if( VAR_10 ){
      int VAR_11 = VAR_9 - VAR_10;
      if( (VAR_5 + VAR_11) > VAR_4->iWriteOff ){
        VAR_11 = (int)(VAR_4->iWriteOff - VAR_5);
      }
      VAR_8 = FUNC_3(
          VAR_4->pTemp1, &VAR_6->aBuffer[VAR_10], VAR_11, VAR_5
      );
      FUNC_0( VAR_8!=VAR_0 );
    }

    if( VAR_8==VAR_2 ){
      u64 VAR_12;
      VAR_6->iEof = VAR_4->iWriteOff;
      VAR_8 = FUNC_5(VAR_3, VAR_6, &VAR_12);
      VAR_6->iEof = VAR_6->iReadOff + VAR_12;
      *VAR_7 += VAR_12;
    }
  }

  if( VAR_8==VAR_2 ){
    VAR_8 = FUNC_4(VAR_3, VAR_6);
  }
  return VAR_8;
}
