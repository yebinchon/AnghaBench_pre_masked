
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4( lua_State *VAR_1 )
{
  unsigned VAR_2 = FUNC_1( VAR_1, 1 );

  if(VAR_2==0)
    return FUNC_2( VAR_1, "no 1-wire for D0" );

  FUNC_0( VAR_0, VAR_2 );

  FUNC_3( VAR_2 );
  return 0;
}
