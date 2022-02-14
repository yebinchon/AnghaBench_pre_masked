
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int result_ref; int complete; } ;
typedef TYPE_1__ JSN_DATA ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(lua_State *VAR_1, JSN_DATA *VAR_2) {
  if (!VAR_2->complete) {
    FUNC_0(VAR_1, "decode not complete");
  }

  FUNC_1(VAR_1, VAR_0, VAR_2->result_ref);
  FUNC_1(VAR_1, -1, 1);
  FUNC_2(VAR_1, -2);

  return 1;
}
