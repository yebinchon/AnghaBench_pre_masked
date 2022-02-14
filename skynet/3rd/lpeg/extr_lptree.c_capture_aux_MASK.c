
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int cap; int key; } ;
typedef TYPE_1__ TTree ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 TYPE_1__* FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2 (lua_State *VAR_1, int VAR_2, int VAR_3) {
  TTree *VAR_4 = FUNC_1(VAR_1, VAR_0);
  VAR_4->cap = VAR_2;
  VAR_4->key = (VAR_3 == 0) ? 0 : FUNC_0(VAR_1, 1, VAR_3);
  return 1;
}
