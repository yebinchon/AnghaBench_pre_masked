
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
 int FUNC_2 (int *,struct sproto*) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_2) {
 int VAR_3 = FUNC_1(VAR_2, 1, 0);
 struct sproto * VAR_4;
 if (VAR_3 < 0 || VAR_3 >= VAR_1) {
  return FUNC_0(VAR_2, "Invalid global slot index %d", VAR_3);
 }
 VAR_4 = VAR_0[VAR_3];
 if (VAR_4 == ((void*)0)) {
  return FUNC_0(VAR_2, "nil sproto at index %d", VAR_3);
 }

 FUNC_2(VAR_2, VAR_4);

 return 1;
}
