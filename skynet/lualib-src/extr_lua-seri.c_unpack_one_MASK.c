
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int type ;
struct read_block {int dummy; } ;
typedef int lua_State ;


 int FUNC_0 (int *,struct read_block*) ;
 int FUNC_1 (int *,struct read_block*,int,int) ;
 int* FUNC_2 (struct read_block*,int) ;

__attribute__((used)) static void
FUNC_3(lua_State *VAR_0, struct read_block *VAR_1) {
 uint8_t VAR_2;
 uint8_t *VAR_3 = FUNC_2(VAR_1, sizeof(VAR_2));
 if (VAR_3==((void*)0)) {
  FUNC_0(VAR_0, VAR_1);
 }
 VAR_2 = *VAR_3;
 FUNC_1(VAR_0, VAR_1, VAR_2 & 0x7, VAR_2>>3);
}
