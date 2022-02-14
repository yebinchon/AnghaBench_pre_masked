
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int codesize; int * code; } ;
typedef TYPE_1__ Pattern ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,TYPE_1__*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_0) {
  Pattern *VAR_1 = FUNC_0(VAR_0, 1);
  FUNC_2(VAR_0, 1);
  if (VAR_1->code == ((void*)0))
    FUNC_1(VAR_0, VAR_1, 1);
  FUNC_3(VAR_1->code, VAR_1->codesize);
  return 0;
}
