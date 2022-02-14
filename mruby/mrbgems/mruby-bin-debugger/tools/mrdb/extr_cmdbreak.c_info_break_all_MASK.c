
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int dbg; } ;
typedef TYPE_1__ mrdb_state ;
typedef int mrb_state ;
typedef int mrb_debug_breakpoint ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(mrb_state *VAR_3, mrdb_state *VAR_4)
{
  int32_t VAR_5 = 0;
  int32_t VAR_6 = 0;
  int32_t VAR_7 = VAR_2;
  mrb_debug_breakpoint *VAR_8;

  VAR_5 = FUNC_1(VAR_3, VAR_4->dbg);
  if (VAR_5 < 0) {
    FUNC_4(VAR_5);
    return;
  }
  else if (VAR_5 == 0) {
    FUNC_6(VAR_0);
    return;
  }
  VAR_8 = (mrb_debug_breakpoint*)FUNC_3(VAR_3, VAR_5 * sizeof(mrb_debug_breakpoint));

  VAR_7 = FUNC_0(VAR_3, VAR_4->dbg, (uint32_t)VAR_5, VAR_8);
  if (VAR_7 < 0) {
    FUNC_4(VAR_7);
    return;
  }
  FUNC_6(VAR_1);
  for(VAR_6 = 0 ; VAR_6 < VAR_5 ; VAR_6++) {
    FUNC_5(&VAR_8[VAR_6]);
  }

  FUNC_2(VAR_3, VAR_8);
}
