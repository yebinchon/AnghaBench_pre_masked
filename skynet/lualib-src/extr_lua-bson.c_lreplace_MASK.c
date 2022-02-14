
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bson {int member_1; int * member_2; int member_0; } ;
typedef int lua_State ;
typedef void* int64_t ;
typedef void* int32_t ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 void* FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int * FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int,struct bson*) ;
 int FUNC_13 (struct bson*,int ) ;
 int FUNC_14 (struct bson*,int ) ;
 int FUNC_15 (struct bson*,void*) ;
 int FUNC_16 (struct bson*,void*) ;

__attribute__((used)) static int
FUNC_17(lua_State *VAR_2) {
 FUNC_2(VAR_2,1);
 if (!FUNC_4(VAR_2,-1)) {
  return FUNC_1(VAR_2, "call makeindex first");
 }
 FUNC_5(VAR_2,2);
 if (FUNC_6(VAR_2, -2) != VAR_1) {
  return FUNC_1(VAR_2, "Can't replace key : %s", FUNC_10(VAR_2,2));
 }
 int VAR_3 = FUNC_8(VAR_2, -1);
 int VAR_4 = VAR_3 & ((1<<(VAR_0)) - 1);
 int VAR_5 = VAR_3 >> VAR_0;
 uint8_t * VAR_6 = FUNC_11(VAR_2,1);
 struct bson VAR_7 = { 0,16, *(VAR_6 + VAR_5) };
 switch (VAR_4) {
 case 129:
  FUNC_14(&VAR_7, FUNC_0(VAR_2, 3));
  break;
 case 134:
  FUNC_13(&VAR_7, FUNC_7(VAR_2,3));
  break;
 case 130:
 case 133:
 case 128:
  FUNC_12(VAR_2, VAR_4, &VAR_7);
  break;
 case 132: {
  if (!FUNC_3(VAR_2, 3)) {
   FUNC_1(VAR_2, "%f must be a 32bit integer ", FUNC_9(VAR_2, 3));
  }
  int32_t VAR_8 = FUNC_8(VAR_2,3);
  FUNC_15(&VAR_7, VAR_8);
  break;
 }
 case 131: {
  if (!FUNC_3(VAR_2, 3)) {
   FUNC_1(VAR_2, "%f must be a 64bit integer ", FUNC_9(VAR_2, 3));
  }
  int64_t VAR_9 = FUNC_8(VAR_2,3);
  FUNC_16(&VAR_7, VAR_9);
  break;
 }
 default:
  FUNC_1(VAR_2, "Can't replace type %d", VAR_4);
  break;
 }
 return 0;
}
