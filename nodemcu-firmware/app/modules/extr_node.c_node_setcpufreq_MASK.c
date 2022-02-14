
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int lua_State ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_7(lua_State* VAR_2)
{

  uint32_t VAR_3 = FUNC_5(VAR_2, 1);
  if (VAR_3 == VAR_0){
    FUNC_2(0x3ff00014, FUNC_0(0));
    FUNC_4(VAR_0);
  } else {
    FUNC_1(0x3ff00014, FUNC_0(0));
    FUNC_4(VAR_1);
  }
  VAR_3 = FUNC_3();
  FUNC_6(VAR_2, VAR_3);
  return 1;
}
