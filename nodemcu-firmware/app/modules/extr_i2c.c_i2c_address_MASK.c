
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int lua_State ;


 int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (unsigned int,int ,int) ;

__attribute__((used)) static int FUNC_5( lua_State *VAR_1 )
{
  unsigned VAR_2 = FUNC_1( VAR_1, 1 );
  int VAR_3 = FUNC_1( VAR_1, 2 );
  int VAR_4 = FUNC_1( VAR_1, 3 );

  FUNC_0( VAR_0, VAR_2 );
  if ( VAR_3 < 0 || VAR_3 > 127 )
    return FUNC_2( VAR_1, "wrong arg range" );
  FUNC_3( VAR_1, FUNC_4( VAR_2, (u16)VAR_3, VAR_4 ) );
  return 1;
}
