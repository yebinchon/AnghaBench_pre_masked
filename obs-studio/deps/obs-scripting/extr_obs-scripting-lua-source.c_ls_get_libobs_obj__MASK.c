
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swig_type_info ;
typedef int lua_State ;


 int FUNC_0 (int *,int,void*,int *,int ) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *,char const*) ;
 int FUNC_3 (char*,char const*,int,char const*,char*,char const*) ;

bool FUNC_4(lua_State *VAR_0, const char *VAR_1, int VAR_2,
   void *VAR_3, const char *VAR_4, const char *VAR_5,
   int VAR_6)
{
 swig_type_info *VAR_7 = FUNC_2(VAR_0, VAR_1);
 if (VAR_7 == ((void*)0)) {
  FUNC_3("%s:%d: SWIG could not find type: %s%s%s", VAR_5, VAR_6,
       VAR_4 ? VAR_4 : "", VAR_4 ? "::" : "", VAR_1);
  return 0;
 }

 int VAR_8 = FUNC_0(VAR_0, VAR_2, VAR_3, VAR_7, 0);
 if (!FUNC_1(VAR_8)) {
  FUNC_3("%s:%d: SWIG failed to convert lua object to obs "
       "object: %s%s%s",
       VAR_5, VAR_6, VAR_4 ? VAR_4 : "", VAR_4 ? "::" : "", VAR_1);
  return 0;
 }

 return 1;
}
