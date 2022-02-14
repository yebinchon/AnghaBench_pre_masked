
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *) ;
 double FUNC_1 () ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,double) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_14(lua_State *VAR_2) {
 if (FUNC_4(VAR_2) != 0) {
  FUNC_11(VAR_2,1);
  FUNC_2(VAR_2, 1, VAR_0);
 } else {
  FUNC_7(VAR_2);
 }
 FUNC_8(VAR_2, 1);
 FUNC_9(VAR_2, FUNC_13(2));
 if (!FUNC_5(VAR_2, -1)) {
  return FUNC_3(VAR_2, "Thread %p start profile more than once", FUNC_12(VAR_2, 1));
 }
 FUNC_8(VAR_2, 1);
 FUNC_6(VAR_2, 0);
 FUNC_10(VAR_2, FUNC_13(2));

 FUNC_8(VAR_2, 1);
 double VAR_3 = FUNC_1();



 FUNC_6(VAR_2, VAR_3);
 FUNC_10(VAR_2, FUNC_13(1));

 return 0;
}
