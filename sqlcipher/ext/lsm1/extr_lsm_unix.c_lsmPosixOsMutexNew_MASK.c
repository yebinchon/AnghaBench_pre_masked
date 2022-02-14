
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lsm_mutex ;
typedef int lsm_env ;
struct TYPE_2__ {int * pEnv; } ;
typedef TYPE_1__ NoopMutex ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(lsm_env *VAR_2, lsm_mutex **VAR_3){
  NoopMutex *VAR_4;
  VAR_4 = (NoopMutex *)FUNC_0(VAR_2, sizeof(NoopMutex));
  if( VAR_4 ) VAR_4->pEnv = VAR_2;
  *VAR_3 = (lsm_mutex *)VAR_4;
  return (VAR_4 ? VAR_1 : VAR_0);
}
