
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int next_adjust; } ;
typedef TYPE_1__ pulse_t ;
typedef int lua_State ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int) ;
 TYPE_1__* FUNC_2 (int *,int,char*) ;

__attribute__((used)) static int FUNC_3(lua_State *VAR_1) {
  pulse_t *VAR_2 = FUNC_2(VAR_1, 1, "gpio.pulse");

  if (VAR_0 != VAR_2) {
    return 0;
  }

  int VAR_3 = FUNC_1(VAR_1, 2);

  VAR_2->next_adjust = VAR_3;

  int VAR_4 = FUNC_0(VAR_1, VAR_0);

  return VAR_4;
}
