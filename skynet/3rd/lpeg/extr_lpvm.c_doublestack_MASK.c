
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int Stack ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static Stack *FUNC_9 (lua_State *VAR_2, Stack **VAR_3, int VAR_4) {
  Stack *VAR_5 = FUNC_0(VAR_2, VAR_4);
  Stack *VAR_6;
  int VAR_7 = *VAR_3 - VAR_5;
  int VAR_8, VAR_9;
  FUNC_2(VAR_2, VAR_0, VAR_1);
  VAR_8 = FUNC_6(VAR_2, -1);
  FUNC_4(VAR_2, 1);
  if (VAR_7 >= VAR_8)
    FUNC_1(VAR_2, "backtrack stack overflow (current limit is %d)", VAR_8);
  VAR_9 = 2 * VAR_7;
  if (VAR_9 > VAR_8) VAR_9 = VAR_8;
  VAR_6 = (Stack *)FUNC_3(VAR_2, VAR_9 * sizeof(Stack));
  FUNC_7(VAR_6, VAR_5, VAR_7 * sizeof(Stack));
  FUNC_5(VAR_2, FUNC_8(VAR_4));
  *VAR_3 = VAR_6 + VAR_9;
  return VAR_6 + VAR_7;
}
