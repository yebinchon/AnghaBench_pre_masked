
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lsm_env ;
struct TYPE_3__ {int pFile; scalar_t__ bMultiProc; } ;
typedef TYPE_1__ Database ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int) ;

__attribute__((used)) static int FUNC_1(lsm_env *VAR_1, Database *VAR_2, int VAR_3, int VAR_4){
  int VAR_5 = VAR_0;
  if( VAR_2->bMultiProc ){
    VAR_5 = FUNC_0(VAR_1, VAR_2->pFile, VAR_3, VAR_4);
  }
  return VAR_5;
}
