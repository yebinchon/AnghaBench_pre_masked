
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entry_count; int * entry; } ;
typedef TYPE_1__ pulse_t ;
typedef int pulse_entry_t ;
typedef int lua_State ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int) ;
 TYPE_1__* FUNC_4 (int *,int,char*) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_0) {
  pulse_t *VAR_1 = FUNC_4(VAR_0, 1, "gpio.pulse");
  int VAR_2 = FUNC_3(VAR_0, 2);

  if (VAR_2 < 1 || VAR_2 > VAR_1->entry_count) {
    return FUNC_5(VAR_0, "entry number must be in range 1 .. %d", VAR_1->entry_count);
  }

  pulse_entry_t *VAR_3 = VAR_1->entry + VAR_2 - 1;

  pulse_entry_t VAR_4 = *VAR_3;

  FUNC_6(VAR_0, 3);

  FUNC_2(VAR_0, &VAR_4);


  FUNC_0();
  *VAR_3 = VAR_4;
  FUNC_1();

  return 0;
}
