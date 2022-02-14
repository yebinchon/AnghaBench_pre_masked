
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct boxreader {int * lastcopy; int * obj; } ;
typedef int lua_State ;


 struct boxreader* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_0) {
 struct boxreader * VAR_1 = FUNC_0(VAR_0, 1);
 FUNC_2(VAR_1->obj);
 VAR_1->obj = ((void*)0);
 FUNC_1(VAR_1->lastcopy);
 VAR_1->lastcopy = ((void*)0);

 return 0;
}
