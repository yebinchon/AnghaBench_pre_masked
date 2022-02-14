
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* xUnlink ) (TYPE_1__*,char const*) ;} ;
typedef TYPE_1__ lsm_env ;


 int FUNC_0 (TYPE_1__*,char const*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(lsm_env *VAR_0, const char *VAR_1){
  lsm_env *VAR_2 = FUNC_1();
  FUNC_2(VAR_0);
  return VAR_2->xUnlink(VAR_2, VAR_1);
}
