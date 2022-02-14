
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int key; } ;
typedef TYPE_1__ TTree ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int,int,char*) ;
 int FUNC_2 (int *,int) ;
 TYPE_1__* FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_1) {
  TTree *VAR_2 = FUNC_3(VAR_1, VAR_0);
  FUNC_1(VAR_1, !FUNC_2(VAR_1, 1), 1, "non-nil value expected");
  VAR_2->key = FUNC_0(VAR_1, 0, 1);
  return 1;
}
