
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {int key; } ;
typedef int TTree ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int) ;
 TYPE_1__* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4 (lua_State *VAR_0, TTree *VAR_1, int VAR_2) {
  if (FUNC_3(VAR_1)->key == 0) {
    int VAR_3 = FUNC_1(VAR_0, -1) + 1;
    FUNC_0(VAR_0, VAR_2);
    FUNC_2(VAR_0, -2, VAR_3);
    FUNC_3(VAR_1)->key = VAR_3;
  }
}
