
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int interruptTimerTicks; int interruptTimerCPUTicks; int isStarted; } ;
struct TYPE_4__ {TYPE_1__ setupData; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 TYPE_2__* FUNC_2 () ;

__attribute__((used)) static int FUNC_3(lua_State *VAR_0) {
  FUNC_0(VAR_0, FUNC_2()->setupData.isStarted);
  FUNC_1(VAR_0, FUNC_2()->setupData.interruptTimerCPUTicks);
  FUNC_1(VAR_0, FUNC_2()->setupData.interruptTimerTicks);
  return 3;
}
