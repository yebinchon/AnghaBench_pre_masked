
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
typedef int i64 ;
typedef int aHdr ;
struct TYPE_27__ {int n; int * p; } ;
struct TYPE_26__ {int szLeaf; size_t nn; int* p; } ;
struct TYPE_25__ {scalar_t__ rc; } ;
struct TYPE_24__ {int nSeg; TYPE_3__* aSeg; } ;
struct TYPE_21__ {int n; int* p; } ;
struct TYPE_23__ {scalar_t__ pLeaf; int iTermLeafOffset; int iTermLeafPgno; int iLeafPgno; int iEndofDoclist; size_t iPgidxOff; TYPE_2__* pSeg; TYPE_1__ term; } ;
struct TYPE_22__ {int pgnoFirst; int iSegid; scalar_t__ pgnoLast; } ;
typedef TYPE_3__ Fts5SegIter ;
typedef TYPE_4__ Fts5Iter ;
typedef TYPE_5__ Fts5Index ;
typedef TYPE_6__ Fts5Data ;
typedef TYPE_7__ Fts5Buffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__*,TYPE_7__*,int,int*) ;
 int FUNC_2 (scalar_t__*,TYPE_7__*,int) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (scalar_t__*,TYPE_7__*,size_t) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_5__*,int ,int ) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_5__*,int ,int *,int) ;
 TYPE_6__* FUNC_9 (TYPE_5__*,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (TYPE_7__*,int ,int) ;

__attribute__((used)) static void FUNC_12(Fts5Index *VAR_2, Fts5Iter *VAR_3){
  int VAR_4;
  Fts5Buffer VAR_5;
  FUNC_11(&VAR_5, 0, sizeof(Fts5Buffer));
  for(VAR_4=0; VAR_4<VAR_3->nSeg && VAR_2->rc==VAR_1; VAR_4++){
    Fts5SegIter *VAR_6 = &VAR_3->aSeg[VAR_4];
    if( VAR_6->pSeg==0 ){

    }else if( VAR_6->pLeaf==0 ){



      VAR_6->pSeg->pgnoLast = 0;
      VAR_6->pSeg->pgnoFirst = 0;
    }else{
      int VAR_7 = VAR_6->iTermLeafOffset;
      i64 VAR_8;
      Fts5Data *VAR_9;
      int VAR_10 = VAR_6->pSeg->iSegid;
      u8 VAR_11[4] = {0x00, 0x00, 0x00, 0x00};

      VAR_8 = FUNC_0(VAR_10, VAR_6->iTermLeafPgno);
      VAR_9 = FUNC_9(VAR_2, VAR_8);
      if( VAR_9 ){
        if( VAR_7>VAR_9->szLeaf ){




          VAR_2->rc = VAR_0;
        }else{
          FUNC_5(&VAR_5);
          FUNC_4(&VAR_2->rc, &VAR_5, VAR_9->nn);
          FUNC_1(&VAR_2->rc, &VAR_5, sizeof(VAR_11), VAR_11);
          FUNC_2(&VAR_2->rc, &VAR_5, VAR_6->term.n);
          FUNC_1(&VAR_2->rc, &VAR_5, VAR_6->term.n, VAR_6->term.p);
          FUNC_1(&VAR_2->rc, &VAR_5, VAR_9->szLeaf-VAR_7,&VAR_9->p[VAR_7]);
          if( VAR_2->rc==VAR_1 ){

            FUNC_10(&VAR_5.p[2], (u16)VAR_5.n);
          }


          FUNC_2(&VAR_2->rc, &VAR_5, 4);
          if( VAR_6->iLeafPgno==VAR_6->iTermLeafPgno
           && VAR_6->iEndofDoclist<VAR_9->szLeaf
           && VAR_6->iPgidxOff<=VAR_9->nn
          ){
            int VAR_12 = VAR_9->szLeaf - VAR_6->iEndofDoclist;
            FUNC_2(&VAR_2->rc, &VAR_5, VAR_5.n - 1 - VAR_12 - 4);
            FUNC_1(&VAR_2->rc, &VAR_5,
                VAR_9->nn - VAR_6->iPgidxOff, &VAR_9->p[VAR_6->iPgidxOff]
            );
          }

          VAR_6->pSeg->pgnoFirst = VAR_6->iTermLeafPgno;
          FUNC_6(VAR_2, FUNC_0(VAR_10, 1), VAR_8);
          FUNC_8(VAR_2, VAR_8, VAR_5.p, VAR_5.n);
        }
        FUNC_7(VAR_9);
      }
    }
  }
  FUNC_3(&VAR_5);
}
