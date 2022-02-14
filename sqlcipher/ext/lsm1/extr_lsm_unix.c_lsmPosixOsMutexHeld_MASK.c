
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lsm_mutex ;
struct TYPE_2__ {int bHeld; } ;
typedef TYPE_1__ NoopMutex ;



__attribute__((used)) static int FUNC_0(lsm_mutex *VAR_0){
  NoopMutex *VAR_1 = (NoopMutex *)VAR_0;
  return VAR_1 ? VAR_1->bHeld : 1;
}
