
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int lua_State ;


 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6( lua_State *VAR_1 )
{
  int VAR_2 = 0;
  unsigned VAR_3 = FUNC_1( VAR_1, 1 );
  FUNC_0( VAR_0, VAR_3 );

  int VAR_4 = (int)FUNC_1( VAR_1, 2 );
  if( VAR_4 > 255 )
    return FUNC_2( VAR_1, "wrong arg range" );
  if(FUNC_3(VAR_1, 3))
    VAR_2 = FUNC_4(VAR_1, 3);
  if(VAR_2!=0)
    VAR_2 = 1;

  FUNC_5((uint8_t)VAR_3, (uint8_t)VAR_4, (uint8_t)VAR_2);

  return 0;
}
