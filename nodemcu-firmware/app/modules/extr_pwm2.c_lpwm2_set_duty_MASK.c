
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {TYPE_1__* pin; } ;
struct TYPE_6__ {TYPE_2__ setupData; } ;
struct TYPE_4__ {int pulseResolutions; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int,int) ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_1) {
  int VAR_2 = 0;
  while (1) {
    int VAR_3 = FUNC_2(VAR_1, ++VAR_2, -1);
    if (VAR_3 == -1) {
      break;
    }
    FUNC_0(VAR_1, VAR_3 > 0 && VAR_3 <= VAR_0, VAR_2, "invalid pin number");

    int VAR_4 = FUNC_2(VAR_1, ++VAR_2, -1);
    FUNC_0(VAR_1, VAR_4 >= 0 && VAR_4 <= FUNC_3()->setupData.pin[VAR_3].pulseResolutions, VAR_2, "invalid duty");

    if (!FUNC_4(VAR_3)) {
      return FUNC_1(VAR_1, "pwm2 : pin=%d is not setup yet", VAR_3);
    }
    FUNC_5(VAR_3, VAR_4);
  }
  return 0;
}
