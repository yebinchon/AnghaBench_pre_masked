
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int Table ;
typedef int TValue ;


 int VAR_0 ;
 int FUNC_0 (int*,int*) ;
 scalar_t__ FUNC_1 (int const*,int*) ;
 int FUNC_2 (int *,int*) ;
 scalar_t__ FUNC_3 (int *,int*,int*) ;
 int FUNC_4 (int *,int *,int,int) ;

__attribute__((used)) static void FUNC_5 (lua_State *VAR_1, Table *VAR_2, const TValue *VAR_3) {
  int VAR_4, VAR_5;
  int VAR_6[VAR_0+1];
  int VAR_7;
  int VAR_8;
  for (VAR_7=0; VAR_7<=VAR_0; VAR_7++) VAR_6[VAR_7] = 0;
  VAR_4 = FUNC_2(VAR_2, VAR_6);
  VAR_8 = VAR_4;
  VAR_8 += FUNC_3(VAR_2, VAR_6, &VAR_4);

  VAR_4 += FUNC_1(VAR_3, VAR_6);
  VAR_8++;

  VAR_5 = FUNC_0(VAR_6, &VAR_4);

  FUNC_4(VAR_1, VAR_2, VAR_4, VAR_8 - VAR_5);
}
