
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_12__ {int lvl; } ;
typedef TYPE_1__ luaL_Buffer ;
struct TYPE_14__ {size_t level; scalar_t__ offset; void* current_str_ref; TYPE_2__* stack; } ;
struct TYPE_13__ {scalar_t__ size; int offset; int lua_object_ref; int lua_key_ref; } ;
typedef TYPE_2__ ENC_DATA_STATE ;
typedef TYPE_3__ ENC_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_3__*,int) ;
 int FUNC_2 (int *,TYPE_3__*,int,char*,char*) ;
 int FUNC_3 (TYPE_1__*,char) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int,int) ;
 void* FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 scalar_t__ FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(lua_State *VAR_2, ENC_DATA *VAR_3) {
  if (VAR_3->level < 0) {
    return;
  }

  luaL_Buffer VAR_4;
  FUNC_5(VAR_2, &VAR_4);


  while (VAR_3->level >= 0 && !VAR_4.lvl) {
    ENC_DATA_STATE *VAR_5 = &VAR_3->stack[VAR_3->level];

    int VAR_6 = 0;

    if (VAR_5->size >= 0) {
      if (VAR_5->offset == 0) {

        FUNC_3(&VAR_4, '[');
      }
      if (VAR_5->offset == VAR_5->size << 1) {
        FUNC_3(&VAR_4, ']');
        VAR_6 = 1;
      } else if ((VAR_5->offset & 1) == 0) {
        if (VAR_5->offset > 0) {
          FUNC_3(&VAR_4, ',');
        }
      } else {

        FUNC_10(VAR_2, VAR_1, VAR_5->lua_object_ref);
        FUNC_10(VAR_2, -1, (VAR_5->offset >> 1) + 1);
        if (FUNC_15(VAR_2)) {
          FUNC_1(VAR_2, VAR_3, -1);
          FUNC_8(VAR_2, 2);
          VAR_5->offset++;
          continue;
        }
        FUNC_2(VAR_2, VAR_3, -1, "", "");
        FUNC_12(VAR_2, -2);
        FUNC_12(VAR_2, -2);
        FUNC_4(&VAR_4);
      }

      VAR_5->offset++;
    } else {
      FUNC_10(VAR_2, VAR_1, VAR_5->lua_object_ref);

      FUNC_10(VAR_2, VAR_1, VAR_5->lua_key_ref);


      if (FUNC_7(VAR_2, -2)) {

        if (VAR_5->offset & 1) {
          FUNC_14(VAR_2, VAR_5->lua_key_ref);
          VAR_5->lua_key_ref = VAR_0;

          FUNC_9(VAR_2, -2);
          VAR_5->lua_key_ref = FUNC_11(VAR_2, 1);
        }

        if ((VAR_5->offset & 1) == 0) {

          FUNC_9(VAR_2, -2);


          FUNC_13(VAR_2, -1);
          FUNC_2(VAR_2, VAR_3, -1, VAR_5->offset ? "," : "{", ":");
          FUNC_12(VAR_2, -2);
          FUNC_12(VAR_2, -2);
          FUNC_12(VAR_2, -2);
          FUNC_12(VAR_2, -2);
        } else {
          if (FUNC_15(VAR_2)) {
            FUNC_1(VAR_2, VAR_3, -1);
            FUNC_8(VAR_2, 3);
            VAR_5->offset++;
            continue;
          }
          FUNC_2(VAR_2, VAR_3, -1, "", "");
          FUNC_12(VAR_2, -2);
          FUNC_12(VAR_2, -2);
          FUNC_12(VAR_2, -2);
        }
        FUNC_4(&VAR_4);
      } else {
        FUNC_8(VAR_2, 1);

        FUNC_3(&VAR_4, '}');
        VAR_6 = 1;
      }

      VAR_5->offset++;
    }

    if (VAR_6) {
      FUNC_0(VAR_2, VAR_3);
    }
  }
  FUNC_6(&VAR_4);
  VAR_3->current_str_ref = FUNC_11(VAR_2, 1);
  VAR_3->offset = 0;
}
