
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 char* FUNC_0 (int *,int,size_t*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (void*,char const*,size_t) ;
 void* FUNC_4 (size_t) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_0) {
 size_t VAR_1 = 0;
 const char * VAR_2 = FUNC_0(VAR_0,1,&VAR_1);
 void *VAR_3 = FUNC_4(VAR_1);
 FUNC_3(VAR_3, VAR_2, VAR_1);
 FUNC_2(VAR_0, VAR_3);
 FUNC_1(VAR_0, (int)VAR_1);
 return 2;
}
