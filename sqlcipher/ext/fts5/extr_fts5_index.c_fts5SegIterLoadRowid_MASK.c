
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_10__ {int szLeaf; int * p; } ;
struct TYPE_9__ {scalar_t__ rc; } ;
struct TYPE_8__ {int iLeafOffset; int iRowid; TYPE_7__* pLeaf; } ;
typedef TYPE_1__ Fts5SegIter ;
typedef TYPE_2__ Fts5Index ;


 int FUNC_0 (TYPE_7__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(Fts5Index *VAR_2, Fts5SegIter *VAR_3){
  u8 *VAR_4 = VAR_3->pLeaf->p;
  int VAR_5 = VAR_3->iLeafOffset;

  FUNC_0(VAR_3->pLeaf);
  if( VAR_5>=VAR_3->pLeaf->szLeaf ){
    FUNC_1(VAR_2, VAR_3);
    if( VAR_3->pLeaf==0 ){
      if( VAR_2->rc==VAR_1 ) VAR_2->rc = VAR_0;
      return;
    }
    VAR_5 = 4;
    VAR_4 = VAR_3->pLeaf->p;
  }
  VAR_5 += FUNC_2(&VAR_4[VAR_5], (u64*)&VAR_3->iRowid);
  VAR_3->iLeafOffset = VAR_5;
}
