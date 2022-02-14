
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*,size_t,char*,int) ;
 int FUNC_1 (int *,char const*,size_t,char*) ;
 int FUNC_2 (int *,int,int,char*) ;
 char* FUNC_3 (int *,int,size_t*) ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_2) {
  size_t VAR_3;
  const char *VAR_4 = FUNC_3(VAR_2, 1, &VAR_3);
  size_t VAR_5 = VAR_4[0];
  const char *VAR_6 = VAR_4+1;
  int VAR_7;
  char VAR_8[VAR_0+VAR_1];
  FUNC_2(VAR_2, VAR_3 >= VAR_5+1 && VAR_5 <= VAR_0, 1,
                 "invalid cyphered string");
  VAR_4 += VAR_5+1;
  VAR_3 -= VAR_5+1;
  VAR_7 = FUNC_1(VAR_2, VAR_6, VAR_5, VAR_8);
  FUNC_0(VAR_2, VAR_4, VAR_3, VAR_8, VAR_7);
  return 1;
}
