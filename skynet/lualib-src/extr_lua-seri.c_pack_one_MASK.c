
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_block {int dummy; } ;
typedef int lua_State ;
typedef int lua_Number ;
typedef int lua_Integer ;
 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 char* FUNC_5 (int *,int,size_t*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct write_block*,int ) ;
 int FUNC_11 (struct write_block*) ;
 int FUNC_12 (struct write_block*,int ) ;
 int FUNC_13 (struct write_block*) ;
 int FUNC_14 (struct write_block*,int ) ;
 int FUNC_15 (struct write_block*,int ) ;
 int FUNC_16 (struct write_block*,char const*,int) ;
 int FUNC_17 (int *,struct write_block*,int,int) ;

__attribute__((used)) static void
FUNC_18(lua_State *VAR_1, struct write_block *VAR_2, int VAR_3, int VAR_4) {
 if (VAR_4 > VAR_0) {
  FUNC_11(VAR_2);
  FUNC_0(VAR_1, "serialize can't pack too depth table");
 }
 int VAR_5 = FUNC_8(VAR_1,VAR_3);
 switch(VAR_5) {
 case 131:
  FUNC_13(VAR_2);
  break;
 case 130: {
  if (FUNC_2(VAR_1, VAR_3)) {
   lua_Integer VAR_6 = FUNC_4(VAR_1,VAR_3);
   FUNC_12(VAR_2, VAR_6);
  } else {
   lua_Number VAR_7 = FUNC_6(VAR_1,VAR_3);
   FUNC_15(VAR_2,VAR_7);
  }
  break;
 }
 case 133:
  FUNC_10(VAR_2, FUNC_3(VAR_1,VAR_3));
  break;
 case 129: {
  size_t VAR_8 = 0;
  const char *VAR_9 = FUNC_5(VAR_1,VAR_3,&VAR_8);
  FUNC_16(VAR_2, VAR_9, (int)VAR_8);
  break;
 }
 case 132:
  FUNC_14(VAR_2, FUNC_7(VAR_1,VAR_3));
  break;
 case 128: {
  if (VAR_3 < 0) {
   VAR_3 = FUNC_1(VAR_1) + VAR_3 + 1;
  }
  FUNC_17(VAR_1, VAR_2, VAR_3, VAR_4+1);
  break;
 }
 default:
  FUNC_11(VAR_2);
  FUNC_0(VAR_1, "Unsupport type %s to serialize", FUNC_9(VAR_1, VAR_5));
 }
}
