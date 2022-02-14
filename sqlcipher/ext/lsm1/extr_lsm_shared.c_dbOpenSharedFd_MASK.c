
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lsm_env ;
struct TYPE_3__ {int bReadonly; int pFile; int zName; } ;
typedef TYPE_1__ Database ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(lsm_env *VAR_2, Database *VAR_3, int VAR_4){
  int VAR_5;

  VAR_5 = FUNC_0(VAR_2, VAR_3->zName, 0, &VAR_3->pFile);
  if( VAR_5==VAR_0 && VAR_4 ){
    VAR_5 = FUNC_0(VAR_2, VAR_3->zName, VAR_1, &VAR_3->pFile);
    VAR_3->bReadonly = 1;
  }

  return VAR_5;
}
