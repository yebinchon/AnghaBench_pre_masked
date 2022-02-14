
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;


 int* VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *) ;
 char* FUNC_2 (int *,int,int*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4( lua_State* VAR_1 )
{
  int VAR_2, VAR_3;
  const char* VAR_4 = FUNC_2(VAR_1, 1, &VAR_2);
  luaL_Buffer VAR_5;

  FUNC_1(VAR_1, &VAR_5);
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += 3) {
    int VAR_6 = VAR_4[VAR_3];
    int VAR_7 = (VAR_3 + 1 < VAR_2) ? VAR_4[VAR_3 + 1] : 0;
    int VAR_8 = (VAR_3 + 2 < VAR_2) ? VAR_4[VAR_3 + 2] : 0;
    FUNC_0(&VAR_5, VAR_0[VAR_6 >> 2]);
    FUNC_0(&VAR_5, VAR_0[((VAR_6 & 3) << 4) | (VAR_7 >> 4)]);
    FUNC_0(&VAR_5, (VAR_3 + 1 < VAR_2) ? VAR_0[((VAR_7 & 15) << 2) | (VAR_8 >> 6)] : 61);
    FUNC_0(&VAR_5, (VAR_3 + 2 < VAR_2) ? VAR_0[(VAR_8 & 63)] : 61);
  }
  FUNC_3(&VAR_5);
  return 1;
}
