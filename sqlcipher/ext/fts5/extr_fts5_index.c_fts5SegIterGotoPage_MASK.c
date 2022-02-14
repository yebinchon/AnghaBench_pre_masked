
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_14__ {scalar_t__ rc; } ;
struct TYPE_13__ {int iLeafPgno; int iLeafOffset; int iRowid; TYPE_10__* pLeaf; scalar_t__ pNextLeaf; TYPE_1__* pSeg; } ;
struct TYPE_12__ {int pgnoLast; } ;
struct TYPE_11__ {int szLeaf; int * p; } ;
typedef TYPE_2__ Fts5SegIter ;
typedef TYPE_3__ Fts5Index ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_10__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(
  Fts5Index *VAR_2,
  Fts5SegIter *VAR_3,
  int VAR_4
){
  FUNC_0( VAR_4>VAR_3->iLeafPgno );

  if( VAR_4>VAR_3->pSeg->pgnoLast ){
    VAR_2->rc = VAR_0;
  }else{
    FUNC_1(VAR_3->pNextLeaf);
    VAR_3->pNextLeaf = 0;
    VAR_3->iLeafPgno = VAR_4-1;
    FUNC_5(VAR_2, VAR_3);
    FUNC_0( VAR_2->rc!=VAR_1 || VAR_3->iLeafPgno==VAR_4 );

    if( VAR_2->rc==VAR_1 ){
      int VAR_5;
      u8 *VAR_6 = VAR_3->pLeaf->p;
      int VAR_7 = VAR_3->pLeaf->szLeaf;

      VAR_5 = FUNC_3(VAR_3->pLeaf);
      if( VAR_5<4 || VAR_5>=VAR_7 ){
        VAR_2->rc = VAR_0;
      }else{
        VAR_5 += FUNC_2(&VAR_6[VAR_5], (u64*)&VAR_3->iRowid);
        VAR_3->iLeafOffset = VAR_5;
        FUNC_4(VAR_2, VAR_3);
      }
    }
  }
}
