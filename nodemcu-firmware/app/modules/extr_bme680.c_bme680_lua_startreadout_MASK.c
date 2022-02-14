
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
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int VAR_9 ;
 int FUNC_7 (int *,scalar_t__,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static int FUNC_11(lua_State* VAR_10) {
 uint32_t VAR_11;

 if (FUNC_5(VAR_10, 1)) {
  VAR_11 = FUNC_2(VAR_10, 1);
  if (!VAR_11) {VAR_11 = FUNC_1();}
 }

 if (!FUNC_4(VAR_10, 2)) {
  FUNC_6(VAR_10, 2);
  VAR_8 = FUNC_3(VAR_10, VAR_4);
 } else {
  VAR_8 = VAR_3;
 }

  FUNC_10(VAR_0, VAR_9);
  FUNC_10(VAR_1, (VAR_6 & 0xFC) | VAR_2);

 FUNC_0("control old: %x, control: %x, delay: %d\n", VAR_6, (VAR_6 & 0xFC) | VAR_2, VAR_11);

 if (VAR_8 != VAR_3) {
  FUNC_0("timer armed\n");
  FUNC_8 (&VAR_7);
  FUNC_9 (&VAR_7, (os_timer_func_t *)VAR_5, VAR_10);
  FUNC_7 (&VAR_7, VAR_11, 0);
 }
 return 0;
}
