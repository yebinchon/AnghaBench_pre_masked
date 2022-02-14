
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {size_t szLeaf; int * p; scalar_t__ nn; } ;
struct TYPE_9__ {scalar_t__ iLeafPgno; size_t iPgidxOff; scalar_t__ iEndofDoclist; TYPE_3__* pLeaf; TYPE_3__* pNextLeaf; TYPE_1__* pSeg; } ;
struct TYPE_8__ {scalar_t__ pgnoLast; int iSegid; } ;
typedef TYPE_1__ Fts5StructureSegment ;
typedef TYPE_2__ Fts5SegIter ;
typedef int Fts5Index ;
typedef TYPE_3__ Fts5Data ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(
  Fts5Index *VAR_0,
  Fts5SegIter *VAR_1
){
  Fts5Data *VAR_2;
  Fts5StructureSegment *VAR_3 = VAR_1->pSeg;
  FUNC_1(VAR_1->pLeaf);
  VAR_1->iLeafPgno++;
  if( VAR_1->pNextLeaf ){
    VAR_1->pLeaf = VAR_1->pNextLeaf;
    VAR_1->pNextLeaf = 0;
  }else if( VAR_1->iLeafPgno<=VAR_3->pgnoLast ){
    VAR_1->pLeaf = FUNC_4(VAR_0,
        FUNC_0(VAR_3->iSegid, VAR_1->iLeafPgno)
    );
  }else{
    VAR_1->pLeaf = 0;
  }
  VAR_2 = VAR_1->pLeaf;

  if( VAR_2 ){
    VAR_1->iPgidxOff = VAR_2->szLeaf;
    if( FUNC_3(VAR_2) ){
      VAR_1->iEndofDoclist = VAR_2->nn+1;
    }else{
      VAR_1->iPgidxOff += FUNC_2(&VAR_2->p[VAR_1->iPgidxOff],
          VAR_1->iEndofDoclist
      );
    }
  }
}
