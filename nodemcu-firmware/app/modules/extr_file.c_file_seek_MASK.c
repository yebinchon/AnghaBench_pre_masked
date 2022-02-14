
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*,char const* const*) ;
 int FUNC_1 (int *,char*) ;
 long FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,long,int const) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_3)
{
  VAR_0;

  static const int VAR_4[] = {128, 130, 129};
  static const char *const VAR_5[] = {"set", "cur", "end", ((void*)0)};
  if(!VAR_2)
    return FUNC_1(VAR_3, "open a file first");
  int VAR_6 = FUNC_0(VAR_3, VAR_1, "cur", VAR_5);
  long VAR_7 = FUNC_2(VAR_3, ++VAR_1, 0);
  VAR_6 = FUNC_5(VAR_2, VAR_7, VAR_4[VAR_6]);
  if (VAR_6 < 0)
    FUNC_4(VAR_3);
  else
    FUNC_3(VAR_3, FUNC_6(VAR_2));
  return 1;
}
