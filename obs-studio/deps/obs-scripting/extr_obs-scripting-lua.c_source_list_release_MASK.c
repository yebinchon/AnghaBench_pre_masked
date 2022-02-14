
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int,int,int*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int) ;
 size_t FUNC_3 (int *,int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_2)
{
 size_t VAR_3 = FUNC_3(VAR_2, 1);
 for (size_t VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_0 *VAR_1;

  FUNC_2(VAR_2, 1, (int)VAR_4 + 1);
  FUNC_0(VAR_0, -1, &VAR_1);
  FUNC_1(VAR_2, 1);

  FUNC_4(VAR_1);
 }
 return 0;
}
