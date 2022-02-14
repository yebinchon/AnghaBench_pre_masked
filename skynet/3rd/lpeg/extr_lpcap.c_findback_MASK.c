
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_13__ {int ocap; int * L; } ;
struct TYPE_12__ {int idx; } ;
typedef TYPE_1__ Capture ;
typedef TYPE_2__ CapState ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static Capture *FUNC_9 (CapState *VAR_1, Capture *VAR_2) {
  lua_State *VAR_3 = VAR_1->L;
  while (VAR_2-- > VAR_1->ocap) {
    if (FUNC_3(VAR_2))
      VAR_2 = FUNC_1(VAR_2);
    else if (!FUNC_4(VAR_2))
      continue;
    if (FUNC_0(VAR_2) == VAR_0) {
      FUNC_2(VAR_1, VAR_2->idx);
      if (FUNC_5(VAR_3, -2, -1)) {
        FUNC_7(VAR_3, 2);
        return VAR_2;
      }
      else FUNC_7(VAR_3, 1);
    }
  }
  FUNC_6(VAR_3, "back reference '%s' not found", FUNC_8(VAR_3, -1));
  return ((void*)0);
}
