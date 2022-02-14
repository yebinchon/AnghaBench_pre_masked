
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ FUNC_0 (int *,int) ;
 char* FUNC_1 (int *,int,size_t*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;

__attribute__((used)) static const char *
FUNC_4(lua_State *VAR_0, size_t *VAR_1, int VAR_2) {
 const char * VAR_3;
 if (FUNC_2(VAR_0,VAR_2)) {
  VAR_3 = (const char *)FUNC_3(VAR_0,VAR_2);
  *VAR_1 = (size_t)FUNC_0(VAR_0, VAR_2+1);
 } else {
  VAR_3 = FUNC_1(VAR_0, VAR_2, VAR_1);
 }
 return VAR_3;
}
