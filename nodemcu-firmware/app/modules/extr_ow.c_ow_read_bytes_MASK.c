
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ u32 ;
typedef int lua_State ;
typedef int luaL_Buffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int,int,char*) ;
 int FUNC_3 (int *,int *) ;
 unsigned int FUNC_4 (int *,int) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (unsigned int,int *,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_8( lua_State *VAR_2 )
{
  unsigned VAR_3 = FUNC_4( VAR_2, 1 );
  FUNC_0( VAR_1, VAR_3 );
  u32 VAR_4 = ( u32 )FUNC_4( VAR_2, 2 );
  if( VAR_4 == 0 )
    return 0;

  FUNC_2(VAR_2, VAR_4 <= VAR_0, 2, "Attempt to read too many characters");

  luaL_Buffer VAR_5;
  FUNC_3( VAR_2, &VAR_5 );
  char *VAR_6 = FUNC_5(&VAR_5);

  FUNC_7(VAR_3, (uint8_t *)VAR_6, VAR_4);

  FUNC_1(&VAR_5, VAR_4);
  FUNC_6( &VAR_5 );
  return 1;
}
