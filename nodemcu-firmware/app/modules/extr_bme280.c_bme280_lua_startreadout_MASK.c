
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int os_timer_func_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,scalar_t__,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static int FUNC_10(lua_State* VAR_11) {
 uint32_t VAR_12;

 if (FUNC_4(VAR_11, 1)) {
  VAR_12 = FUNC_1(VAR_11, 1);
  if (!VAR_12) {VAR_12 = VAR_3;}
 }

 if (!FUNC_3(VAR_11, 2)) {
  FUNC_5(VAR_11, 2);
  VAR_10 = FUNC_2(VAR_11, VAR_5);
 } else {
  VAR_10 = VAR_4;
 }

 FUNC_9(VAR_2, VAR_7);
 FUNC_9(VAR_1, (VAR_6 & 0xFC) | VAR_0);
 FUNC_0("control old: %x, control: %x, delay: %d\n", VAR_6, (VAR_6 & 0xFC) | VAR_0, VAR_12);

 if (VAR_10 != VAR_4) {
  FUNC_0("timer armed\n");
  FUNC_7 (&VAR_9);
  FUNC_8 (&VAR_9, (os_timer_func_t *)VAR_8, VAR_11);
  FUNC_6 (&VAR_9, VAR_12, 0);
 }
 return 0;
}
