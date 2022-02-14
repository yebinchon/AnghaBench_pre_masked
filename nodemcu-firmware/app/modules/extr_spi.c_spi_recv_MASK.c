
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,char) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int,int ,int) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_7( lua_State *VAR_2 )
{
  int VAR_3 = FUNC_3( VAR_2, 1 );
  int VAR_4 = FUNC_3( VAR_2, 2 ), VAR_5;
  int VAR_6 = FUNC_4( VAR_2, 3, 0xffffffff );

  luaL_Buffer VAR_7;

  FUNC_0( VAR_0, VAR_3 );
  if (VAR_4 == 0) {
    return 0;
  }

  FUNC_2( VAR_2, &VAR_7 );
  for (VAR_5=0; VAR_5<VAR_4; VAR_5++)
  {
    FUNC_1( &VAR_7, ( char )FUNC_6( VAR_3, VAR_1[VAR_3], VAR_6 ) );
  }

  FUNC_5( &VAR_7 );
  return 1;
}
