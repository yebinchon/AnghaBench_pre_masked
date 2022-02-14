
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int lua_State ;


 int FUNC_0 (int *,int,int,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4( lua_State* VAR_0 )
{
  uint8 VAR_1=FUNC_1(VAR_0, 1);
  FUNC_0(VAR_0, (VAR_1 >= 1 && VAR_1 <= 5), 1, "Valid range: 1-5");
  FUNC_2(VAR_0, FUNC_3(VAR_1-1));
  return 1;
}
