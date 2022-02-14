
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*,int ,char const*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *,int) ;

__attribute__((used)) static void ** FUNC_10 (lua_State *VAR_2, const char *VAR_3) {
  void **VAR_4;
  FUNC_5(VAR_2, "%s%s", VAR_0, VAR_3);
  FUNC_1(VAR_2, VAR_1);
  if (!FUNC_2(VAR_2, -1))
    VAR_4 = (void **)FUNC_9(VAR_2, -1);
  else {
    FUNC_4(VAR_2, 1);
    VAR_4 = (void **)FUNC_3(VAR_2, sizeof(const void *));
    *VAR_4 = ((void*)0);
    FUNC_0(VAR_2, "_LOADLIB");
    FUNC_7(VAR_2, -2);
    FUNC_5(VAR_2, "%s%s", VAR_0, VAR_3);
    FUNC_6(VAR_2, -2);
    FUNC_8(VAR_2, VAR_1);
  }
  return VAR_4;
}
