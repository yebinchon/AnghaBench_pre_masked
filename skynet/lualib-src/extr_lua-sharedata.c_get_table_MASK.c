
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int dummy; } ;
typedef int lua_State ;


 int FUNC_0 (int *,char*) ;
 struct table* FUNC_1 (int *,int) ;

__attribute__((used)) static struct table *
FUNC_2(lua_State *VAR_0, int VAR_1) {
 struct table *VAR_2 = FUNC_1(VAR_0,VAR_1);
 if (VAR_2 == ((void*)0)) {
  FUNC_0(VAR_0, "Need a conf object");
 }
 return VAR_2;
}
