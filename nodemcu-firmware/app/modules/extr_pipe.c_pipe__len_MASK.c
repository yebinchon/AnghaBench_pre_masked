
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {scalar_t__ start; scalar_t__ end; } ;
typedef TYPE_1__ buffer_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_1) {
  if (FUNC_3(VAR_1, 1) == VAR_0) {
    FUNC_2(VAR_1, FUNC_1(VAR_1, 1));
  } else {
    buffer_t *VAR_2 = FUNC_0(VAR_1, 1);
    FUNC_2(VAR_1, VAR_2->end - VAR_2->start);
  }
  return 1;
}
