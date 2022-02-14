
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nMap; int pMap; int fdDb; int pEnv; } ;
typedef TYPE_1__ FileSystem ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int *,int *) ;

int FUNC_1(FileSystem *VAR_1){
  int VAR_2 = VAR_0;
  if( VAR_1 ){
    VAR_2 = FUNC_0(VAR_1->pEnv, VAR_1->fdDb, -1, &VAR_1->pMap, &VAR_1->nMap);
  }
  return VAR_2;
}
