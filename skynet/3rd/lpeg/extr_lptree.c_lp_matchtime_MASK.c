
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int key; } ;
typedef TYPE_1__ TTree ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,int ) ;
 TYPE_1__* FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3 (lua_State *VAR_2) {
  TTree *VAR_3;
  FUNC_1(VAR_2, 2, VAR_0);
  VAR_3 = FUNC_2(VAR_2, VAR_1);
  VAR_3->key = FUNC_0(VAR_2, 1, 2);
  return 1;
}
