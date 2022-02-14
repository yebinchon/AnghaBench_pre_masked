
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_7__ {int idx; } ;
struct TYPE_6__ {TYPE_4__* cap; int * L; } ;
typedef TYPE_1__ CapState ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_9 (CapState *VAR_0) {
  int VAR_1;
  lua_State *VAR_2 = VAR_0->L;
  int VAR_3 = VAR_0->cap->idx;
  if (FUNC_1(VAR_0->cap++) ||
      FUNC_0(VAR_0->cap) ||
      (VAR_1 = FUNC_7(VAR_0)) == 0)
    return FUNC_2(VAR_2, "no initial value for fold capture");
  if (VAR_1 > 1)
    FUNC_5(VAR_2, VAR_1 - 1);
  while (!FUNC_0(VAR_0->cap)) {
    FUNC_6(VAR_2, FUNC_8(VAR_0, VAR_3));
    FUNC_4(VAR_2, -2);
    VAR_1 = FUNC_7(VAR_0);
    FUNC_3(VAR_2, VAR_1 + 1, 1);
  }
  VAR_0->cap++;
  return 1;
}
