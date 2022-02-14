
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lsm_file ;
struct TYPE_3__ {int (* xTestLock ) (int *,int,int,int) ;} ;
typedef TYPE_1__ lsm_env ;


 int FUNC_0 (int *,int,int,int) ;

int FUNC_1(
  lsm_env *VAR_0,
  lsm_file *VAR_1,
  int VAR_2,
  int VAR_3,
  int VAR_4
){
  return VAR_0->xTestLock(VAR_1, VAR_2, VAR_3, VAR_4);
}
