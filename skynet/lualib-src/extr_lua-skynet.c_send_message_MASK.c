
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct skynet_context {int dummy; } ;
typedef int lua_State ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,...) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int,size_t*) ;
 void* FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct skynet_context*,int,scalar_t__,int,int,void*,int) ;
 int FUNC_13 (struct skynet_context*,int,char const*,int,int,void*,int) ;

__attribute__((used)) static int
FUNC_14(lua_State *VAR_3, int VAR_4, int VAR_5) {
 struct skynet_context * VAR_6 = FUNC_8(VAR_3, FUNC_11(1));
 uint32_t VAR_7 = (uint32_t)FUNC_6(VAR_3, 1);
 const char * VAR_8 = ((void*)0);
 if (VAR_7 == 0) {
  if (FUNC_9(VAR_3,1) == VAR_0) {
   return FUNC_2(VAR_3, "Invalid service address 0");
  }
  VAR_8 = FUNC_0(VAR_3, 1);
 }

 int VAR_9 = FUNC_1(VAR_3, VAR_5+0);
 int VAR_10 = 0;
 if (FUNC_3(VAR_3,VAR_5+1)) {
  VAR_9 |= VAR_1;
 } else {
  VAR_10 = FUNC_1(VAR_3,VAR_5+1);
 }

 int VAR_11 = FUNC_9(VAR_3,VAR_5+2);
 switch (VAR_11) {
 case 128: {
  size_t VAR_12 = 0;
  void * VAR_13 = (void *)FUNC_7(VAR_3,VAR_5+2,&VAR_12);
  if (VAR_12 == 0) {
   VAR_13 = ((void*)0);
  }
  if (VAR_8) {
   VAR_10 = FUNC_13(VAR_6, VAR_4, VAR_8, VAR_9, VAR_10 , VAR_13, VAR_12);
  } else {
   VAR_10 = FUNC_12(VAR_6, VAR_4, VAR_7, VAR_9, VAR_10 , VAR_13, VAR_12);
  }
  break;
 }
 case 129: {
  void * VAR_14 = FUNC_8(VAR_3,VAR_5+2);
  int VAR_15 = FUNC_1(VAR_3,VAR_5+3);
  if (VAR_8) {
   VAR_10 = FUNC_13(VAR_6, VAR_4, VAR_8, VAR_9 | VAR_2, VAR_10, VAR_14, VAR_15);
  } else {
   VAR_10 = FUNC_12(VAR_6, VAR_4, VAR_7, VAR_9 | VAR_2, VAR_10, VAR_14, VAR_15);
  }
  break;
 }
 default:
  FUNC_2(VAR_3, "invalid param %s", FUNC_10(VAR_3, FUNC_9(VAR_3,VAR_5+2)));
 }
 if (VAR_10 < 0) {
  if (VAR_10 == -2) {

   FUNC_4(VAR_3, 0);
   return 1;
  }


  return 0;
 }
 FUNC_5(VAR_3,VAR_10);
 return 1;
}
