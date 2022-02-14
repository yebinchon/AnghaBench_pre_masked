
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tmr_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static tmr_t FUNC_2( lua_State *VAR_0, int VAR_1 ) {
 tmr_t VAR_2 = (tmr_t)FUNC_0(VAR_0, VAR_1, "tmr.timer");
 if (VAR_2 == ((void*)0))
  return (tmr_t)FUNC_1(VAR_0, "timer object expected");
 return VAR_2;
}
