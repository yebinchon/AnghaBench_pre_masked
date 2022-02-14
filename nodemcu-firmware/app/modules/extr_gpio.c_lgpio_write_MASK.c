
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (int *,int,int,char*) ;
 unsigned int FUNC_2 (int *,int) ;
 int FUNC_3 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4( lua_State* VAR_3 )
{
  unsigned VAR_4 = FUNC_2( VAR_3, 1 );
  unsigned VAR_5 = FUNC_2( VAR_3, 2 );

  FUNC_0( VAR_2, VAR_4 );
  FUNC_1(VAR_3, VAR_5==VAR_0 || VAR_5==VAR_1, 2, "wrong level type" );

  FUNC_3(VAR_4, VAR_5);
  return 0;
}
