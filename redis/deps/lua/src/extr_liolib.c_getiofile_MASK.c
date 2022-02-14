
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static FILE *FUNC_3 (lua_State *VAR_2, int VAR_3) {
  FILE *VAR_4;
  FUNC_1(VAR_2, VAR_0, VAR_3);
  VAR_4 = *(FILE **)FUNC_2(VAR_2, -1);
  if (VAR_4 == ((void*)0))
    FUNC_0(VAR_2, "standard %s file is closed", VAR_1[VAR_3 - 1]);
  return VAR_4;
}
