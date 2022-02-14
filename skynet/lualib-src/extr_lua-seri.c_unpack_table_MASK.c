
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int type ;
struct read_block {int dummy; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct read_block*,int) ;
 int FUNC_1 (int *,struct read_block*) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int,int ) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int,int) ;
 int* FUNC_8 (struct read_block*,int) ;
 int FUNC_9 (int *,struct read_block*) ;

__attribute__((used)) static void
FUNC_10(lua_State *VAR_4, struct read_block *VAR_5, int VAR_6) {
 if (VAR_6 == VAR_1-1) {
  uint8_t VAR_7;
  uint8_t *VAR_8 = FUNC_8(VAR_5, sizeof(VAR_7));
  if (VAR_8==((void*)0)) {
   FUNC_1(VAR_4,VAR_5);
  }
  VAR_7 = *VAR_8;
  int VAR_9 = VAR_7 >> 3;
  if ((VAR_7 & 7) != VAR_2 || VAR_9 == VAR_3) {
   FUNC_1(VAR_4,VAR_5);
  }
  VAR_6 = FUNC_0(VAR_4,VAR_5,VAR_9);
 }
 FUNC_2(VAR_4,VAR_0,((void*)0));
 FUNC_3(VAR_4,VAR_6,0);
 int VAR_10;
 for (VAR_10=1;VAR_10<=VAR_6;VAR_10++) {
  FUNC_9(VAR_4,VAR_5);
  FUNC_7(VAR_4,-2,VAR_10);
 }
 for (;;) {
  FUNC_9(VAR_4,VAR_5);
  if (FUNC_4(VAR_4,-1)) {
   FUNC_5(VAR_4,1);
   return;
  }
  FUNC_9(VAR_4,VAR_5);
  FUNC_6(VAR_4,-3);
 }
}
