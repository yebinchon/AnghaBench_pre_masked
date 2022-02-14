
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sproto {int dummy; } ;
typedef int lua_State ;


 struct sproto** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int,int ) ;
 struct sproto* FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_2) {
 struct sproto * VAR_3 = FUNC_2(VAR_2, 1);
 int VAR_4 = FUNC_1(VAR_2, 2, 0);
 if (VAR_4 < 0 || VAR_4 >= VAR_1) {
  return FUNC_0(VAR_2, "Invalid global slot index %d", VAR_4);
 }

 VAR_0[VAR_4] = VAR_3;
 return 0;
}
