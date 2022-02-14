
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(lua_State *VAR_3) {
  for (size_t VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
    FUNC_1(VAR_3, VAR_0, VAR_2[VAR_4]);
  }
  VAR_1 = 0;
  FUNC_0(VAR_2);
  VAR_2 = 0;
  return 0;
}
