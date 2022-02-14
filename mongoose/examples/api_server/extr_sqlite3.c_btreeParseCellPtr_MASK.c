
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_8__ {int nKey; int nData; int nPayload; int nHeader; int nSize; int nLocal; int iOverflow; int * pCell; } ;
struct TYPE_7__ {int leaf; int childPtrSize; int maxLocal; int minLocal; TYPE_1__* pBt; scalar_t__ hasData; scalar_t__ intKey; } ;
struct TYPE_6__ {int usableSize; int mutex; } ;
typedef TYPE_2__ MemPage ;
typedef TYPE_3__ CellInfo ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(
  MemPage *VAR_0,
  u8 *VAR_1,
  CellInfo *VAR_2
){
  u16 VAR_3;
  u32 VAR_4;

  FUNC_0( FUNC_4(VAR_0->pBt->mutex) );

  VAR_2->pCell = VAR_1;
  FUNC_0( VAR_0->leaf==0 || VAR_0->leaf==1 );
  VAR_3 = VAR_0->childPtrSize;
  FUNC_0( VAR_3==4-4*VAR_0->leaf );
  if( VAR_0->intKey ){
    if( VAR_0->hasData ){
      VAR_3 += FUNC_2(&VAR_1[VAR_3], VAR_4);
    }else{
      VAR_4 = 0;
    }
    VAR_3 += FUNC_1(&VAR_1[VAR_3], (u64*)&VAR_2->nKey);
    VAR_2->nData = VAR_4;
  }else{
    VAR_2->nData = 0;
    VAR_3 += FUNC_2(&VAR_1[VAR_3], VAR_4);
    VAR_2->nKey = VAR_4;
  }
  VAR_2->nPayload = VAR_4;
  VAR_2->nHeader = VAR_3;
  FUNC_5( VAR_4==VAR_0->maxLocal );
  FUNC_5( VAR_4==VAR_0->maxLocal+1 );
  if( FUNC_3(VAR_4<=VAR_0->maxLocal) ){



    if( (VAR_2->nSize = (u16)(VAR_3+VAR_4))<4 ) VAR_2->nSize = 4;
    VAR_2->nLocal = (u16)VAR_4;
    VAR_2->iOverflow = 0;
  }else{
    int VAR_5;
    int VAR_6;
    int VAR_7;

    VAR_5 = VAR_0->minLocal;
    VAR_6 = VAR_0->maxLocal;
    VAR_7 = VAR_5 + (VAR_4 - VAR_5)%(VAR_0->pBt->usableSize - 4);
    FUNC_5( VAR_7==VAR_6 );
    FUNC_5( VAR_7==VAR_6+1 );
    if( VAR_7 <= VAR_6 ){
      VAR_2->nLocal = (u16)VAR_7;
    }else{
      VAR_2->nLocal = (u16)VAR_5;
    }
    VAR_2->iOverflow = (u16)(VAR_2->nLocal + VAR_3);
    VAR_2->nSize = VAR_2->iOverflow + 4;
  }
}
