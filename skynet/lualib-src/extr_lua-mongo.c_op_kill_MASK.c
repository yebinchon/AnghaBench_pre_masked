
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int size; scalar_t__ ptr; } ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (struct buffer*) ;
 int FUNC_1 (struct buffer*) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,int,size_t*) ;
 int FUNC_4 (int *,char const*,int ) ;
 int FUNC_5 (struct buffer*) ;
 int FUNC_6 (struct buffer*,char const*,int) ;
 int FUNC_7 (struct buffer*,int) ;
 int FUNC_8 (struct buffer*,int ,int) ;

__attribute__((used)) static int
FUNC_9(lua_State *VAR_1) {
 size_t VAR_2 = 0;
 const char * VAR_3 = FUNC_3(VAR_1, 1, &VAR_2);
 if (VAR_2 != 8) {
  return FUNC_2(VAR_1, "Invalid cursor id");
 }

 struct buffer VAR_4;
 FUNC_0(&VAR_4);

 int VAR_5 = FUNC_5(&VAR_4);
 FUNC_7(&VAR_4, 0);
 FUNC_7(&VAR_4, 0);
 FUNC_7(&VAR_4, VAR_0);

 FUNC_7(&VAR_4, 0);
 FUNC_7(&VAR_4, 1);
 FUNC_6(&VAR_4, VAR_3, 8);

 FUNC_8(&VAR_4, VAR_4.size, VAR_5);

 FUNC_4(VAR_1, (const char *)VAR_4.ptr, VAR_4.size);
 FUNC_1(&VAR_4);

 return 1;
}
