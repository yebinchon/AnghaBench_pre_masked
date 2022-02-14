
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(lua_State* VAR_14) {


 if (!FUNC_2(VAR_14, 1)) {
  return FUNC_1(VAR_14, "wrong arg range");
 }

 VAR_13 = FUNC_0(VAR_14, 1);
 if (!((VAR_13 == VAR_9) || (VAR_13 == VAR_6) || (VAR_13 == VAR_7) || (VAR_13 == VAR_8))) {
  return FUNC_1(VAR_14, "Invalid argument: resolution");
 }

 VAR_10 = (VAR_13 | 0x3A);
 FUNC_5(VAR_3,VAR_10);


 if (FUNC_2(VAR_14, 2)) {

  if (!FUNC_2(VAR_14, 2) || !FUNC_2(VAR_14, 3)) {
   return FUNC_1(VAR_14, "wrong arg range");
  }

  VAR_11 = FUNC_0(VAR_14, 2);
  if (!((VAR_11 == VAR_5) || (VAR_11 == VAR_4))) {
   return FUNC_1(VAR_14, "Invalid argument: heater");
  }

  VAR_12 = FUNC_0(VAR_14, 3);
  if ((VAR_12 < 0x00) || (VAR_12 > 0x0F)) {
   return FUNC_1(VAR_14, "Invalid argument: heater_setting");
  }

  VAR_10 = (VAR_13 | VAR_11 | 0x3A);
  FUNC_5(VAR_3,VAR_10);
  FUNC_5(VAR_2,(VAR_12 & 0x0F));
 }

 uint8_t VAR_15[1];
 uint8_t VAR_16[1];
 FUNC_4(VAR_1, VAR_15, 1);
 FUNC_4(VAR_0, VAR_16, 1);

 FUNC_3(VAR_14, ((VAR_15[0] >> 6) + (VAR_15[0] & 0x01)));
 FUNC_3(VAR_14, ((VAR_15[0] >> 6) & 0x01));
 FUNC_3(VAR_14, ((VAR_15[0] >> 2) & 0x01));
 FUNC_3(VAR_14, (VAR_16[0] & 0x0F));

 return 4;
}
