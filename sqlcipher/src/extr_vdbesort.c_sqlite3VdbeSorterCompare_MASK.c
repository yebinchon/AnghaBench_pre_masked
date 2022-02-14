
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {TYPE_5__* pUnpacked; } ;
typedef TYPE_3__ VdbeSorter ;
struct TYPE_13__ {TYPE_3__* pSorter; } ;
struct TYPE_16__ {scalar_t__ eCurType; int * pKeyInfo; TYPE_1__ uc; } ;
typedef TYPE_4__ VdbeCursor ;
struct TYPE_17__ {int nField; TYPE_2__* aMem; } ;
typedef TYPE_5__ UnpackedRecord ;
struct TYPE_18__ {int z; int n; } ;
struct TYPE_14__ {int flags; } ;
typedef TYPE_6__ Mem ;
typedef int KeyInfo ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_5__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,TYPE_5__*) ;
 int FUNC_3 (int *,int,void*,TYPE_5__*) ;
 void* FUNC_4 (TYPE_3__*,int*) ;

int FUNC_5(
  const VdbeCursor *VAR_4,
  Mem *VAR_5,
  int VAR_6,
  int *VAR_7
){
  VdbeSorter *VAR_8;
  UnpackedRecord *VAR_9;
  KeyInfo *VAR_10;
  int VAR_11;
  void *VAR_12; int VAR_13;

  FUNC_0( VAR_4->eCurType==VAR_0 );
  VAR_8 = VAR_4->uc.pSorter;
  VAR_9 = VAR_8->pUnpacked;
  VAR_10 = VAR_4->pKeyInfo;
  if( VAR_9==0 ){
    VAR_9 = VAR_8->pUnpacked = FUNC_1(VAR_10);
    if( VAR_9==0 ) return VAR_2;
    VAR_9->nField = VAR_6;
  }
  FUNC_0( VAR_9->nField==VAR_6 );

  VAR_12 = FUNC_4(VAR_8, &VAR_13);
  FUNC_3(VAR_10, VAR_13, VAR_12, VAR_9);
  for(VAR_11=0; VAR_11<VAR_6; VAR_11++){
    if( VAR_9->aMem[VAR_11].flags & VAR_1 ){
      *VAR_7 = -1;
      return VAR_3;
    }
  }

  *VAR_7 = FUNC_2(VAR_5->n, VAR_5->z, VAR_9);
  return VAR_3;
}
