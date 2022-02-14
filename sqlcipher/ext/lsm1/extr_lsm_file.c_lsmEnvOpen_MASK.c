
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lsm_file ;
struct TYPE_4__ {int (* xOpen ) (TYPE_1__*,char const*,int,int **) ;} ;
typedef TYPE_1__ lsm_env ;


 int FUNC_0 (TYPE_1__*,char const*,int,int **) ;

int FUNC_1(lsm_env *VAR_0, const char *VAR_1, int VAR_2, lsm_file **VAR_3){
  return VAR_0->xOpen(VAR_0, VAR_1, VAR_2, VAR_3);
}
