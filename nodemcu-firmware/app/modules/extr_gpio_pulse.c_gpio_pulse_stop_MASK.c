
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int entry_count; int cb_ref; int stop_pos; } ;
typedef TYPE_1__ pulse_t ;
typedef int lua_State ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (int *,int) ;
 TYPE_1__* FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(lua_State *VAR_6) {
  pulse_t *VAR_7 = FUNC_1(VAR_6, 1, "gpio.pulse");

  if (VAR_7 != VAR_5) {
    return 0;
  }

  int VAR_8 = 2;

  int32_t VAR_9 = -2;

  if (FUNC_7(VAR_6, VAR_8) == VAR_4) {
    VAR_9 = FUNC_0(VAR_6, 2);
    if (VAR_9 != -2) {
      if (VAR_9 < 1 || VAR_9 > VAR_7->entry_count) {
        return FUNC_2( VAR_6, "bad stop position: %d (valid range 1 - %d)", VAR_9, VAR_7->entry_count );
      }
      VAR_9 = VAR_9 - 1;
    }
    VAR_8++;
  }

  if (FUNC_7(VAR_6, VAR_8) == VAR_2 || FUNC_7(VAR_6, VAR_8) == VAR_3) {
    FUNC_6(VAR_6, VAR_8);
  } else {
    return FUNC_2( VAR_6, "missing callback" );
  }

  int VAR_10 = FUNC_3(VAR_6, VAR_1);
  int VAR_11 = VAR_7->cb_ref;

  VAR_7->cb_ref = VAR_0;
  VAR_7->stop_pos = -1;
  VAR_7->cb_ref = VAR_10;
  VAR_7->stop_pos = VAR_9;

  FUNC_4(VAR_6, VAR_1, VAR_11);

  FUNC_5(VAR_6, 1);
  return 1;
}
