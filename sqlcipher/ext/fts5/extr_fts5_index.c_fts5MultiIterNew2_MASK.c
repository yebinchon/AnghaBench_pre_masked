
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_17__ {scalar_t__ szLeaf; int nn; int p; } ;
struct TYPE_14__ {int bEof; } ;
struct TYPE_16__ {int bRev; TYPE_2__ base; TYPE_1__* aFirst; TYPE_3__* aSeg; } ;
struct TYPE_15__ {int flags; int iEndofDoclist; int iRowid; int iLeafOffset; TYPE_5__* pLeaf; } ;
struct TYPE_13__ {int iFirst; } ;
typedef TYPE_3__ Fts5SegIter ;
typedef TYPE_4__ Fts5Iter ;
typedef int Fts5Index ;
typedef TYPE_5__ Fts5Data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ,int *) ;
 TYPE_4__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(
  Fts5Index *VAR_2,
  Fts5Data *VAR_3,
  int VAR_4,
  Fts5Iter **VAR_5
){
  Fts5Iter *VAR_6;
  VAR_6 = FUNC_2(VAR_2, 2);
  if( VAR_6 ){
    Fts5SegIter *VAR_7 = &VAR_6->aSeg[1];

    VAR_7->flags = VAR_0;
    if( VAR_3->szLeaf>0 ){
      VAR_7->pLeaf = VAR_3;
      VAR_7->iLeafOffset = FUNC_1(VAR_3->p, (u64*)&VAR_7->iRowid);
      VAR_7->iEndofDoclist = VAR_3->nn;
      VAR_6->aFirst[1].iFirst = 1;
      if( VAR_4 ){
        VAR_6->bRev = 1;
        VAR_7->flags |= VAR_1;
        FUNC_4(VAR_2, VAR_7);
      }else{
        FUNC_3(VAR_2, VAR_7);
      }
      VAR_3 = 0;
    }else{
      VAR_6->base.bEof = 1;
    }
    FUNC_5(VAR_2, VAR_7);

    *VAR_5 = VAR_6;
  }

  FUNC_0(VAR_3);
}
