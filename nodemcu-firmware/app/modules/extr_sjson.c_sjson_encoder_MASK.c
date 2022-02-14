
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {int nlevels; int level; void* null_ref; TYPE_1__* stack; void* current_str_ref; } ;
struct TYPE_4__ {void* lua_key_ref; void* lua_object_ref; } ;
typedef TYPE_1__ ENC_DATA_STATE ;
typedef TYPE_2__ ENC_DATA ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,TYPE_2__*,int) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,void*) ;
 int FUNC_4 (int *,int,char*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 void* FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,int) ;

__attribute__((used)) static int FUNC_11(lua_State *VAR_5) {
  int VAR_6 = VAR_0;
  int VAR_7 = 1;


  FUNC_1(VAR_5, VAR_7++, VAR_4);

  if (FUNC_10(VAR_5, VAR_7) == VAR_4) {
    FUNC_4(VAR_5, VAR_7, "depth");
    VAR_6 = FUNC_9(VAR_5, VAR_7);
    if (VAR_6 == 0) {
      VAR_6 = VAR_0;
    }
    if (VAR_6 < 4) {
      VAR_6 = 4;
    }
    if (VAR_6 > 1000) {
      VAR_6 = 1000;
    }
    FUNC_6(VAR_5, 1);
  }

  ENC_DATA *VAR_8 = (ENC_DATA *) FUNC_5(VAR_5, sizeof(ENC_DATA) + VAR_6 * sizeof(ENC_DATA_STATE));


  FUNC_2(VAR_5, "sjson.encoder");
  FUNC_8(VAR_5, -2);

  VAR_8->nlevels = VAR_6;
  VAR_8->level = -1;
  VAR_8->stack = (ENC_DATA_STATE *) (VAR_8 + 1);
  VAR_8->current_str_ref = VAR_1;
  int VAR_9;
  for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
    VAR_8->stack[VAR_9].lua_object_ref = VAR_1;
    VAR_8->stack[VAR_9].lua_key_ref = VAR_2;
  }
  FUNC_0(VAR_5, VAR_8, 1);

  VAR_8->null_ref = VAR_2;

  if (FUNC_10(VAR_5, VAR_7) == VAR_4) {
    FUNC_3(VAR_5, VAR_3, VAR_8->null_ref);
    VAR_8->null_ref = VAR_1;
    FUNC_4(VAR_5, VAR_7, "null");
    VAR_8->null_ref = FUNC_7(VAR_5, 1);
  }

  return 1;
}
