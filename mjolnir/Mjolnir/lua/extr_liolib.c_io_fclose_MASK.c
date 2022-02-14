
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int f; } ;
typedef TYPE_1__ LStream ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int *) ;
 TYPE_1__* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3 (lua_State *VAR_0) {
  LStream *VAR_1 = FUNC_2(VAR_0);
  int VAR_2 = FUNC_0(VAR_1->f);
  return FUNC_1(VAR_0, (VAR_2 == 0), ((void*)0));
}
