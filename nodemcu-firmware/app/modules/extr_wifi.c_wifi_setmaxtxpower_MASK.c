
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int,int,char*) ;
 unsigned int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3( lua_State* VAR_0 )
{
  unsigned VAR_1;
  VAR_1 = FUNC_1( VAR_0, 1 );
  FUNC_0(VAR_0, (VAR_1 > 0 && VAR_1 < 83), 1, "tx power out of range (0->82)");

  FUNC_2( (uint8_t) VAR_1);
  return 1;
}
