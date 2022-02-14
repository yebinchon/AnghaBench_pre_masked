
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;





 int FUNC_0 (int *,long,int const) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,char*,char const* const*) ;
 long FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int *) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_0) {
  static const int VAR_1[] = {128, 130, 129};
  static const char *const VAR_2[] = {"set", "cur", "end", ((void*)0)};
  FILE *VAR_3 = FUNC_6(VAR_0);
  int VAR_4 = FUNC_2(VAR_0, 2, "cur", VAR_2);
  long VAR_5 = FUNC_3(VAR_0, 3, 0);
  VAR_4 = FUNC_0(VAR_3, VAR_5, VAR_1[VAR_4]);
  if (VAR_4)
    return FUNC_5(VAR_0, 0, ((void*)0));
  else {
    FUNC_4(VAR_0, FUNC_1(VAR_3));
    return 1;
  }
}
