
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_12__ {int n; int nSpace; } ;
struct TYPE_11__ {int rc; } ;
struct TYPE_10__ {int iLeafOffset; int iTermLeafOffset; size_t iPgidxOff; size_t iEndofDoclist; TYPE_1__* pLeaf; int iLeafPgno; int iTermLeafPgno; TYPE_8__ term; } ;
struct TYPE_9__ {int szLeaf; size_t nn; int * p; } ;
typedef TYPE_2__ Fts5SegIter ;
typedef TYPE_3__ Fts5Index ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_8__*,int,int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(Fts5Index *VAR_1, Fts5SegIter *VAR_2, int VAR_3){
  u8 *VAR_4 = VAR_2->pLeaf->p;
  int VAR_5 = VAR_2->iLeafOffset;
  int VAR_6;

  VAR_5 += FUNC_2(&VAR_4[VAR_5], VAR_6);
  if( VAR_5+VAR_6>VAR_2->pLeaf->szLeaf || VAR_3>VAR_2->term.n || VAR_6==0 ){
    VAR_1->rc = VAR_0;
    return;
  }
  VAR_2->term.n = VAR_3;
  FUNC_1(&VAR_1->rc, &VAR_2->term, VAR_6, &VAR_4[VAR_5]);
  FUNC_0( VAR_2->term.n<=VAR_2->term.nSpace );
  VAR_5 += VAR_6;
  VAR_2->iTermLeafOffset = VAR_5;
  VAR_2->iTermLeafPgno = VAR_2->iLeafPgno;
  VAR_2->iLeafOffset = VAR_5;

  if( VAR_2->iPgidxOff>=VAR_2->pLeaf->nn ){
    VAR_2->iEndofDoclist = VAR_2->pLeaf->nn+1;
  }else{
    int VAR_7;
    VAR_2->iPgidxOff += FUNC_2(&VAR_4[VAR_2->iPgidxOff], VAR_7);
    VAR_2->iEndofDoclist += VAR_7;
  }

  FUNC_3(VAR_1, VAR_2);
}
