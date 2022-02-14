
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_lua_script {int base; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 struct obs_lua_script* VAR_2 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int,int,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*,char const*,char const*,int ) ;

__attribute__((used)) static inline bool FUNC_6(lua_State *VAR_3, int VAR_4, int VAR_5,
         int VAR_6, const char *VAR_7,
         const char *VAR_8)
{
 if (VAR_4 == VAR_0)
  return 0;

 struct obs_lua_script *VAR_9 = VAR_2;

 FUNC_3(VAR_3, VAR_1, VAR_4);
 FUNC_0(VAR_3, -1 - VAR_5);

 if (FUNC_1(VAR_3, VAR_5, VAR_6, 0) != 0) {
  FUNC_5(&VAR_9->base, "Failed to call %s for %s: %s", VAR_7,
       VAR_8, FUNC_4(VAR_3, -1));
  FUNC_2(VAR_3, 1);
  return 0;
 }

 return 1;
}
