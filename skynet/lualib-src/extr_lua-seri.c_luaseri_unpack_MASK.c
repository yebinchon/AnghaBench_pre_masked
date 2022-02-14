
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int type ;
struct read_block {int dummy; } ;
typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int,size_t*) ;
 void* FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int *,struct read_block*,int,int) ;
 int* FUNC_10 (struct read_block*,int) ;
 int FUNC_11 (struct read_block*,void*,int) ;

int
FUNC_12(lua_State *VAR_2) {
 if (FUNC_4(VAR_2,1)) {
  return 0;
 }
 void * VAR_3;
 int VAR_4;
 if (FUNC_8(VAR_2,1) == VAR_1) {
  size_t VAR_5;
   VAR_3 = (void *)FUNC_6(VAR_2,1,&VAR_5);
  VAR_4 = (int)VAR_5;
 } else {
  VAR_3 = FUNC_7(VAR_2,1);
  VAR_4 = FUNC_0(VAR_2,2);
 }
 if (VAR_4 == 0) {
  return 0;
 }
 if (VAR_3 == ((void*)0)) {
  return FUNC_2(VAR_2, "deserialize null pointer");
 }

 FUNC_5(VAR_2,1);
 struct read_block VAR_6;
 FUNC_11(&VAR_6, VAR_3, VAR_4);

 int VAR_7;
 for (VAR_7=0;;VAR_7++) {
  if (VAR_7%8==7) {
   FUNC_1(VAR_2,VAR_0,((void*)0));
  }
  uint8_t VAR_8 = 0;
  uint8_t *VAR_9 = FUNC_10(&VAR_6, sizeof(VAR_8));
  if (VAR_9==((void*)0))
   break;
  VAR_8 = *VAR_9;
  FUNC_9(VAR_2, &VAR_6, VAR_8 & 0x7, VAR_8>>3);
 }



 return FUNC_3(VAR_2) - 1;
}
