
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct read_block {int len; } ;
typedef int lua_State ;


 int FUNC_0 (int *,char*,int,int) ;

__attribute__((used)) static inline void
FUNC_1(lua_State *VAR_0, struct read_block *VAR_1, int VAR_2) {
 int VAR_3 = VAR_1->len;
 FUNC_0(VAR_0, "Invalid serialize stream %d (line:%d)", VAR_3, VAR_2);
}
