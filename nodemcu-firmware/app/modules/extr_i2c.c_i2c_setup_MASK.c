
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ s32 ;
typedef int lua_State ;


 int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (unsigned int,unsigned int,unsigned int,int ) ;

__attribute__((used)) static int FUNC_5( lua_State *VAR_2 )
{
  unsigned VAR_3 = FUNC_1( VAR_2, 1 );
  unsigned VAR_4 = FUNC_1( VAR_2, 2 );
  unsigned VAR_5 = FUNC_1( VAR_2, 3 );

  FUNC_0( VAR_1, VAR_3 );
  FUNC_0( VAR_0, VAR_4 );
  FUNC_0( VAR_0, VAR_5 );

  if ( VAR_4 == 0 )
    return FUNC_2( VAR_2, "i2c SDA on D0 is not supported" );

  s32 VAR_6 = ( s32 )FUNC_1( VAR_2, 4 );
  if ( VAR_6 <= 0 )
    return FUNC_2( VAR_2, "wrong arg range" );
  VAR_6 = FUNC_4( VAR_3, VAR_4, VAR_5, (u32)VAR_6 );
  if ( VAR_6 == 0 )
    return FUNC_2( VAR_2, "failed to initialize i2c %d", VAR_3 );
  FUNC_3( VAR_2, VAR_6 );
  return 1;
}
