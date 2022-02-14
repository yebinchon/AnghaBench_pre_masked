
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct jsonsl_state_st {int level; int type; void* lua_object_ref; int pos_begin; int used_count; } ;
typedef TYPE_1__* jsonsl_t ;
typedef int jsonsl_action_t ;
struct TYPE_7__ {void* hkey_ref; void* pos_ref; void* metatable; int min_needed; int L; } ;
struct TYPE_6__ {TYPE_2__* data; } ;
typedef TYPE_2__ JSN_DATA ;


 int FUNC_0 (char*,...) ;





 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,struct jsonsl_state_st*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ,int,char*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int ,void*) ;
 void* FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ,void*) ;

__attribute__((used)) static void
FUNC_18(jsonsl_t VAR_3,
                   jsonsl_action_t VAR_4,
                   struct jsonsl_state_st *VAR_5,
                   const char *VAR_6)
{
  JSN_DATA *VAR_7 = VAR_3->data;

  FUNC_0("L%d: new action %d @ %d state->type %s\n", VAR_5->level, VAR_4, VAR_5->pos_begin, FUNC_5(VAR_5->type));
  FUNC_0("buf: '%s' ('%.10s')\n", VAR_6, FUNC_4(VAR_7, VAR_5));

  VAR_5->lua_object_ref = VAR_0;

  switch(VAR_5->type) {
    case 129:
    case 128:
    case 132:
      break;

    case 131:
    case 130:
      FUNC_1(VAR_7);
      VAR_5->lua_object_ref = FUNC_13(VAR_7->L, 1);
      VAR_5->used_count = 0;

      FUNC_12(VAR_7->L, VAR_1, FUNC_2());
      if (VAR_7->hkey_ref == VAR_0) {

        FUNC_10(VAR_7->L, FUNC_3());
        FUNC_0("Adding array element\n");
      } else {

        FUNC_12(VAR_7->L, VAR_1, VAR_7->hkey_ref);
        FUNC_17(VAR_7->L, VAR_7->hkey_ref);
        VAR_7->hkey_ref = VAR_0;
        FUNC_0("Adding hash element\n");
      }
      if (VAR_7->pos_ref != VAR_0 && VAR_5->level > 1) {
        FUNC_12(VAR_7->L, VAR_1, VAR_7->pos_ref);
        FUNC_10(VAR_7->L, VAR_5->level - 1);
        FUNC_11(VAR_7->L, -3);
        FUNC_14(VAR_7->L, -3);
        FUNC_9(VAR_7->L, 1);
      }




      int VAR_8 = 1;

      if (VAR_7->pos_ref != VAR_0) {
        FUNC_12(VAR_7->L, VAR_1, VAR_7->metatable);
        FUNC_8(VAR_7->L, -1, "checkpath");
        if (FUNC_16(VAR_7->L, -1) != VAR_2) {

          FUNC_12(VAR_7->L, VAR_1, VAR_5->lua_object_ref);
          FUNC_12(VAR_7->L, VAR_1, VAR_7->pos_ref);
          FUNC_7(VAR_7->L, 2, 1);
          VAR_8 = FUNC_15(VAR_7->L, -1);
        }
        FUNC_9(VAR_7->L, 2);
      }

      if (VAR_8) {
        FUNC_12(VAR_7->L, VAR_1, VAR_5->lua_object_ref);
        FUNC_14(VAR_7->L, -3);
        FUNC_9(VAR_7->L, 1);
      } else {
        FUNC_9(VAR_7->L, 2);
      }

      break;

    default:
        FUNC_0("Unhandled type %c\n", VAR_5->type);
        FUNC_6(VAR_7->L, "Unhandled type");
        break;
    }

    VAR_7->min_needed = VAR_5->pos_begin;
}
