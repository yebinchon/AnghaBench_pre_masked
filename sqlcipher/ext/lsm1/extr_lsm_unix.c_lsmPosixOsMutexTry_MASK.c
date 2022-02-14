
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lsm_mutex ;
struct TYPE_2__ {int bHeld; } ;
typedef TYPE_1__ NoopMutex ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(lsm_mutex *VAR_0){
  NoopMutex *VAR_1 = (NoopMutex *)VAR_0;
  FUNC_0( VAR_1->bHeld==0 );
  VAR_1->bHeld = 1;
  return 0;
}
