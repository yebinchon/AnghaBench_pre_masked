
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swig_type_info ;
typedef int lua_State ;


 int FUNC_0 (int *,void*,int *,int) ;
 int * FUNC_1 (int *,char const*) ;
 int FUNC_2 (char*,char const*,int,char const*,char*,char const*) ;

bool FUNC_3(lua_State *VAR_0, const char *VAR_1, void *VAR_2,
    bool VAR_3, const char *VAR_4, const char *VAR_5,
    int VAR_6)
{
 swig_type_info *VAR_7 = FUNC_1(VAR_0, VAR_1);
 if (VAR_7 == ((void*)0)) {
  FUNC_2("%s:%d: SWIG could not find type: %s%s%s", VAR_5, VAR_6,
       VAR_4 ? VAR_4 : "", VAR_4 ? "::" : "", VAR_1);
  return 0;
 }

 FUNC_0(VAR_0, VAR_2, VAR_7, (int)VAR_3);
 return 1;
}
