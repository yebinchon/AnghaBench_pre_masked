
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ntp_err_t ;
typedef int lua_State ;
struct TYPE_2__ {scalar_t__ err_cb_ref; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 int FUNC_5 (char*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_6 (lua_State *VAR_4, ntp_err_t VAR_5, const char *VAR_6)
{
  FUNC_5("sntp: handle_error\n");
  if (VAR_3->err_cb_ref != VAR_0 && VAR_3->err_cb_ref != VAR_1)
  {
    FUNC_4 (VAR_4, VAR_2, VAR_3->err_cb_ref);
    FUNC_2 (VAR_4, VAR_5);
    FUNC_3 (VAR_4, VAR_6);
    FUNC_0 (VAR_4);
    FUNC_1 (VAR_4, 2, 0);
  }
  else
    FUNC_0 (VAR_4);
}
