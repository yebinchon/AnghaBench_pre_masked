
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* xFullpath ) (TYPE_1__*,char const*,char*,int*) ;} ;
typedef TYPE_1__ lsm_env ;


 int FUNC_0 (TYPE_1__*,char const*,char*,int*) ;
 TYPE_1__* FUNC_1 () ;

__attribute__((used)) static int FUNC_2(
  lsm_env *VAR_0,
  const char *VAR_1,
  char *VAR_2,
  int *VAR_3
){
  lsm_env *VAR_4 = FUNC_1();
  return VAR_4->xFullpath(VAR_4, VAR_1, VAR_2, VAR_3);
}
