
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (double) ;
 int FUNC_1 (int ,char*,int ,double,double) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,double) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int) ;
 double FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 scalar_t__ FUNC_14 (int *,int) ;
 int FUNC_15 (int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_16(lua_State *VAR_3) {
 if (FUNC_4(VAR_3) != 0) {
  FUNC_11(VAR_3,1);
  FUNC_2(VAR_3, 1, VAR_1);
 } else {
  FUNC_7(VAR_3);
 }
 FUNC_8(VAR_3, 1);
 FUNC_9(VAR_3, FUNC_15(1));
 if (FUNC_14(VAR_3, -1) != VAR_0) {
  return FUNC_3(VAR_3, "Call profile.start() before profile.stop()");
 }
 double VAR_4 = FUNC_0(FUNC_12(VAR_3, -1));
 FUNC_8(VAR_3, 1);
 FUNC_9(VAR_3, FUNC_15(2));
 double VAR_5 = FUNC_12(VAR_3, -1);

 FUNC_8(VAR_3, 1);
 FUNC_5(VAR_3);
 FUNC_10(VAR_3, FUNC_15(1));

 FUNC_8(VAR_3, 1);
 FUNC_5(VAR_3);
 FUNC_10(VAR_3, FUNC_15(2));

 VAR_5 += VAR_4;
 FUNC_6(VAR_3, VAR_5);




 return 1;
}
