
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
 if (VAR_2 == ((void*)0)) {
  FUNC_6(VAR_1, "Invalid param");
 }
 size_t VAR_3 = 0;
 const char * VAR_4 = FUNC_5(VAR_1,1,&VAR_3);

 luaL_Buffer VAR_5;
 FUNC_4(VAR_1,&VAR_5);

 struct buffer VAR_6;
 FUNC_0(&VAR_6);
  int VAR_7 = FUNC_10(&VAR_6);
  FUNC_11(&VAR_6, 0);
  FUNC_11(&VAR_6, 0);
  FUNC_11(&VAR_6, VAR_0);
  FUNC_11(&VAR_6, 0);
  FUNC_13(&VAR_6, VAR_4, VAR_3);
  FUNC_11(&VAR_6, FUNC_8(VAR_1,2));

  int32_t VAR_8 = FUNC_2(VAR_2);
  int VAR_9 = VAR_6.size + VAR_8;
  FUNC_12(&VAR_6, VAR_9, VAR_7);

  FUNC_3(&VAR_5, (const char *)VAR_6.ptr, VAR_6.size);
 FUNC_1(&VAR_6);

 FUNC_3(&VAR_5, (const char *)VAR_2, VAR_8);
 FUNC_7(&VAR_5);

 return 1;
}
