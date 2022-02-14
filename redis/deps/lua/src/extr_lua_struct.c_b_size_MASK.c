
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int Header ;


 int FUNC_0 (int *,int,char const**,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (size_t,int *,int,size_t) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int,char*) ;
 char* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,size_t) ;
 size_t FUNC_7 (int *,int,char const**) ;

__attribute__((used)) static int FUNC_8 (lua_State *VAR_0) {
  Header VAR_1;
  const char *VAR_2 = FUNC_5(VAR_0, 1);
  size_t VAR_3 = 0;
  FUNC_1(&VAR_1);
  while (*VAR_2) {
    int VAR_4 = *VAR_2++;
    size_t VAR_5 = FUNC_7(VAR_0, VAR_4, &VAR_2);
    VAR_3 += FUNC_2(VAR_3, &VAR_1, VAR_4, VAR_5);
    if (VAR_4 == 's')
      FUNC_4(VAR_0, 1, "option 's' has no fixed size");
    else if (VAR_4 == 'c' && VAR_5 == 0)
      FUNC_4(VAR_0, 1, "option 'c0' has no fixed size");
    if (!FUNC_3(VAR_4))
      FUNC_0(VAR_0, VAR_4, &VAR_2, &VAR_1);
    VAR_3 += VAR_5;
  }
  FUNC_6(VAR_0, VAR_3);
  return 1;
}
