
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int nlevels; int current_str_ref; int null_ref; TYPE_1__* stack; } ;
struct TYPE_3__ {int lua_key_ref; int lua_object_ref; } ;
typedef TYPE_2__ ENC_DATA ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(lua_State *VAR_1) {
  ENC_DATA *VAR_2 = (ENC_DATA *)FUNC_1(VAR_1, 1, "sjson.encoder");

  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_2->nlevels; VAR_3++) {
    FUNC_2(VAR_1, VAR_0, VAR_2->stack[VAR_3].lua_object_ref);
    FUNC_2(VAR_1, VAR_0, VAR_2->stack[VAR_3].lua_key_ref);
  }

  FUNC_2(VAR_1, VAR_0, VAR_2->null_ref);
  FUNC_2(VAR_1, VAR_0, VAR_2->current_str_ref);

  FUNC_0("Destructor called\n");

  return 0;
}
