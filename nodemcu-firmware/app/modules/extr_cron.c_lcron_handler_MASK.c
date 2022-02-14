
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int cb_ref; } ;
typedef TYPE_1__ cronent_ud_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 TYPE_1__* FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_1) {
  cronent_ud_t *VAR_2 = FUNC_1(VAR_1, 1, "cron.entry");
  FUNC_0(VAR_1, 2);
  FUNC_4(VAR_1, 2);
  FUNC_3(VAR_1, VAR_0, VAR_2->cb_ref);
  VAR_2->cb_ref = FUNC_2(VAR_1, VAR_0);
  return 0;
}
