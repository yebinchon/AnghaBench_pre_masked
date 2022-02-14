
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int size; scalar_t__ ptr; } ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (struct buffer*) ;
 int FUNC_1 (struct buffer*) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int,size_t*) ;
 int FUNC_4 (int *,char*) ;
 char* FUNC_5 (int *,int,size_t*) ;
 int FUNC_6 (int *,char const*,int ) ;
 int FUNC_7 (struct buffer*) ;
 int FUNC_8 (struct buffer*,char const*,int) ;
 int FUNC_9 (struct buffer*,int) ;
 int FUNC_10 (struct buffer*,int ,int) ;
 int FUNC_11 (struct buffer*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_12(lua_State *VAR_1) {
 int VAR_2 = FUNC_2(VAR_1, 1);
 size_t VAR_3 = 0;
 const char * VAR_4 = FUNC_3(VAR_1,2,&VAR_3);
 int VAR_5 = FUNC_2(VAR_1, 3);
 size_t VAR_6 = 0;
 const char * VAR_7 = FUNC_5(VAR_1, 4, &VAR_6);
 if (VAR_6 != 8) {
  return FUNC_4(VAR_1, "Invalid cursor id");
 }

 struct buffer VAR_8;
 FUNC_0(&VAR_8);
  int VAR_9 = FUNC_7(&VAR_8);
  FUNC_9(&VAR_8, VAR_2);
  FUNC_9(&VAR_8, 0);
  FUNC_9(&VAR_8, VAR_0);
  FUNC_9(&VAR_8, 0);
  FUNC_11(&VAR_8, VAR_4, VAR_3);
  FUNC_9(&VAR_8, VAR_5);
  FUNC_8(&VAR_8, VAR_7, 8);
  FUNC_10(&VAR_8, VAR_8.size, VAR_9);

  FUNC_6(VAR_1, (const char *)VAR_8.ptr, VAR_8.size);
 FUNC_1(&VAR_8);

 return 1;
}
