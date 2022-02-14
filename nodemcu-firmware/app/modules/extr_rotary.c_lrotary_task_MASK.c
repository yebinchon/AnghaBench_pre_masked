
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ os_param_t ;
typedef int lua_State ;
typedef int DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int ** VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(os_param_t VAR_5, uint8_t VAR_6)
{
  (void) VAR_5;
  (void) VAR_6;

  uint8_t *VAR_7 = (uint8_t*) VAR_5;
  if (VAR_7) {

    *VAR_7 = 0;
  }

  int VAR_8;
  bool VAR_9 = VAR_0;
  lua_State *VAR_10 = FUNC_1();

  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
    DATA *VAR_11 = VAR_3[VAR_8];
    if (VAR_11) {
      if (FUNC_0(VAR_10, VAR_11)) {
 VAR_9 = VAR_2;
      }
    }
  }

  if (VAR_9) {

    FUNC_2(VAR_4, 0);
  }
}
