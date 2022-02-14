
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_18__ {int * p; } ;
struct TYPE_17__ {TYPE_1__* pConfig; } ;
struct TYPE_14__ {scalar_t__ nData; int * pData; int iRowid; } ;
struct TYPE_16__ {scalar_t__ pColset; TYPE_8__ poslist; TYPE_3__ base; TYPE_6__* pIndex; } ;
struct TYPE_15__ {scalar_t__ nPos; size_t iLeafOffset; TYPE_2__* pLeaf; int iRowid; } ;
struct TYPE_13__ {scalar_t__ szLeaf; int * p; } ;
struct TYPE_12__ {scalar_t__ eDetail; } ;
typedef TYPE_4__ Fts5SegIter ;
typedef TYPE_5__ Fts5Iter ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_6__*,TYPE_4__*,int ,TYPE_8__*) ;

__attribute__((used)) static void FUNC_3(Fts5Iter *VAR_1, Fts5SegIter *VAR_2){
  VAR_1->base.iRowid = VAR_2->iRowid;
  VAR_1->base.nData = VAR_2->nPos;

  FUNC_0( VAR_1->pIndex->pConfig->eDetail!=VAR_0 );
  FUNC_0( VAR_1->pColset==0 );

  if( VAR_2->iLeafOffset+VAR_2->nPos<=VAR_2->pLeaf->szLeaf ){


    VAR_1->base.pData = &VAR_2->pLeaf->p[VAR_2->iLeafOffset];
  }else{



    FUNC_1(&VAR_1->poslist);
    FUNC_2(VAR_1->pIndex, VAR_2, 0, &VAR_1->poslist);
    VAR_1->base.pData = VAR_1->poslist.p;
  }
}
