
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* pUnpacked; } ;
typedef TYPE_2__ VdbeSorter ;
struct TYPE_12__ {TYPE_2__* pSorter; TYPE_5__* pKeyInfo; } ;
typedef TYPE_3__ VdbeCursor ;
struct TYPE_13__ {int nField; int flags; TYPE_1__* aMem; } ;
typedef TYPE_4__ UnpackedRecord ;
struct TYPE_14__ {int nField; } ;
struct TYPE_10__ {int flags; } ;
typedef TYPE_5__ KeyInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,void const*,TYPE_4__*) ;
 int FUNC_2 (TYPE_5__*,int,void const*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_3(
  const VdbeCursor *VAR_2,
  int VAR_3,
  const void *VAR_4, int VAR_5,
  const void *VAR_6, int VAR_7,
  int *VAR_8
){
  KeyInfo *VAR_9 = VAR_2->pKeyInfo;
  VdbeSorter *VAR_10 = VAR_2->pSorter;
  UnpackedRecord *VAR_11 = VAR_10->pUnpacked;
  int VAR_12;

  if( VAR_6 ){
    FUNC_2(VAR_9, VAR_7, VAR_6, VAR_11);
  }

  if( VAR_3 ){
    VAR_11->nField = VAR_9->nField;
    FUNC_0( VAR_11->nField>0 );
    for(VAR_12=0; VAR_12<VAR_11->nField; VAR_12++){
      if( VAR_11->aMem[VAR_12].flags & VAR_0 ){
        *VAR_8 = -1;
        return;
      }
    }
    VAR_11->flags |= VAR_1;
  }

  *VAR_8 = FUNC_1(VAR_5, VAR_4, VAR_11);
}
