
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char const*) ;
 scalar_t__ FUNC_4 (int *,int) ;

__attribute__((used)) static inline int FUNC_5(lua_State *VAR_0, int VAR_1, const char *VAR_2,
     const char *VAR_3)
{
 int VAR_4 = 0;

 FUNC_3(VAR_0, VAR_2);
 FUNC_1(VAR_0, VAR_1 - 1);
 VAR_4 = (int)FUNC_4(VAR_0, -1);
 FUNC_2(VAR_0, 1);

 FUNC_0(VAR_3);

 return VAR_4;
}
