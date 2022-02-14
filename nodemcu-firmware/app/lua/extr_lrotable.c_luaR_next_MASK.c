
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int TValue ;
typedef int ROTable ;


 int FUNC_0 (int *,int ,unsigned int*) ;
 int FUNC_1 (int *,int *,unsigned int,int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

void FUNC_5(lua_State *VAR_0, ROTable *VAR_1, TValue *VAR_2, TValue *VAR_3) {
  unsigned VAR_4;


  if (FUNC_3(VAR_2))
    FUNC_1(VAR_0, VAR_1, 0, VAR_2, VAR_3);
  else if (FUNC_4(VAR_2)) {

    if (FUNC_4(VAR_2)) {
      FUNC_0(VAR_1, FUNC_2(VAR_2), &VAR_4);
    }

    VAR_4 ++;
    FUNC_1(VAR_0, VAR_1, VAR_4, VAR_2, VAR_3);
  }
}
