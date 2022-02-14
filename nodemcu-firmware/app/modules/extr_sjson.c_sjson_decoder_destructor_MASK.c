
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int result_ref; int * jsn; } ;
typedef TYPE_1__ JSN_DATA ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(lua_State *VAR_2) {
  JSN_DATA *VAR_3 = (JSN_DATA *)FUNC_1(VAR_2, 1, "sjson.decoder");

  FUNC_3(VAR_2, VAR_3);

  VAR_3->jsn = ((void*)0);

  FUNC_2(VAR_2, VAR_1, VAR_3->result_ref);
  VAR_3->result_ref = VAR_0;

  FUNC_0("Destructor called\n");

  return 0;
}
