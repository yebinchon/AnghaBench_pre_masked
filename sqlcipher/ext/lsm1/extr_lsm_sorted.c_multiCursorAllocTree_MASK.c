
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ aTree; int nPtr; scalar_t__ pBtCsr; int nTree; TYPE_1__* pDb; } ;
struct TYPE_4__ {int pEnv; } ;
typedef TYPE_2__ MultiCursor ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,int*) ;

__attribute__((used)) static int FUNC_1(MultiCursor *VAR_2){
  int VAR_3 = VAR_1;
  if( VAR_2->aTree==0 ){
    int VAR_4;
    int VAR_5;

    VAR_5 = VAR_0 + VAR_2->nPtr + (VAR_2->pBtCsr!=0);
    VAR_2->nTree = 2;
    while( VAR_2->nTree<VAR_5 ){
      VAR_2->nTree = VAR_2->nTree*2;
    }

    VAR_4 = sizeof(int)*VAR_2->nTree*2;
    VAR_2->aTree = (int *)FUNC_0(VAR_2->pDb->pEnv, VAR_4, &VAR_3);
  }
  return VAR_3;
}
