
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct read_block {int dummy; } ;
typedef int n ;
typedef int lua_State ;






 int VAR_0 ;



 int FUNC_0 (int *,struct read_block*,int) ;
 int FUNC_1 (int *,struct read_block*,int) ;
 int FUNC_2 (int *,struct read_block*) ;
 int FUNC_3 (int *,struct read_block*) ;
 int FUNC_4 (int *,struct read_block*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int*,int*,int) ;
 int* FUNC_11 (struct read_block*,int) ;
 int FUNC_12 (int *,struct read_block*,int) ;

__attribute__((used)) static void
FUNC_13(lua_State *VAR_1, struct read_block *VAR_2, int VAR_3, int VAR_4) {
 switch(VAR_3) {
 case 132:
  FUNC_8(VAR_1);
  break;
 case 134:
  FUNC_5(VAR_1,VAR_4);
  break;
 case 131:
  if (VAR_4 == VAR_0) {
   FUNC_9(VAR_1,FUNC_3(VAR_1,VAR_2));
  } else {
   FUNC_6(VAR_1, FUNC_1(VAR_1, VAR_2, VAR_4));
  }
  break;
 case 128:
  FUNC_7(VAR_1,FUNC_2(VAR_1,VAR_2));
  break;
 case 130:
  FUNC_0(VAR_1,VAR_2,VAR_4);
  break;
 case 133: {
  if (VAR_4 == 2) {
   uint16_t *VAR_5 = FUNC_11(VAR_2, 2);
   if (VAR_5 == ((void*)0)) {
    FUNC_4(VAR_1,VAR_2);
   }
   uint16_t VAR_6;
   FUNC_10(&VAR_6, VAR_5, sizeof(VAR_6));
   FUNC_0(VAR_1,VAR_2,VAR_6);
  } else {
   if (VAR_4 != 4) {
    FUNC_4(VAR_1,VAR_2);
   }
   uint32_t *VAR_7 = FUNC_11(VAR_2, 4);
   if (VAR_7 == ((void*)0)) {
    FUNC_4(VAR_1,VAR_2);
   }
   uint32_t VAR_8;
   FUNC_10(&VAR_8, VAR_7, sizeof(VAR_8));
   FUNC_0(VAR_1,VAR_2,VAR_8);
  }
  break;
 }
 case 129: {
  FUNC_12(VAR_1,VAR_2,VAR_4);
  break;
 }
 default: {
  FUNC_4(VAR_1,VAR_2);
  break;
 }
 }
}
