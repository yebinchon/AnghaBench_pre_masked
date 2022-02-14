
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_16__ {scalar_t__ szLeaf; scalar_t__ nn; int * p; } ;
struct TYPE_15__ {scalar_t__ rc; } ;
struct TYPE_14__ {int flags; scalar_t__ iLeafPgno; scalar_t__ iTermLeafPgno; scalar_t__ iTermLeafOffset; int iLeafOffset; TYPE_4__* pLeaf; scalar_t__ iEndofDoclist; int iRowid; TYPE_1__* pSeg; } ;
struct TYPE_13__ {int iSegid; } ;
typedef TYPE_2__ Fts5SegIter ;
typedef TYPE_3__ Fts5Index ;
typedef TYPE_4__ Fts5Data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(Fts5Index *VAR_3, Fts5SegIter *VAR_4){
  FUNC_1( VAR_4->flags & VAR_1 );
  FUNC_1( VAR_4->flags & VAR_0 );

  FUNC_3(VAR_4->pLeaf);
  VAR_4->pLeaf = 0;
  while( VAR_3->rc==VAR_2 && VAR_4->iLeafPgno>VAR_4->iTermLeafPgno ){
    Fts5Data *VAR_5;
    VAR_4->iLeafPgno--;
    VAR_5 = FUNC_2(VAR_3, FUNC_0(
          VAR_4->pSeg->iSegid, VAR_4->iLeafPgno
    ));
    if( VAR_5 ){



      if( VAR_4->iLeafPgno==VAR_4->iTermLeafPgno ){
        FUNC_1( VAR_4->pLeaf==0 );
        if( VAR_4->iTermLeafOffset<VAR_5->szLeaf ){
          VAR_4->pLeaf = VAR_5;
          VAR_4->iLeafOffset = VAR_4->iTermLeafOffset;
        }
      }else{
        int VAR_6;
        VAR_6 = FUNC_5(VAR_5);
        if( VAR_6 ){
          VAR_4->pLeaf = VAR_5;
          VAR_4->iLeafOffset = VAR_6;
        }
      }

      if( VAR_4->pLeaf ){
        u8 *VAR_7 = &VAR_4->pLeaf->p[VAR_4->iLeafOffset];
        VAR_4->iLeafOffset += FUNC_4(VAR_7, (u64*)&VAR_4->iRowid);
        break;
      }else{
        FUNC_3(VAR_5);
      }
    }
  }

  if( VAR_4->pLeaf ){
    VAR_4->iEndofDoclist = VAR_4->pLeaf->nn+1;
    FUNC_6(VAR_3, VAR_4);
  }
}
