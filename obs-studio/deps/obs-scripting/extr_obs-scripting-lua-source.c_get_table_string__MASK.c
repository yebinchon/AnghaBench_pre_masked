
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (char*,char const*,char const*,char*) ;

__attribute__((used)) static inline const char *FUNC_7(lua_State *VAR_0, int VAR_1,
         const char *VAR_2, const char *VAR_3)
{
 const char *VAR_4 = "";

 FUNC_4(VAR_0, VAR_2);
 FUNC_1(VAR_0, VAR_1 - 1);
 if (!FUNC_2(VAR_0, -1))
  FUNC_6("%s: no item '%s' of type %s", VAR_3, VAR_2, "string");
 else
  VAR_4 = FUNC_0(FUNC_5(VAR_0, -1));
 FUNC_3(VAR_0, 1);

 return VAR_4;
}
