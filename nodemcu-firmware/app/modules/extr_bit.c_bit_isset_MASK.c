
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_UInteger ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2( lua_State* VAR_0 )
{
  lua_UInteger VAR_1 = ( lua_UInteger )FUNC_0( VAR_0, 1 );
  unsigned VAR_2 = ( unsigned )FUNC_0( VAR_0, 2 );

  FUNC_1( VAR_0, VAR_1 & ( 1 << VAR_2 ) ? 1 : 0 );
  return 1;
}
