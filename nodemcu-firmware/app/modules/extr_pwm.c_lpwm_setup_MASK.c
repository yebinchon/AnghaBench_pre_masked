
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef void* s32 ;
typedef int lua_State ;


 int FUNC_0 (int ,unsigned int) ;
 unsigned int VAR_0 ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,void*) ;
 void* FUNC_4 (unsigned int,int ,unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5( lua_State* VAR_2 )
{
  s32 VAR_3;
  unsigned VAR_4;
  unsigned VAR_5;

  VAR_5 = FUNC_1( VAR_2, 1 );
  if(VAR_5==0)
    return FUNC_2( VAR_2, "no pwm for D0" );
  FUNC_0( VAR_1, VAR_5 );
  VAR_3 = FUNC_1( VAR_2, 2 );
  if ( VAR_3 <= 0 )
    return FUNC_2( VAR_2, "wrong arg range" );
  VAR_4 = FUNC_1( VAR_2, 3 );
  if ( VAR_4 > VAR_0 )

    return FUNC_2( VAR_2, "wrong arg range" );
  VAR_3 = FUNC_4( VAR_5, (u32)VAR_3, VAR_4 );
  if(VAR_3==0)
    return FUNC_2( VAR_2, "too many pwms." );
  FUNC_3( VAR_2, VAR_3 );
  return 1;
}
