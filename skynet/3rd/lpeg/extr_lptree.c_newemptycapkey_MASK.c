
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int key; } ;
typedef TYPE_1__ TTree ;


 int FUNC_0 (int *,int ,int) ;
 TYPE_1__* FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static TTree *FUNC_3 (lua_State *VAR_0, int VAR_1, int VAR_2) {
  TTree *VAR_3 = FUNC_1(FUNC_2(VAR_0, 2), VAR_1);
  VAR_3->key = FUNC_0(VAR_0, 0, VAR_2);
  return VAR_3;
}
