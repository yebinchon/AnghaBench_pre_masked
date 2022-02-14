
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int lua_State ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,unsigned int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5( lua_State* VAR_3 )
{
  unsigned VAR_4;

  VAR_4 = FUNC_0( VAR_3, 1 );

  if ( VAR_4 != VAR_0 && VAR_4 != VAR_1 && VAR_4 != VAR_2 )
    return FUNC_1( VAR_3, "wrong arg type" );

  FUNC_4( (uint8_t)VAR_4);
  VAR_4 = (unsigned)FUNC_3();
  FUNC_2( VAR_3, VAR_4 );
  return 1;
}
