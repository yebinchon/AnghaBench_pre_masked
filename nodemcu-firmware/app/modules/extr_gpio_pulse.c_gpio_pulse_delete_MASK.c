
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cb_ref; } ;
typedef TYPE_1__ pulse_t ;
typedef int lua_State ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(lua_State *VAR_2) {
  pulse_t *VAR_3 = FUNC_0(VAR_2, 1, "gpio.pulse");

  if (VAR_3 == VAR_1) {
    return 0;
  }

  FUNC_1(VAR_2, VAR_0, VAR_3->cb_ref);
  return 0;
}
