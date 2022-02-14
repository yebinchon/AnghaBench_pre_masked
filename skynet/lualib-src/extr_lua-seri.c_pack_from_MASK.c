
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_block {int dummy; } ;
typedef int lua_State ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct write_block*,int,int ) ;

__attribute__((used)) static void
FUNC_2(lua_State *VAR_0, struct write_block *VAR_1, int VAR_2) {
 int VAR_3 = FUNC_0(VAR_0) - VAR_2;
 int VAR_4;
 for (VAR_4=1;VAR_4<=VAR_3;VAR_4++) {
  FUNC_1(VAR_0, VAR_1 , VAR_2 + VAR_4, 0);
 }
}
