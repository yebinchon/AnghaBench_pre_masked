
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_block {int dummy; } ;
typedef int lua_State ;
typedef int lua_Integer ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,struct write_block*,int,int) ;
 int FUNC_7 (struct write_block*) ;

__attribute__((used)) static void
FUNC_8(lua_State *VAR_1, struct write_block * VAR_2, int VAR_3, int VAR_4, int VAR_5) {
 FUNC_3(VAR_1);
 while (FUNC_1(VAR_1, VAR_3) != 0) {
  if (FUNC_5(VAR_1,-2) == VAR_0) {
   if (FUNC_0(VAR_1, -2)) {
    lua_Integer VAR_6 = FUNC_4(VAR_1,-2);
    if (VAR_6>0 && VAR_6<=VAR_5) {
     FUNC_2(VAR_1,1);
     continue;
    }
   }
  }
  FUNC_6(VAR_1,VAR_2,-2,VAR_4);
  FUNC_6(VAR_1,VAR_2,-1,VAR_4);
  FUNC_2(VAR_1, 1);
 }
 FUNC_7(VAR_2);
}
