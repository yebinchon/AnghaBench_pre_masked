
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
typedef scalar_t__ err_t ;
struct TYPE_3__ {scalar_t__ list_ref; int lookup_pos; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char const*,int ,int ,TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,char const*) ;
 char* FUNC_3 (int *,int,int*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_7 () ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static void FUNC_8 (lua_State *VAR_9) {



  if ((VAR_8->list_ref == VAR_2) || (VAR_8->list_ref == VAR_3)) {
    FUNC_7();
    return;
  }

  FUNC_6(VAR_9, VAR_4, VAR_8->list_ref);
  while (1) {
    int VAR_10;

    if (FUNC_4(VAR_9, -1) <= VAR_8->lookup_pos) {

      if (VAR_6 == 0) {


        FUNC_6(VAR_9, -1, 1);
        const char *VAR_11 = FUNC_3(VAR_9, -1, &VAR_10);
        FUNC_2(VAR_9, VAR_5, VAR_11);
        FUNC_5(VAR_9, 1);
      } else {
        FUNC_7();
      }
      break;
    }

    VAR_8->lookup_pos++;

    FUNC_6(VAR_9, -1, VAR_8->lookup_pos);

    const char *VAR_12 = FUNC_3(VAR_9, -1, &VAR_10);
    FUNC_5(VAR_9, 1);

    if (VAR_10>128 || VAR_12 == ((void*)0)) {
      FUNC_2(VAR_9, VAR_5, VAR_12);
      break;
    }
    err_t VAR_13 = FUNC_0(VAR_12, FUNC_1(), VAR_7, VAR_8);
    if (VAR_13 == VAR_1)
      break;
    else if (VAR_13 == VAR_0) {
      FUNC_2(VAR_9, VAR_5, VAR_12);
      break;
    }
    VAR_6++;
  }
  FUNC_5(VAR_9, 1);
}
