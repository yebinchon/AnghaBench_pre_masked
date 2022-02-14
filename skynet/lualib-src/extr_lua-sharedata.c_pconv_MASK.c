
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {scalar_t__ string_index; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,struct context*) ;
 int FUNC_6 (int *,char const*,size_t) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 char* FUNC_9 (int *,int,size_t*) ;
 void* FUNC_10 (int *,int) ;

__attribute__((used)) static int
FUNC_11(lua_State *VAR_2) {
 struct context *VAR_3 = FUNC_10(VAR_2,1);
 lua_State * VAR_4 = FUNC_10(VAR_2, 2);
 int VAR_5;

 FUNC_8(VAR_2, 0);



 FUNC_2(VAR_2);

 FUNC_4(VAR_4, VAR_1);
 FUNC_7(VAR_4,1);
 FUNC_5(VAR_4, VAR_3);

 VAR_5 = FUNC_3(VAR_4, 2, 0, 0);
 if (VAR_5 != VAR_0) {
  size_t VAR_6 = 0;
  const char * VAR_7 = FUNC_9(VAR_4, -1, &VAR_6);
  FUNC_6(VAR_2, VAR_7, VAR_6);
  FUNC_1(VAR_2);

 }

 FUNC_0(VAR_2, VAR_3->string_index + 3, ((void*)0));
 FUNC_8(VAR_2,1);

 return 1;
}
