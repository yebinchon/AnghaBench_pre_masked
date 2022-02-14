
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,size_t,char*,int) ;
 int FUNC_2 (int *,char const*,size_t,char*) ;
 char* FUNC_3 (int *,int,size_t*) ;
 int FUNC_4 (int *,char*,size_t) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*,size_t) ;
 int FUNC_7 (char*,char const*,size_t) ;

__attribute__((used)) static int FUNC_8 (lua_State *VAR_2) {
  size_t VAR_3;
  const char *VAR_4 = FUNC_3(VAR_2, 1, &VAR_3);
  size_t VAR_5;
  const char *VAR_6;
  int VAR_7;
  char VAR_8[VAR_0+VAR_1];
  FUNC_0(VAR_2);
  VAR_6 = FUNC_3(VAR_2, 3, &VAR_5);
  if (VAR_5 > VAR_0)
    FUNC_4(VAR_2, "seed too long (> %d)", VAR_0);

  VAR_8[0] = (char)VAR_5;
  FUNC_7(VAR_8+1, VAR_6, VAR_5);
  FUNC_6(VAR_2, VAR_8, VAR_5+1);
  VAR_7 = FUNC_2(VAR_2, VAR_6, VAR_5, VAR_8);
  FUNC_1(VAR_2, VAR_4, VAR_3, VAR_8, VAR_7);
  FUNC_5(VAR_2, 2);
  return 1;
}
