
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lsm_env ;
struct TYPE_4__ {int nData; int pData; } ;
typedef TYPE_1__ LsmBlob ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void*,int) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(lsm_env *VAR_2, LsmBlob *VAR_3, void *VAR_4, int VAR_5){
  if( FUNC_1(VAR_2, VAR_3, VAR_5) ) return VAR_0;
  FUNC_0(VAR_3->pData, VAR_4, VAR_5);
  VAR_3->nData = VAR_5;
  return VAR_1;
}
