
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int currentline; scalar_t__ event; } ;
typedef TYPE_1__ lua_Debug ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const* const) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static void FUNC_10 (lua_State *VAR_3, lua_Debug *VAR_4) {
  static const char *const VAR_5[] =
    {"call", "return", "line", "count", "tail call"};
  FUNC_7(VAR_3, VAR_1, &VAR_0);
  FUNC_5(VAR_3);
  if (FUNC_6(VAR_3, -2) == VAR_2) {
    FUNC_4(VAR_3, VAR_5[(int)VAR_4->event]);
    if (VAR_4->currentline >= 0)
      FUNC_2(VAR_3, VAR_4->currentline);
    else FUNC_3(VAR_3);
    FUNC_0(VAR_3, 2, 1);
 int VAR_6 = FUNC_8(VAR_3, -1);
 FUNC_1(VAR_3,1);
 if (VAR_6) {
  FUNC_9(VAR_3, 0);
 }
  }
}
