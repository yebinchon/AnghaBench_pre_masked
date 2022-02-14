
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lsm_env ;
struct TYPE_3__ {scalar_t__ pData; int nAlloc; int * pEnv; } ;
typedef TYPE_1__ LsmBlob ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(lsm_env *VAR_2, LsmBlob *VAR_3, int VAR_4){
  FUNC_0( VAR_3->pEnv==VAR_2 || (VAR_3->pEnv==0 && VAR_3->pData==0) );
  if( VAR_3->nAlloc<VAR_4 ){
    VAR_3->pData = FUNC_1(VAR_2, VAR_3->pData, VAR_4);
    if( !VAR_3->pData ) return VAR_0;
    VAR_3->nAlloc = VAR_4;
    VAR_3->pEnv = VAR_2;
  }
  return VAR_1;
}
