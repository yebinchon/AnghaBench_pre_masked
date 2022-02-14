
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int p ;
typedef int lua_State ;
typedef int luaL_Buffer ;
typedef char int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int,int ) ;
 int FUNC_6 (int,char*,int) ;

__attribute__((used)) static int FUNC_7( lua_State* VAR_3, int VAR_4, int16_t VAR_5, int VAR_6 )
{
  int VAR_7, VAR_8;
  luaL_Buffer VAR_9;
  char VAR_10[VAR_0/2];

  if(!VAR_6)
    return FUNC_2(VAR_3, "open a file first");

  FUNC_1(VAR_3, &VAR_9);

  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8 += sizeof(VAR_10)) {
    int VAR_11 = (VAR_4 - VAR_8 >= sizeof(VAR_10)) ? sizeof(VAR_10) : VAR_4 - VAR_8;
    int VAR_12 = FUNC_6(VAR_6, VAR_10, VAR_11);

    if (VAR_12 == VAR_1 || VAR_12 == 0) {
      FUNC_4(VAR_3);
      return 1;
    }

    for (VAR_7 = 0; VAR_7 < VAR_12; ++VAR_7) {
      FUNC_0(&VAR_9, VAR_10[VAR_7]);
      if (VAR_10[VAR_7] == VAR_5) {
        FUNC_5(VAR_6, -VAR_12 + VAR_8 + VAR_7 + 1, VAR_2);
        VAR_12 = 0;
        break;
      }
    }

    if (VAR_12 < VAR_11)
      break;
  }
  FUNC_3(&VAR_9);
  return 1;
}
