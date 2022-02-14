
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {scalar_t__ lua_err_cb_ref; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,char*,int,char const*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_6(int VAR_3, const char *VAR_4, int VAR_5)
{
  FUNC_0("enduser_setup_error");

  lua_State *VAR_6 = FUNC_2();
  if (VAR_2 != ((void*)0) && VAR_2->lua_err_cb_ref != VAR_0)
  {
    FUNC_5 (VAR_6, VAR_1, VAR_2->lua_err_cb_ref);
    FUNC_4(VAR_6, VAR_5);
    FUNC_3(VAR_6, "%d: \t%s", VAR_3, VAR_4);
    FUNC_1 (VAR_6, 2, 0);
  }
}
