
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int cronent_ud_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int *,int) ;

__attribute__((used)) static size_t FUNC_3(lua_State *VAR_3, cronent_ud_t *VAR_4) {
  cronent_ud_t *VAR_5;
  size_t VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
    FUNC_1(VAR_3, VAR_0, VAR_2[VAR_6]);
    VAR_5 = FUNC_2(VAR_3, -1);
    FUNC_0(VAR_3, 1);
    if (VAR_5 == VAR_4) break;
  }
  if (VAR_6 == VAR_1) return -1;
  return VAR_6;
}
