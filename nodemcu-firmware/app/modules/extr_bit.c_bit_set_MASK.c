
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_UInteger ;
typedef int lua_State ;
typedef int lua_Integer ;


 scalar_t__ FUNC_0 (int *,unsigned int) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3( lua_State* VAR_0 )
{
  lua_UInteger VAR_1 = ( lua_UInteger )FUNC_0( VAR_0, 1 );
  unsigned VAR_2 = FUNC_1( VAR_0 ), VAR_3;

  for( VAR_3 = 2; VAR_3 <= VAR_2; VAR_3 ++ )
    VAR_1 |= 1 << ( unsigned )FUNC_0( VAR_0, VAR_3 );
  FUNC_2( VAR_0, ( lua_Integer )VAR_1 );
  return 1;
}
