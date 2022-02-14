
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct jsonsl_state_st {scalar_t__ pos_begin; scalar_t__ pos_cur; } ;
struct TYPE_4__ {int L; } ;
typedef int LUA_NUMBER ;
typedef TYPE_1__ JSN_DATA ;


 int FUNC_0 (TYPE_1__*,struct jsonsl_state_st*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(JSN_DATA *VAR_0, struct jsonsl_state_st *VAR_1) {
  FUNC_2(VAR_0->L, FUNC_0(VAR_0, VAR_1), VAR_1->pos_cur - VAR_1->pos_begin);
  LUA_NUMBER VAR_2 = FUNC_4(VAR_0->L, -1);
  FUNC_1(VAR_0->L, 1);
  FUNC_3(VAR_0->L, VAR_2);
}
