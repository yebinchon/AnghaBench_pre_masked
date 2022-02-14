
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_9__ {scalar_t__ idx; } ;
struct TYPE_8__ {TYPE_6__* cap; int * L; } ;
typedef TYPE_1__ CapState ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9 (CapState *VAR_1) {
  lua_State *VAR_2 = VAR_1->L;
  int VAR_3 = 0;
  FUNC_3(VAR_2);
  if (FUNC_2(VAR_1->cap++))
    return 1;
  while (!FUNC_1(VAR_1->cap)) {
    if (FUNC_0(VAR_1->cap) == VAR_0 && VAR_1->cap->idx != 0) {
      FUNC_7(VAR_1);
      FUNC_8(VAR_1);
      FUNC_5(VAR_2, -3);
    }
    else {
      int VAR_4;
      int VAR_5 = FUNC_6(VAR_1);
      for (VAR_4 = VAR_5; VAR_4 > 0; VAR_4--)
        FUNC_4(VAR_2, -(VAR_4 + 1), VAR_3 + VAR_4);
      VAR_3 += VAR_5;
    }
  }
  VAR_1->cap++;
  return 1;
}
