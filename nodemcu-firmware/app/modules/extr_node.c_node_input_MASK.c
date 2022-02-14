
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int,size_t*) ;
 scalar_t__ FUNC_2 (char const*,size_t) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4( lua_State* VAR_0 ) {
  size_t VAR_1 = 0;
  const char *VAR_2 = FUNC_1(VAR_0, 1, &VAR_1);
  if (FUNC_2(VAR_2, VAR_1)) {
    FUNC_0("Result (if any):\n");
    FUNC_3(1);
  }
  return 0;
}
