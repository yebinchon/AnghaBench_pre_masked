
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int lua_State ;
typedef int luaL_Buffer ;


 int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char) ;
 int FUNC_2 (int *,int *) ;
 unsigned int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned int,int) ;

__attribute__((used)) static int FUNC_6( lua_State *VAR_1 )
{
  unsigned VAR_2 = FUNC_3( VAR_1, 1 );
  u32 VAR_3 = ( u32 )FUNC_3( VAR_1, 2 ), VAR_4;
  luaL_Buffer VAR_5;
  int VAR_6;

  FUNC_0( VAR_0, VAR_2 );
  if( VAR_3 == 0 )
    return 0;
  FUNC_2( VAR_1, &VAR_5 );
  for( VAR_4 = 0; VAR_4 < VAR_3; VAR_4 ++ )
    if( ( VAR_6 = FUNC_5( VAR_2, VAR_4 < VAR_3 - 1 ) ) == -1 )
      break;
    else
      FUNC_1( &VAR_5, ( char )VAR_6 );
  FUNC_4( &VAR_5 );
  return 1;
}
