
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__* p; int szLeaf; } ;
struct TYPE_9__ {scalar_t__ rc; TYPE_1__* pConfig; } ;
struct TYPE_8__ {int iLeafOffset; int bDel; int nPos; TYPE_6__* pLeaf; int iEndofDoclist; } ;
struct TYPE_7__ {scalar_t__ eDetail; } ;
typedef TYPE_2__ Fts5SegIter ;
typedef TYPE_3__ Fts5Index ;


 int FUNC_0 (TYPE_6__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__*,int,int) ;

__attribute__((used)) static void FUNC_4(Fts5Index *VAR_2, Fts5SegIter *VAR_3){
  if( VAR_2->rc==VAR_1 ){
    int VAR_4 = VAR_3->iLeafOffset;
    FUNC_0(VAR_3->pLeaf);
    if( VAR_2->pConfig->eDetail==VAR_0 ){
      int VAR_5 = FUNC_1(VAR_3->iEndofDoclist, VAR_3->pLeaf->szLeaf);
      VAR_3->bDel = 0;
      VAR_3->nPos = 1;
      if( VAR_4<VAR_5 && VAR_3->pLeaf->p[VAR_4]==0 ){
        VAR_3->bDel = 1;
        VAR_4++;
        if( VAR_4<VAR_5 && VAR_3->pLeaf->p[VAR_4]==0 ){
          VAR_3->nPos = 1;
          VAR_4++;
        }else{
          VAR_3->nPos = 0;
        }
      }
    }else{
      int VAR_6;
      FUNC_3(VAR_3->pLeaf->p, VAR_4, VAR_6);
      VAR_3->bDel = (VAR_6 & 0x0001);
      VAR_3->nPos = VAR_6>>1;
      FUNC_2( VAR_3->nPos>=0 );
    }
    VAR_3->iLeafOffset = VAR_4;
  }
}
