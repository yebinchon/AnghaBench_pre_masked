
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* pParent; } ;
typedef TYPE_1__ VdbeFrame ;
typedef int VdbeCursor ;
struct TYPE_8__ {int nCursor; TYPE_1__* pDelFrame; int nMem; int * aMem; int ** apCsr; scalar_t__ nFrame; TYPE_1__* pFrame; } ;
typedef TYPE_2__ Vdbe ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_4(Vdbe *VAR_0){
  if( VAR_0->pFrame ){
    VdbeFrame *VAR_1;
    for(VAR_1=VAR_0->pFrame; VAR_1->pParent; VAR_1=VAR_1->pParent);
    FUNC_2(VAR_1);
  }
  VAR_0->pFrame = 0;
  VAR_0->nFrame = 0;

  if( VAR_0->apCsr ){
    int VAR_2;
    for(VAR_2=0; VAR_2<VAR_0->nCursor; VAR_2++){
      VdbeCursor *VAR_3 = VAR_0->apCsr[VAR_2];
      if( VAR_3 ){
        FUNC_3(VAR_0, VAR_3);
        VAR_0->apCsr[VAR_2] = 0;
      }
    }
  }
  if( VAR_0->aMem ){
    FUNC_0(&VAR_0->aMem[1], VAR_0->nMem);
  }
  while( VAR_0->pDelFrame ){
    VdbeFrame *VAR_4 = VAR_0->pDelFrame;
    VAR_0->pDelFrame = VAR_4->pParent;
    FUNC_1(VAR_4);
  }
}
