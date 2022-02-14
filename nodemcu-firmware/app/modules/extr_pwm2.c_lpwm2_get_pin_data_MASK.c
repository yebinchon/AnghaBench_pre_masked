
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8 ;
typedef int lua_State ;
struct TYPE_5__ {TYPE_1__* pin; } ;
struct TYPE_6__ {TYPE_2__ setupData; } ;
struct TYPE_4__ {int resolutionInterruptCounterMultiplier; int resolutionCPUTicks; int frequencyDivisor; int divisableFrequency; int pulseResolutions; int duty; } ;


 size_t const VAR_0 ;
 int FUNC_0 (int *,int,int,char*) ;
 size_t FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (size_t const) ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_1) {
  const uint8 VAR_2 = FUNC_1(VAR_1, 1);
  FUNC_0(VAR_1, VAR_2 > 0 && VAR_2 <= VAR_0, 1, "invalid pin number");
  FUNC_2(VAR_1, FUNC_4(VAR_2));
  FUNC_2(VAR_1, FUNC_3()->setupData.pin[VAR_2].duty);
  FUNC_2(VAR_1, FUNC_3()->setupData.pin[VAR_2].pulseResolutions);
  FUNC_2(VAR_1, FUNC_3()->setupData.pin[VAR_2].divisableFrequency);
  FUNC_2(VAR_1, FUNC_3()->setupData.pin[VAR_2].frequencyDivisor);
  FUNC_2(VAR_1, FUNC_3()->setupData.pin[VAR_2].resolutionCPUTicks);
  FUNC_2(VAR_1, FUNC_3()->setupData.pin[VAR_2].resolutionInterruptCounterMultiplier);
  return 7;
}
