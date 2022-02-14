
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
typedef TYPE_2__* jsonsl_t ;
struct TYPE_7__ {void* buffer_ref; void* pos_ref; void* null_ref; void* hkey_ref; void* metatable; TYPE_2__* jsn; } ;
struct TYPE_6__ {int levels_max; TYPE_1__* stack; } ;
struct TYPE_5__ {void* lua_object_ref; } ;
typedef TYPE_3__ JSN_DATA ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,void*) ;

__attribute__((used)) static void FUNC_1(lua_State *VAR_2, JSN_DATA *VAR_3) {
  jsonsl_t VAR_4 = VAR_3->jsn;
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_4->levels_max; VAR_5++) {
    FUNC_0(VAR_2, VAR_1, VAR_4->stack[VAR_5].lua_object_ref);
    VAR_4->stack[VAR_5].lua_object_ref = VAR_0;
  }

  FUNC_0(VAR_2, VAR_1, VAR_3->metatable);
  VAR_3->metatable = VAR_0;
  FUNC_0(VAR_2, VAR_1, VAR_3->hkey_ref);
  VAR_3->hkey_ref = VAR_0;
  FUNC_0(VAR_2, VAR_1, VAR_3->null_ref);
  VAR_3->null_ref = VAR_0;
  FUNC_0(VAR_2, VAR_1, VAR_3->pos_ref);
  VAR_3->pos_ref = VAR_0;
  FUNC_0(VAR_2, VAR_1, VAR_3->buffer_ref);
  VAR_3->buffer_ref = VAR_0;
}
