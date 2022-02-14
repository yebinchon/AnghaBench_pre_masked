
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int ,int,char*) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char const*,size_t) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5( lua_State* VAR_0 )
{
  size_t VAR_1;
  const char *VAR_2 = FUNC_1(VAR_0, 1, &VAR_1);
  FUNC_0(VAR_0, FUNC_3(VAR_2, VAR_1), 1, "Invalid hostname");
  FUNC_2(VAR_0, FUNC_4((char*)VAR_2));
  return 1;
}
