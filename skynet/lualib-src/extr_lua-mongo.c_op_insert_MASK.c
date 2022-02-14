
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int size; scalar_t__ ptr; } ;
typedef int lua_State ;
typedef int luaL_Buffer ;
typedef scalar_t__ document ;


 int VAR_0 ;
 int FUNC_0 (struct buffer*) ;
 int FUNC_1 (struct buffer*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,char const*,int) ;
 int FUNC_5 (int *,int *) ;
 char* FUNC_6 (int *,int,size_t*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 scalar_t__ FUNC_13 (int *,int) ;
 int FUNC_14 (struct buffer*) ;
 int FUNC_15 (struct buffer*,int ) ;
 int FUNC_16 (struct buffer*,int,int) ;
 int FUNC_17 (struct buffer*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_18(lua_State *VAR_1) {
 size_t VAR_2 = 0;
 const char * VAR_3 = FUNC_6(VAR_1,2,&VAR_2);
 int VAR_4 = FUNC_2(VAR_1);

 luaL_Buffer VAR_5;
 FUNC_5(VAR_1, &VAR_5);

 struct buffer VAR_6;
 FUNC_0(&VAR_6);

  int VAR_7 = FUNC_14(&VAR_6);
  FUNC_15(&VAR_6, 0);
  FUNC_15(&VAR_6, 0);
  FUNC_15(&VAR_6, VAR_0);
  FUNC_15(&VAR_6, FUNC_12(VAR_1,1));
  FUNC_17(&VAR_6, VAR_3, VAR_2);

  int VAR_8 = VAR_6.size + VAR_4;
  FUNC_16(&VAR_6, VAR_8, VAR_7);

  FUNC_4(&VAR_5, (const char *)VAR_6.ptr, VAR_6.size);
 FUNC_1(&VAR_6);

 if (FUNC_8(VAR_1,3)) {
  document VAR_9 = FUNC_13(VAR_1,3);
  FUNC_4(&VAR_5, (const char *)VAR_9, FUNC_3(VAR_9));
 } else {
  int VAR_10 = FUNC_11(VAR_1, 3);
  int VAR_11;
  for (VAR_11=1;VAR_11<=VAR_10;VAR_11++) {
   FUNC_10(VAR_1,3,VAR_11);
   document VAR_12 = FUNC_13(VAR_1,-1);
   FUNC_9(VAR_1,1);
   FUNC_4(&VAR_5, (const char *)VAR_12, FUNC_3(VAR_12));
  }
 }

 FUNC_7(&VAR_5);

 return 1;
}
