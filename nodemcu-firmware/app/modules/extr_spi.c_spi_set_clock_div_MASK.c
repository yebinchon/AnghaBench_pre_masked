
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef int lua_State ;


 int FUNC_0 (int ,int) ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,void*) ;
 int VAR_0 ;
 void* FUNC_3 (int,void*) ;

__attribute__((used)) static int FUNC_4( lua_State *VAR_1 )
{
  int VAR_2 = FUNC_1( VAR_1, 1 );

  FUNC_0( VAR_0, VAR_2 );

  u32 VAR_3 = FUNC_1( VAR_1, 2 );

  u32 VAR_4 = FUNC_3(VAR_2, VAR_3);

  FUNC_2( VAR_1, VAR_4 );

  return 1;
}
