
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ expected_end_time; scalar_t__ active_pos; scalar_t__ steps; scalar_t__ entry_count; } ;
typedef TYPE_1__ pulse_t ;
typedef int lua_State ;
typedef int int32_t ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(lua_State *VAR_0, pulse_t *VAR_1) {
  uint32_t VAR_2;
  uint32_t VAR_3;
  uint32_t VAR_4;
  uint32_t VAR_5;
  do {
    VAR_2 = 0x7FFFFFFF & FUNC_2();
    VAR_3 = VAR_1->expected_end_time;
    VAR_4 = VAR_1->active_pos;
    VAR_5 = VAR_1->steps;
  } while (VAR_3 != VAR_1->expected_end_time ||
           VAR_4 != VAR_1->active_pos ||
           VAR_5 != VAR_1->steps);

  if (VAR_4 >= VAR_1->entry_count) {
    FUNC_1(VAR_0);
  } else {
    FUNC_0(VAR_0, VAR_4 + 1);
  }
  FUNC_0(VAR_0, VAR_5);

  int32_t VAR_6 = (VAR_3 - VAR_2) & 0x7fffffff;
  FUNC_0(VAR_0, (VAR_6 << 1) >> 1);
  FUNC_0(VAR_0, VAR_2);
  return 4;
}
