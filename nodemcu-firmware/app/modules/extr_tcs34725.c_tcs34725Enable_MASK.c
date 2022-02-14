
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int os_timer_func_t ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (int ,int ) ;
 int VAR_9 ;

uint8_t FUNC_10(lua_State* VAR_10)
{
 FUNC_0("Enable begun\n");

 if (FUNC_5(VAR_10, 1) == VAR_2 || FUNC_5(VAR_10, 1) == VAR_3) {
  if (VAR_7 != VAR_0) {
   FUNC_3(VAR_10, VAR_1, VAR_7);
  }
  FUNC_4(VAR_10, 1);
  VAR_7 = FUNC_2(VAR_10, VAR_1);
 } else {
  return FUNC_1(VAR_10, "Enable argument must be a function.");
 }

 FUNC_9(VAR_4, VAR_5);

 FUNC_7 (&VAR_9);
 FUNC_8 (&VAR_9, (os_timer_func_t *)VAR_8, ((void*)0));
 FUNC_6 (&VAR_9, VAR_6, 0);

 return 0;
}
