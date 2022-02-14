
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int egcmode; int memlimit; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;

void FUNC_1(lua_State *VAR_0, int VAR_1, int VAR_2) {
   global_State *VAR_3 = FUNC_0(VAR_0);

   VAR_3->egcmode = VAR_1;
   VAR_3->memlimit = VAR_2;
}
