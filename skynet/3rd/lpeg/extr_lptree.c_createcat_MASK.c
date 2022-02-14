
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int TTree ;


 int VAR_0 ;
 int FUNC_0 (int *,int,char const*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4 (lua_State *VAR_1, const char *VAR_2, int (VAR_3) (int)) {
  TTree *VAR_4 = FUNC_1(VAR_1);
  int VAR_5;
  for (VAR_5 = 0; VAR_5 <= VAR_0; VAR_5++)
    if (VAR_3(VAR_5)) FUNC_2(FUNC_3(VAR_4), VAR_5);
  FUNC_0(VAR_1, -2, VAR_2);
}
