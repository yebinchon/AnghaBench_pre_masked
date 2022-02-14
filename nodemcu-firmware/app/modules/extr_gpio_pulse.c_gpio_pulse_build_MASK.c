
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t entry_count; TYPE_2__* entry; } ;
typedef TYPE_1__ pulse_t ;
struct TYPE_6__ {int delay_min; int delay_max; } ;
typedef TYPE_2__ pulse_entry_t ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (int *,char*) ;
 size_t FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *,int,size_t) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_1__*,int ,size_t) ;

__attribute__((used)) static int FUNC_9(lua_State *VAR_1) {

  FUNC_1(VAR_1, 1, VAR_0);


  size_t VAR_2 = FUNC_4(VAR_1, 1);

  if (VAR_2 > 100) {
    return FUNC_2(VAR_1, "table is too large: %d entries is more than 100", VAR_2);
  }

  size_t VAR_3 = sizeof(pulse_t) + VAR_2 * sizeof(pulse_entry_t);
  pulse_t *VAR_4 = (pulse_t *) FUNC_5(VAR_1, VAR_3);
  FUNC_8(VAR_4, 0, VAR_3);


  FUNC_3(VAR_1, "gpio.pulse");
  FUNC_7(VAR_1, -2);

  VAR_4->entry = (pulse_entry_t *) (VAR_4 + 1);
  VAR_4->entry_count = VAR_2;

  size_t VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
    pulse_entry_t *VAR_6 = VAR_4->entry + VAR_5;

    VAR_6->delay_min = -1;
    VAR_6->delay_max = -1;

    FUNC_6(VAR_1, 1, VAR_5 + 1);

    FUNC_0(VAR_1, VAR_6);
  }

  return 1;
}
