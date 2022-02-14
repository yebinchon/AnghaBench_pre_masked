
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lsm_env ;
struct TYPE_4__ {struct TYPE_4__* aRhs; struct TYPE_4__* pMerge; struct TYPE_4__* pSplitKey; } ;
typedef TYPE_1__ Level ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(lsm_env *VAR_0, Level *VAR_1){
  if( VAR_1 ){
    FUNC_0(VAR_0, VAR_1->pSplitKey);
    FUNC_0(VAR_0, VAR_1->pMerge);
    FUNC_0(VAR_0, VAR_1->aRhs);
    FUNC_0(VAR_0, VAR_1);
  }
}
