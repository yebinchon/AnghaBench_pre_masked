
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char const*,size_t) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

bool FUNC_4(const char *VAR_4, size_t VAR_5){
  if(!VAR_4 || VAR_5==0)
    return 0;
  if(VAR_3 == VAR_0)
    return 0;
  lua_State *VAR_6 = FUNC_1();
  if(!VAR_6)
    return 0;
  FUNC_3(VAR_6, VAR_1, VAR_3);
  FUNC_2(VAR_6, VAR_4, VAR_5);
  FUNC_0(VAR_6, 1, 0);
  return !VAR_2;
}
