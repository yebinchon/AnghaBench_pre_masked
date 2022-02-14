
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
 int FUNC_0 (int *,int,int,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 TYPE_1__* FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3 (lua_State *VAR_2) {
  int VAR_3 = (int)FUNC_1(VAR_2, 1);
  TTree *VAR_4 = FUNC_2(VAR_2, VAR_0);
  VAR_4->key = VAR_3;
  FUNC_0(VAR_2, 0 < VAR_3 && VAR_3 <= VAR_1, 1, "invalid argument index");
  return 1;
}
