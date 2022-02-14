
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int ** FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_3) {
  FILE **VAR_4 = FUNC_4(VAR_3);
  if(*VAR_4 == VAR_1 || *VAR_4 == VAR_2 || *VAR_4 == VAR_0)
  {
    FUNC_2(VAR_3);
    FUNC_1(VAR_3, "cannot close standard file");
    return 2;
  }
  int VAR_5 = (FUNC_0(*VAR_4) == 0);
  *VAR_4 = ((void*)0);
  return FUNC_3(VAR_3, VAR_5, ((void*)0));
}
