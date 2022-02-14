
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int callstatus; int previous; } ;
typedef TYPE_1__ CallInfo ;


 int VAR_0 ;
 int VAR_1 ;
 char const* FUNC_0 (int *,int ,char const**) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static const char *FUNC_2 (lua_State *VAR_2, CallInfo *VAR_3, const char **VAR_4) {
  if (VAR_3 == ((void*)0))
    return ((void*)0);
  else if (VAR_3->callstatus & VAR_0) {
    *VAR_4 = "__gc";
    return "metamethod";
  }

  else if (!(VAR_3->callstatus & VAR_1) && FUNC_1(VAR_3->previous))
    return FUNC_0(VAR_2, VAR_3->previous, VAR_4);
  else return ((void*)0);
}
