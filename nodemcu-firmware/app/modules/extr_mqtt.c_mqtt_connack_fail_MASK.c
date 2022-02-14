
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {scalar_t__ cb_connect_fail_ref; scalar_t__ self_ref; } ;
typedef TYPE_1__ lmqtt_userdata ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(lmqtt_userdata * VAR_2, int VAR_3)
{
  if(VAR_2->cb_connect_fail_ref == VAR_0 || VAR_2->self_ref == VAR_0)
  {
    return;
  }

  lua_State *VAR_4 = FUNC_1();

  FUNC_3(VAR_4, VAR_1, VAR_2->cb_connect_fail_ref);
  FUNC_3(VAR_4, VAR_1, VAR_2->self_ref);
  FUNC_2(VAR_4, VAR_3);
  FUNC_0(VAR_4, 2, 0);
}
