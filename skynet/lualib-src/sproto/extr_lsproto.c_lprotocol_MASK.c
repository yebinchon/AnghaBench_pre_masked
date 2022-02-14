
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sproto_type {int dummy; } ;
struct sproto {int dummy; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct sproto_type*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,int) ;
 char* FUNC_6 (int *,int) ;
 struct sproto* FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 char* FUNC_9 (struct sproto*,int) ;
 struct sproto_type* FUNC_10 (struct sproto*,int,int ) ;
 scalar_t__ FUNC_11 (struct sproto*,int) ;
 int FUNC_12 (struct sproto*,char const*) ;

__attribute__((used)) static int
FUNC_13(lua_State *VAR_3) {
 struct sproto * VAR_4 = FUNC_7(VAR_3, 1);
 struct sproto_type * VAR_5;
 struct sproto_type * VAR_6;
 int VAR_7;
 int VAR_8;
 if (VAR_4 == ((void*)0)) {
  return FUNC_0(VAR_3, 1, "Need a sproto_type object");
 }
 VAR_7 = FUNC_8(VAR_3,2);
 if (VAR_7 == VAR_0) {
  const char * VAR_9;
  VAR_8 = FUNC_5(VAR_3, 2);
  VAR_9 = FUNC_9(VAR_4, VAR_8);
  if (VAR_9 == ((void*)0))
   return 0;
  FUNC_4(VAR_3, VAR_9);
 } else {
  const char * VAR_10 = FUNC_6(VAR_3, 2);
  if (VAR_10 == ((void*)0)) {
   return FUNC_0(VAR_3, 2, "Should be number or string");
  }
  VAR_8 = FUNC_12(VAR_4, VAR_10);
  if (VAR_8 < 0)
   return 0;
  FUNC_1(VAR_3, VAR_8);
 }
 VAR_5 = FUNC_10(VAR_4, VAR_8, VAR_1);
 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_3);
 } else {
  FUNC_2(VAR_3, VAR_5);
 }
 VAR_6 = FUNC_10(VAR_4, VAR_8, VAR_2);
 if (VAR_6 == ((void*)0)) {
  if (FUNC_11(VAR_4, VAR_8)) {
   FUNC_2(VAR_3, ((void*)0));
  } else {
   FUNC_3(VAR_3);
  }
 } else {
  FUNC_2(VAR_3, VAR_6);
 }
 return 3;
}
