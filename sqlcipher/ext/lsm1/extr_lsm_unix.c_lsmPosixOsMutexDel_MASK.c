
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lsm_mutex ;
struct TYPE_3__ {scalar_t__ bStatic; scalar_t__ pEnv; } ;
typedef TYPE_1__ NoopMutex ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(lsm_mutex *VAR_0) {
  NoopMutex *VAR_1 = (NoopMutex *)VAR_0;
  FUNC_0( VAR_1->bStatic==0 && VAR_1->pEnv );
  FUNC_1(VAR_1->pEnv, VAR_1);
}
