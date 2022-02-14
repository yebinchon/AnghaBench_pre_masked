
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ szLeaf; } ;
struct TYPE_6__ {int flags; scalar_t__ iEndofDoclist; int iTermLeafPgno; int pDlidx; int iLeafPgno; TYPE_3__* pLeaf; TYPE_1__* pSeg; } ;
struct TYPE_5__ {int iSegid; } ;
typedef TYPE_2__ Fts5SegIter ;
typedef int Fts5Index ;
typedef TYPE_3__ Fts5Data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int,int ) ;

__attribute__((used)) static void FUNC_2(Fts5Index *VAR_2, Fts5SegIter *VAR_3){
  int VAR_4 = VAR_3->pSeg->iSegid;
  int VAR_5 = (VAR_3->flags & VAR_1);
  Fts5Data *VAR_6 = VAR_3->pLeaf;

  FUNC_0( VAR_3->flags & VAR_0 );
  FUNC_0( VAR_3->pDlidx==0 );




  if( VAR_3->iTermLeafPgno==VAR_3->iLeafPgno
   && VAR_3->iEndofDoclist<VAR_6->szLeaf
  ){
    return;
  }

  VAR_3->pDlidx = FUNC_1(VAR_2, VAR_5, VAR_4, VAR_3->iTermLeafPgno);
}
