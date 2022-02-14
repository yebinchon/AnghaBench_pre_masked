
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5( lua_State *VAR_1 )
{
  unsigned VAR_2 = FUNC_1( VAR_1, 1 );

  FUNC_0( VAR_0, VAR_2 );
  if (FUNC_3( VAR_2 ) )
      FUNC_4( VAR_2 );
  else
      FUNC_2( VAR_1, "i2c %d is not configured", VAR_2 );
  return 0;
}
