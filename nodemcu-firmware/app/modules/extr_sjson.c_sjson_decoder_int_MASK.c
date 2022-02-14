
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int lua_State ;
typedef TYPE_2__* jsonsl_t ;
struct TYPE_9__ {TYPE_2__* jsn; void* pos_ref; void* metatable; void* null_ref; void* result_ref; int min_available; int min_needed; scalar_t__ buffer_len; int * L; int * error; scalar_t__ complete; void* buffer_ref; void* hkey_ref; } ;
struct TYPE_8__ {int levels_max; int max_callback_level; TYPE_3__* data; int error_callback; int action_callback_POP; int action_callback_PUSH; int * action_callback; int pos; TYPE_1__* stack; } ;
struct TYPE_7__ {void* lua_object_ref; } ;
typedef TYPE_3__ JSN_DATA ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int *,char*) ;
 void* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,void*) ;
 int FUNC_6 (int *,int,char*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int) ;
 void* FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 scalar_t__ FUNC_15 (int *,int) ;

__attribute__((used)) static int FUNC_16(lua_State *VAR_9, int VAR_10) {
  int VAR_11 = VAR_0;

  if (FUNC_15(VAR_9, VAR_10) == VAR_5) {
    FUNC_6(VAR_9, VAR_10, "depth");
    VAR_11 = FUNC_14(VAR_9, VAR_10);
    if (VAR_11 == 0) {
      VAR_11 = VAR_0;
    }
    if (VAR_11 < 4) {
      VAR_11 = 4;
    }
    if (VAR_11 > 1000) {
      VAR_11 = 1000;
    }
    FUNC_9(VAR_9, 1);
  }

  JSN_DATA *VAR_12 = (JSN_DATA *) FUNC_8(VAR_9, sizeof(JSN_DATA) + FUNC_1(VAR_11));


  FUNC_3(VAR_9, "sjson.decoder");
  FUNC_13(VAR_9, -2);

  jsonsl_t VAR_13 = FUNC_2((jsonsl_t) (VAR_12 + 1), VAR_11);
  int VAR_14;

  for (VAR_14 = 0; VAR_14 < VAR_13->levels_max; VAR_14++) {
    VAR_13->stack[VAR_14].lua_object_ref = VAR_1;
  }
  VAR_12->jsn = VAR_13;
  VAR_12->result_ref = VAR_1;

  VAR_12->null_ref = VAR_2;
  VAR_12->metatable = VAR_1;
  VAR_12->hkey_ref = VAR_1;
  VAR_12->pos_ref = VAR_1;
  VAR_12->buffer_ref = VAR_1;
  VAR_12->complete = 0;
  VAR_12->error = ((void*)0);
  VAR_12->L = VAR_9;
  VAR_12->buffer_len = 0;

  VAR_12->min_needed = VAR_12->min_available = VAR_13->pos;

  FUNC_10(VAR_9, 0);
  VAR_12->null_ref = FUNC_12(VAR_9, 1);


  FUNC_7(VAR_9);
  VAR_12->result_ref = FUNC_4(VAR_9, VAR_3);

  if (FUNC_15(VAR_9, VAR_10) == VAR_5) {
    FUNC_5(VAR_9, VAR_3, VAR_12->null_ref);
    VAR_12->null_ref = VAR_1;
    FUNC_6(VAR_9, VAR_10, "null");
    VAR_12->null_ref = FUNC_12(VAR_9, 1);

    FUNC_6(VAR_9, VAR_10, "metatable");
    FUNC_11(VAR_9, -1);
    VAR_12->metatable = FUNC_12(VAR_9, 1);

    if (FUNC_15(VAR_9, -1) != VAR_4) {
      FUNC_6(VAR_9, -1, "checkpath");
      if (FUNC_15(VAR_9, -1) != VAR_4) {
        FUNC_7(VAR_9);
        VAR_12->pos_ref = FUNC_12(VAR_9, 1);
      }
      FUNC_9(VAR_9, 1);
    }
    FUNC_9(VAR_9, 1);
  }

  FUNC_0(VAR_12->jsn);

  VAR_13->action_callback = ((void*)0);
  VAR_13->action_callback_PUSH = VAR_7;
  VAR_13->action_callback_POP = VAR_6;
  VAR_13->error_callback = VAR_8;
  VAR_13->data = VAR_12;
  VAR_13->max_callback_level = VAR_11;

  return 1;
}
