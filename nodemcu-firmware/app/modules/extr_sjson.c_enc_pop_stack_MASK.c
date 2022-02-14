
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {size_t level; TYPE_1__* stack; } ;
struct TYPE_4__ {int lua_key_ref; int lua_object_ref; } ;
typedef TYPE_1__ ENC_DATA_STATE ;
typedef TYPE_2__ ENC_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(lua_State *VAR_2, ENC_DATA *VAR_3) {
  if (VAR_3->level < 0) {
    FUNC_0(VAR_2, "encoder stack underflow");
  }
  ENC_DATA_STATE *VAR_4 = &VAR_3->stack[VAR_3->level];

  FUNC_1(VAR_2, VAR_4->lua_object_ref);
  VAR_4->lua_object_ref = VAR_0;
  FUNC_1(VAR_2, VAR_4->lua_key_ref);
  VAR_4->lua_key_ref = VAR_1;
  VAR_3->level--;
}
