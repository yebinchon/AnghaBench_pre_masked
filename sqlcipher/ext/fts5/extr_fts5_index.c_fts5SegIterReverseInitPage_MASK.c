
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef scalar_t__ i64 ;
struct TYPE_12__ {int szLeaf; scalar_t__* p; } ;
struct TYPE_11__ {int rc; TYPE_1__* pConfig; } ;
struct TYPE_10__ {int iLeafOffset; int iEndofDoclist; int nRowidOffset; int* aRowidOffset; int iRowidOffset; int iRowid; TYPE_8__* pLeaf; } ;
struct TYPE_9__ {int eDetail; } ;
typedef TYPE_2__ Fts5SegIter ;
typedef TYPE_3__ Fts5Index ;


 int FUNC_0 (TYPE_8__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__*,int*,int*) ;
 scalar_t__ FUNC_2 (scalar_t__*,int *) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int*,int) ;

__attribute__((used)) static void FUNC_5(Fts5Index *VAR_2, Fts5SegIter *VAR_3){
  int VAR_4 = VAR_2->pConfig->eDetail;
  int VAR_5 = VAR_3->pLeaf->szLeaf;
  int VAR_6 = VAR_3->iLeafOffset;
  u8 *VAR_7 = VAR_3->pLeaf->p;
  int VAR_8 = 0;

  if( VAR_5>VAR_3->iEndofDoclist ){
    VAR_5 = VAR_3->iEndofDoclist;
  }

  FUNC_0(VAR_3->pLeaf);
  while( 1 ){
    i64 VAR_9 = 0;

    if( VAR_4==VAR_0 ){

      if( VAR_6<VAR_5 && VAR_7[VAR_6]==0 ){
        VAR_6++;
        if( VAR_6<VAR_5 && VAR_7[VAR_6]==0 ) VAR_6++;
      }
    }else{
      int VAR_10;
      int VAR_11;
      VAR_6 += FUNC_1(&VAR_7[VAR_6], &VAR_10, &VAR_11);
      VAR_6 += VAR_10;
    }
    if( VAR_6>=VAR_5 ) break;
    VAR_6 += FUNC_2(&VAR_7[VAR_6], (u64*)&VAR_9);
    VAR_3->iRowid += VAR_9;


    if( VAR_8>=VAR_3->nRowidOffset ){
      int VAR_12 = VAR_3->nRowidOffset + 8;
      int *VAR_13 = (int*)FUNC_4(VAR_3->aRowidOffset,VAR_12*sizeof(int));
      if( VAR_13==0 ){
        VAR_2->rc = VAR_1;
        break;
      }
      VAR_3->aRowidOffset = VAR_13;
      VAR_3->nRowidOffset = VAR_12;
    }

    VAR_3->aRowidOffset[VAR_8++] = VAR_3->iLeafOffset;
    VAR_3->iLeafOffset = VAR_6;
  }
  VAR_3->iRowidOffset = VAR_8;
  FUNC_3(VAR_2, VAR_3);
}
