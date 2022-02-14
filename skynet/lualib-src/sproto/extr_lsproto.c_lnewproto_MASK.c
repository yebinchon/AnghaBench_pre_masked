
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sproto {int dummy; } ;
typedef int lua_State ;


 scalar_t__ FUNC_0 (int *,int,size_t*) ;
 int FUNC_1 (int *,struct sproto*) ;
 struct sproto* FUNC_2 (void*,size_t) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_0) {
 struct sproto * VAR_1;
 size_t VAR_2;
 void * VAR_3 = (void *)FUNC_0(VAR_0,1,&VAR_2);
 VAR_1 = FUNC_2(VAR_3, VAR_2);
 if (VAR_1) {
  FUNC_1(VAR_0, VAR_1);
  return 1;
 }
 return 0;
}
