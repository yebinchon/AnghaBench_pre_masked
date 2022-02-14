
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef void* s32 ;
typedef int lua_State ;


 int FUNC_0 (int ,unsigned int) ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,void*) ;
 void* FUNC_4 (unsigned int,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5( lua_State* VAR_1 )
{
  unsigned VAR_2;
  s32 VAR_3;

  VAR_2 = FUNC_1( VAR_1, 1 );
  FUNC_0( VAR_0, VAR_2 );
  VAR_3 = FUNC_1( VAR_1, 2 );
  if ( VAR_3 <= 0 )
    return FUNC_2( VAR_1, "wrong arg range" );
  VAR_3 = FUNC_4( VAR_2, (u32)VAR_3 );
  FUNC_3( VAR_1, VAR_3 );
  return 1;
}
