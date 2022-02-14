
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {scalar_t__ lua_dbg_cb_ref; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*,int,char const*) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_4(int VAR_3, const char *VAR_4)
{
  lua_State *VAR_5 = FUNC_1();
  if(VAR_2 != ((void*)0) && VAR_2->lua_dbg_cb_ref != VAR_0)
  {
    FUNC_3(VAR_5, VAR_1, VAR_2->lua_dbg_cb_ref);
    FUNC_2(VAR_5, "%d: \t%s", VAR_3, VAR_4);
    FUNC_0(VAR_5, 1, 0);
  }
}
