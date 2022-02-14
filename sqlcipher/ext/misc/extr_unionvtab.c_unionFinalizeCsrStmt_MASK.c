
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nMaxOpen; TYPE_3__* pClosable; scalar_t__ bSwarm; TYPE_3__* aSrc; } ;
typedef TYPE_2__ UnionTab ;
struct TYPE_9__ {scalar_t__ nUser; struct TYPE_9__* pNextClosable; } ;
typedef TYPE_3__ UnionSrc ;
struct TYPE_7__ {scalar_t__ pVtab; } ;
struct TYPE_10__ {size_t iTab; scalar_t__ pStmt; TYPE_1__ base; } ;
typedef TYPE_4__ UnionCsr ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(UnionCsr *VAR_1){
  int VAR_2 = VAR_0;
  if( VAR_1->pStmt ){
    UnionTab *VAR_3 = (UnionTab*)VAR_1->base.pVtab;
    UnionSrc *VAR_4 = &VAR_3->aSrc[VAR_1->iTab];
    VAR_2 = FUNC_1(VAR_1->pStmt);
    VAR_1->pStmt = 0;
    if( VAR_3->bSwarm ){
      VAR_4->nUser--;
      FUNC_0( VAR_4->nUser>=0 );
      if( VAR_4->nUser==0 ){
        VAR_4->pNextClosable = VAR_3->pClosable;
        VAR_3->pClosable = VAR_4;
      }
      FUNC_2(VAR_3, VAR_3->nMaxOpen);
    }
  }
  return VAR_2;
}
