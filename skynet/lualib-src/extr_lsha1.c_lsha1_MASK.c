
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int lua_State ;
typedef int SHA1_CTX ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,size_t*) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*,size_t) ;

int
FUNC_5(lua_State *VAR_1) {
 size_t VAR_2 = 0;
 const uint8_t * VAR_3 = (const uint8_t *)FUNC_0(VAR_1, 1, &VAR_2);
 uint8_t VAR_4[VAR_0];
 SHA1_CTX VAR_5;
 FUNC_3(&VAR_5);
 FUNC_4(&VAR_5, VAR_3, VAR_2);
 FUNC_2(&VAR_5, VAR_4);
 FUNC_1(VAR_1, (const char *)VAR_4, VAR_0);

 return 1;
}
