
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int TString ;


 char* FUNC_0 (int const*) ;
 int * FUNC_1 (int *,char const*) ;
 int * FUNC_2 (int *,char const*,int) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,char) ;

__attribute__((used)) static TString *FUNC_6(lua_State *VAR_0, const TString *VAR_1)
{
 const char *VAR_2 = FUNC_0(VAR_1)+1;
 const char *VAR_3 = FUNC_5(VAR_2, '/');
 if (!VAR_3) VAR_3 = FUNC_5(VAR_2, '\\');
 VAR_3 = VAR_3 ? VAR_3 + 1 : VAR_2;
 while (*VAR_3 == '.') VAR_3++;
 const char *VAR_4 = FUNC_3(VAR_3, '.');
 int VAR_5 = VAR_4 ? VAR_4 - VAR_3: FUNC_4(VAR_3);
 return VAR_5 ? FUNC_2 (VAR_0, VAR_3, VAR_5) : FUNC_1(VAR_0, VAR_2);
}
