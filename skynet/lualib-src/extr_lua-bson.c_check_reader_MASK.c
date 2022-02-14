
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bson_reader {int size; } ;
typedef int lua_State ;


 int FUNC_0 (int *,char*,int,int) ;

__attribute__((used)) static inline void
FUNC_1(lua_State *VAR_0, struct bson_reader *VAR_1, int VAR_2) {
 if (VAR_1->size < VAR_2) {
  FUNC_0(VAR_0, "Invalid bson block (%d:%d)", VAR_1->size, VAR_2);
 }
}
