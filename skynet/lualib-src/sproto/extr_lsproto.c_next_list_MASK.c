
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct encode_ud {int array_index; scalar_t__ iter_key; scalar_t__ iter_table; scalar_t__ iter_func; } ;
typedef int lua_State ;


 int FUNC_0 (int *,int,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_0, struct encode_ud * VAR_1) {

 if (VAR_1->iter_func) {
  FUNC_4(VAR_0, VAR_1->iter_func);
  FUNC_4(VAR_0, VAR_1->iter_table);
  FUNC_4(VAR_0, VAR_1->iter_key);
  FUNC_0(VAR_0, 2, 2);
  if (FUNC_1(VAR_0, -2)) {
   FUNC_3(VAR_0, 2);
   return 0;
  }
  return 1;
 } else {
  FUNC_4(VAR_0,VAR_1->iter_key);
  return FUNC_2(VAR_0, VAR_1->array_index);
 }
}
