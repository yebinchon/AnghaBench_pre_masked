
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lsm_file ;
struct TYPE_3__ {int (* xLock ) (int *,int,int) ;} ;
typedef TYPE_1__ lsm_env ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;

int FUNC_1(lsm_env *VAR_1, lsm_file *VAR_2, int VAR_3, int VAR_4){
  if( VAR_2==0 ) return VAR_0;
  return VAR_1->xLock(VAR_2, VAR_3, VAR_4);
}
