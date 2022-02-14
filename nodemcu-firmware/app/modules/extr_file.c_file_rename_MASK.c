
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int,int,char*) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,int) ;
 size_t FUNC_3 (char const*) ;
 char* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;

__attribute__((used)) static int FUNC_6( lua_State* VAR_1 )
{
  size_t VAR_2;

  const char *VAR_3 = FUNC_1( VAR_1, 1, &VAR_2 );
  const char *VAR_4 = FUNC_4( VAR_3 );
  FUNC_0(VAR_1, FUNC_3(VAR_4) <= VAR_0 && FUNC_3(VAR_3) == VAR_2, 1, "filename invalid");

  const char *VAR_5 = FUNC_1( VAR_1, 2, &VAR_2 );
  VAR_4 = FUNC_4( VAR_5 );
  FUNC_0(VAR_1, FUNC_3(VAR_4) <= VAR_0 && FUNC_3(VAR_5) == VAR_2, 2, "filename invalid");

  if(0 <= FUNC_5( VAR_3, VAR_5 )){
    FUNC_2(VAR_1, 1);
  } else {
    FUNC_2(VAR_1, 0);
  }
  return 1;
}
