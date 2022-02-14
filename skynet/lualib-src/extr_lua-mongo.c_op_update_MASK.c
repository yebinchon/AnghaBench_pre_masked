
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
 char* FUNC_5 (int *,int,size_t*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int * FUNC_9 (int *,int) ;
 int FUNC_10 (struct buffer*) ;
 int FUNC_11 (struct buffer*,int ) ;
 int FUNC_12 (struct buffer*,int,int) ;
 int FUNC_13 (struct buffer*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_14(lua_State *VAR_1) {
 document VAR_2 = FUNC_9(VAR_1,3);
 document VAR_3 = FUNC_9(VAR_1,4);
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
  FUNC_6(VAR_1, "Invalid param");
 }
 size_t VAR_4 = 0;
 const char * VAR_5 = FUNC_5(VAR_1,1,&VAR_4);

 luaL_Buffer VAR_6;
 FUNC_4(VAR_1, &VAR_6);

 struct buffer VAR_7;
 FUNC_0(&VAR_7);

  int VAR_8 = FUNC_10(&VAR_7);
  FUNC_11(&VAR_7, 0);
  FUNC_11(&VAR_7, 0);
  FUNC_11(&VAR_7, VAR_0);
  FUNC_11(&VAR_7, 0);
  FUNC_13(&VAR_7, VAR_5, VAR_4);
  FUNC_11(&VAR_7, FUNC_8(VAR_1,2));

  int32_t VAR_9 = FUNC_2(VAR_2);
  int32_t VAR_10 = FUNC_2(VAR_3);

  int VAR_11 = VAR_7.size + VAR_9 + VAR_10;
  FUNC_12(&VAR_7, VAR_11, VAR_8);

  FUNC_3(&VAR_6, (const char *)VAR_7.ptr, VAR_7.size);
 FUNC_1(&VAR_7);

 FUNC_3(&VAR_6, (const char *)VAR_2, VAR_9);
 FUNC_3(&VAR_6, (const char *)VAR_3, VAR_10);

 FUNC_7(&VAR_6);

 return 1;
}
