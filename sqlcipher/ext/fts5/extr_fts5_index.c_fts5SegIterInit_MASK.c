
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


struct TYPE_20__ {scalar_t__ rc; } ;
struct TYPE_19__ {scalar_t__ iLeafPgno; int iLeafOffset; TYPE_16__* pLeaf; scalar_t__ iPgidxOff; TYPE_1__* pSeg; } ;
struct TYPE_18__ {scalar_t__ pgnoFirst; } ;
struct TYPE_17__ {int nn; scalar_t__ szLeaf; } ;
typedef TYPE_1__ Fts5StructureSegment ;
typedef TYPE_2__ Fts5SegIter ;
typedef TYPE_3__ Fts5Index ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_16__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_8(
  Fts5Index *VAR_1,
  Fts5StructureSegment *VAR_2,
  Fts5SegIter *VAR_3
){
  if( VAR_2->pgnoFirst==0 ){





    FUNC_0( VAR_3->pLeaf==0 );
    return;
  }

  if( VAR_1->rc==VAR_0 ){
    FUNC_7(VAR_3, 0, sizeof(*VAR_3));
    FUNC_6(VAR_1, VAR_3);
    VAR_3->pSeg = VAR_2;
    VAR_3->iLeafPgno = VAR_2->pgnoFirst-1;
    FUNC_5(VAR_1, VAR_3);
  }

  if( VAR_1->rc==VAR_0 ){
    VAR_3->iLeafOffset = 4;
    FUNC_1( VAR_3->pLeaf->nn>4 );
    FUNC_1( FUNC_2(VAR_3->pLeaf)==4 );
    VAR_3->iPgidxOff = VAR_3->pLeaf->szLeaf+1;
    FUNC_4(VAR_1, VAR_3, 0);
    FUNC_3(VAR_1, VAR_3);
  }
}
