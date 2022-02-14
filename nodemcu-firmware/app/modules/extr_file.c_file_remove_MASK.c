
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int,int,char*) ;
 char* FUNC_1 (int *,int,size_t*) ;
 size_t FUNC_2 (char const*) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5( lua_State* VAR_1 )
{
  size_t VAR_2;
  const char *VAR_3 = FUNC_1( VAR_1, 1, &VAR_2 );
  const char *VAR_4 = FUNC_3( VAR_3 );
  FUNC_0(VAR_1, FUNC_2(VAR_4) <= VAR_0 && FUNC_2(VAR_3) == VAR_2, 1, "filename invalid");
  FUNC_4((char *)VAR_3);
  return 0;
}
