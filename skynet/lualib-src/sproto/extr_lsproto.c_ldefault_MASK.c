
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sproto_type {int dummy; } ;
typedef int lua_State ;
typedef int dummy ;


 int VAR_0 ;
 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 struct sproto_type* FUNC_5 (int *,int) ;
 int FUNC_6 (struct sproto_type*,void*,int,int ,int *) ;

__attribute__((used)) static int
FUNC_7(lua_State *VAR_1) {
 int VAR_2;

 char VAR_3[64];
 struct sproto_type * VAR_4 = FUNC_5(VAR_1, 1);
 if (VAR_4 == ((void*)0)) {
  return FUNC_0(VAR_1, 1, "Need a sproto_type object");
 }
 FUNC_2(VAR_1);
 VAR_2 = FUNC_6(VAR_4, VAR_3, sizeof(VAR_3), VAR_0, VAR_1);
 if (VAR_2<0) {

  int VAR_5 = sizeof(VAR_3) * 2;
  void * VAR_6 = FUNC_3(VAR_1, VAR_5);
  FUNC_1(VAR_1, -2);
  for (;;) {
   VAR_2 = FUNC_6(VAR_4, VAR_6, VAR_5, VAR_0, VAR_1);
   if (VAR_2 >= 0)
    break;
   VAR_5 *= 2;
   VAR_6 = FUNC_3(VAR_1, VAR_5);
   FUNC_4(VAR_1, -3);
  }
 }
 return 1;
}
