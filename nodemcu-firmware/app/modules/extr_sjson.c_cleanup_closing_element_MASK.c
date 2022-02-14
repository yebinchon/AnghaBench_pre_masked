
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct jsonsl_state_st {int level; int type; int special_flags; void* lua_object_ref; scalar_t__ pos_begin; scalar_t__ pos_cur; } ;
typedef TYPE_1__* jsonsl_t ;
typedef int jsonsl_action_t ;
struct TYPE_8__ {void* hkey_ref; void* null_ref; void* pos_ref; int complete; int L; } ;
struct TYPE_7__ {scalar_t__ data; } ;
typedef TYPE_2__ JSN_DATA ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 void* VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,struct jsonsl_state_st*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int ,void*) ;
 void* FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,void*) ;
 int FUNC_15 (TYPE_2__*,struct jsonsl_state_st*) ;
 int FUNC_16 (TYPE_2__*,struct jsonsl_state_st*) ;

__attribute__((used)) static void
FUNC_17(jsonsl_t VAR_6,
                        jsonsl_action_t VAR_7,
                        struct jsonsl_state_st *VAR_8,
                        const char *VAR_9)
{
  JSN_DATA *VAR_10 = (JSN_DATA *) VAR_6->data;
  FUNC_0( "L%d: cc action %d state->type %s\n", VAR_8->level, VAR_7, FUNC_4(VAR_8->type));
  FUNC_0( "buf (%d - %d): '%.*s'\n", VAR_8->pos_begin, VAR_8->pos_cur, VAR_8->pos_cur - VAR_8->pos_begin, FUNC_3(VAR_10, VAR_8));
  FUNC_0( "at: '%s'\n", VAR_9);

 switch (VAR_8->type) {
   case 132:
      FUNC_16(VAR_10, VAR_8);
      VAR_10->hkey_ref = FUNC_11(VAR_10->L, 1);
      break;

   case 128:
      FUNC_10(VAR_10->L, VAR_5, FUNC_1());
      if (VAR_10->hkey_ref == VAR_4) {

        FUNC_8(VAR_10->L, FUNC_2());
      } else {

        FUNC_10(VAR_10->L, VAR_5, VAR_10->hkey_ref);
        FUNC_14(VAR_10->L, VAR_10->hkey_ref);
        VAR_10->hkey_ref = VAR_4;
      }
      FUNC_16(VAR_10, VAR_8);
      FUNC_13(VAR_10->L, -3);
      FUNC_5(VAR_10->L, 1);
      break;

   case 129:
      FUNC_0("Special flags = 0x%x\n", VAR_8->special_flags);


      if (VAR_8->special_flags & (VAR_3|VAR_0|VAR_2|VAR_1)) {
        if (VAR_8->special_flags & VAR_3) {
          FUNC_6(VAR_10->L, 1);
        } else if (VAR_8->special_flags & VAR_0) {
          FUNC_6(VAR_10->L, 0);
        } else if (VAR_8->special_flags & VAR_1) {
          FUNC_0("Outputting null\n");
          FUNC_10(VAR_10->L, VAR_5, VAR_10->null_ref);
        } else if (VAR_8->special_flags & VAR_2) {
          FUNC_15(VAR_10, VAR_8);
        }

        FUNC_10(VAR_10->L, VAR_5, FUNC_1());
        if (VAR_10->hkey_ref == VAR_4) {

          FUNC_8(VAR_10->L, FUNC_2());
        } else {

          FUNC_10(VAR_10->L, VAR_5, VAR_10->hkey_ref);
          FUNC_14(VAR_10->L, VAR_10->hkey_ref);
          VAR_10->hkey_ref = VAR_4;
        }
        FUNC_9(VAR_10->L, -3);
        FUNC_12(VAR_10->L, -4);
        FUNC_13(VAR_10->L, -3);
        FUNC_5(VAR_10->L, 1);
      }
      break;
   case 130:
   case 131:
      FUNC_14(VAR_10->L, VAR_8->lua_object_ref);
      VAR_8->lua_object_ref = VAR_4;
      if (VAR_10->pos_ref != VAR_4) {
        FUNC_10(VAR_10->L, VAR_5, VAR_10->pos_ref);
        FUNC_8(VAR_10->L, VAR_8->level);
        FUNC_7(VAR_10->L);
        FUNC_13(VAR_10->L, -3);
        FUNC_5(VAR_10->L, 1);
      }
      if (VAR_8->level == 1) {
        VAR_10->complete = 1;
      }
      break;
 }
}
