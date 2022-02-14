
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ i64 ;
struct TYPE_14__ {TYPE_2__* pConfig; } ;
struct TYPE_13__ {int flags; scalar_t__ pNextLeaf; size_t iRowidOffset; int iLeafOffset; int* aRowidOffset; int iRowid; scalar_t__ nPos; TYPE_1__* pLeaf; } ;
struct TYPE_12__ {scalar_t__ eDetail; } ;
struct TYPE_11__ {int * p; } ;
typedef TYPE_3__ Fts5SegIter ;
typedef TYPE_4__ Fts5Index ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(
  Fts5Index *VAR_2,
  Fts5SegIter *VAR_3,
  int *VAR_4
){
  FUNC_1( VAR_3->flags & VAR_1 );
  FUNC_1( VAR_3->pNextLeaf==0 );
  FUNC_0(VAR_4);

  if( VAR_3->iRowidOffset>0 ){
    u8 *VAR_5 = VAR_3->pLeaf->p;
    int VAR_6;
    i64 VAR_7;

    VAR_3->iRowidOffset--;
    VAR_3->iLeafOffset = VAR_3->aRowidOffset[VAR_3->iRowidOffset];
    FUNC_3(VAR_2, VAR_3);
    VAR_6 = VAR_3->iLeafOffset;
    if( VAR_2->pConfig->eDetail!=VAR_0 ){
      VAR_6 += VAR_3->nPos;
    }
    FUNC_2(&VAR_5[VAR_6], (u64*)&VAR_7);
    VAR_3->iRowid -= VAR_7;
  }else{
    FUNC_4(VAR_2, VAR_3);
  }
}
