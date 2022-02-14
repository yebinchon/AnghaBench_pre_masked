
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32 ;
typedef int lua_State ;
typedef int init_data ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int*,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int,int*,int) ;
 char FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7( lua_State *VAR_2 )
{
  uint8_t VAR_3 = FUNC_4 (VAR_2, 1);

  uint32 VAR_4 = FUNC_2 () - 4;


  char VAR_5[VAR_1] __attribute__((aligned(4)));

  if (VAR_0 != FUNC_1 (
    VAR_4 * VAR_1,
    (uint32 *)VAR_5, sizeof(VAR_5)))
      return FUNC_5(VAR_2, "flash read error");


  if (VAR_5[107] == VAR_3)
  {
    FUNC_6 (VAR_2, 0);
    return 1;
  }


  VAR_5[107] = VAR_3;
  if (VAR_0 != FUNC_0 (VAR_4))
    return FUNC_5(VAR_2, "flash erase error");

  if (VAR_0 != FUNC_3 (
    VAR_4 * VAR_1,
    (uint32 *)VAR_5, sizeof(VAR_5)))
      return FUNC_5(VAR_2, "flash write error");

  FUNC_6 (VAR_2, 1);
  return 1;
}
