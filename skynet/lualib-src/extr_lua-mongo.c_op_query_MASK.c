
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int size; scalar_t__ ptr; } ;
typedef int lua_State ;
typedef int luaL_Buffer ;
typedef int int32_t ;
typedef int * document ;


 int VAR_0 ;
 int FUNC_0 (struct buffer*) ;
 int FUNC_1 (struct buffer*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int) ;
 char* FUNC_6 (int *,int,size_t*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,int) ;
 int FUNC_10 (struct buffer*) ;
 int FUNC_11 (struct buffer*,int) ;
 int FUNC_12 (struct buffer*,int,int) ;
 int FUNC_13 (struct buffer*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_14(lua_State *VAR_1) {
 int VAR_2 = FUNC_5(VAR_1,1);
 document VAR_3 = FUNC_9(VAR_1,6);
 if (VAR_3 == ((void*)0)) {
  return FUNC_7(VAR_1, "require query document");
 }
 document VAR_4 = FUNC_9(VAR_1,7);
 int VAR_5 = FUNC_5(VAR_1, 2);
 size_t VAR_6 = 0;
 const char *VAR_7 = FUNC_6(VAR_1,3,&VAR_6);
 int VAR_8 = FUNC_5(VAR_1, 4);
 int VAR_9 = FUNC_5(VAR_1, 5);

 luaL_Buffer VAR_10;
 FUNC_4(VAR_1,&VAR_10);

 struct buffer VAR_11;
 FUNC_0(&VAR_11);
  int VAR_12 = FUNC_10(&VAR_11);
  FUNC_11(&VAR_11, VAR_2);
  FUNC_11(&VAR_11, 0);
  FUNC_11(&VAR_11, VAR_0);
  FUNC_11(&VAR_11, VAR_5);
  FUNC_13(&VAR_11, VAR_7, VAR_6);
  FUNC_11(&VAR_11, VAR_8);
  FUNC_11(&VAR_11, VAR_9);

  int32_t VAR_13 = FUNC_2(VAR_3);
  int VAR_14 = VAR_11.size + VAR_13;
  int32_t VAR_15 = 0;
  if (VAR_4) {
   VAR_15 = FUNC_2(VAR_4);
   VAR_14 += VAR_15;
  }

  FUNC_12(&VAR_11, VAR_14, VAR_12);
  FUNC_3(&VAR_10, (const char *)VAR_11.ptr, VAR_11.size);
 FUNC_1(&VAR_11);

 FUNC_3(&VAR_10, (const char *)VAR_3, VAR_13);

 if (VAR_4) {
  FUNC_3(&VAR_10, (const char *)VAR_4, VAR_15);
 }

 FUNC_8(&VAR_10);

 return 1;
}
