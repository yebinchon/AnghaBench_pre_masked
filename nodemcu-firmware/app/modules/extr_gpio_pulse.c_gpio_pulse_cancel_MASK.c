
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pulse_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(lua_State *VAR_5) {
  pulse_t *VAR_6 = FUNC_1(VAR_5, 1, "gpio.pulse");

  if (VAR_3 != VAR_6) {
    return 0;
  }


  FUNC_3(VAR_2);

  int VAR_7 = FUNC_0(VAR_5, VAR_3);

  VAR_3 = ((void*)0);

  int VAR_8 = VAR_4;
  VAR_4 = VAR_0;
  FUNC_2(VAR_5, VAR_1, VAR_8);

  return VAR_7;
}
