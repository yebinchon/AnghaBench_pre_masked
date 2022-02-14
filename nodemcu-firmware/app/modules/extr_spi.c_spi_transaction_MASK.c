
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef int lua_State ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int,int,char*) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;
 int FUNC_3 (int,int,int ,int,int ,int,int,int) ;

__attribute__((used)) static int FUNC_4( lua_State *VAR_1 )
{
  int VAR_2 = FUNC_2( VAR_1, 1 );

  FUNC_0( VAR_0, VAR_2 );

  int VAR_3 = FUNC_2( VAR_1, 2 );
  u16 VAR_4 = ( u16 )FUNC_2( VAR_1, 3 );
  FUNC_1( VAR_1, 2, VAR_3 >= 0 && VAR_3 <= 16, "out of range" );

  int VAR_5 = FUNC_2( VAR_1, 4 );
  u32 VAR_6 = ( u32 )FUNC_2( VAR_1, 5 );
  FUNC_1( VAR_1, 4, VAR_5 >= 0 && VAR_5 <= 32, "out of range" );

  int VAR_7 = FUNC_2( VAR_1, 6 );
  FUNC_1( VAR_1, 6, VAR_7 >= 0 && VAR_7 <= 512, "out of range" );

  int VAR_8 = FUNC_2( VAR_1, 7 );
  FUNC_1( VAR_1, 7, VAR_8 >= 0 && VAR_8 <= 256, "out of range" );

  int VAR_9 = FUNC_2( VAR_1, 8 );
  FUNC_1( VAR_1, 8, VAR_9 >= -512 && VAR_9 <= 512, "out of range" );

  FUNC_3( VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
   VAR_7, VAR_8, VAR_9 );

  return 0;
}
