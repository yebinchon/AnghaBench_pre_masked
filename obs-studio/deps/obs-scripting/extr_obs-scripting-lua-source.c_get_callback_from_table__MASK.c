
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (char*,char const*,char const*) ;

__attribute__((used)) static inline void FUNC_7(lua_State *VAR_2, int VAR_3,
         const char *VAR_4, int *VAR_5,
         const char *VAR_6)
{
 *VAR_5 = VAR_0;

 FUNC_5(VAR_2, VAR_4);
 FUNC_1(VAR_2, VAR_3 - 1);
 if (!FUNC_2(VAR_2, -1)) {
  if (!FUNC_3(VAR_2, -1)) {
   FUNC_6("%s: item '%s' is not a function", VAR_6, VAR_4);
  }
  FUNC_4(VAR_2, 1);
 } else {
  *VAR_5 = FUNC_0(VAR_2, VAR_1);
 }
}
