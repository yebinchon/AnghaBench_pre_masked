
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int string_index; struct table* L; struct table* tbl; } ;
struct context {int string_index; struct context* L; struct context* tbl; } ;
typedef struct table lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct table*,struct table*) ;
 int FUNC_1 (struct table*) ;
 int FUNC_2 (struct table*,int,int ) ;
 struct table* FUNC_3 () ;
 int FUNC_4 (struct table*) ;
 int FUNC_5 (struct table*) ;
 int FUNC_6 (struct table*,int,int,int ) ;
 int FUNC_7 (struct table*,int ) ;
 int FUNC_8 (struct table*,struct table*) ;
 int FUNC_9 (struct table*,char*) ;
 int FUNC_10 (struct table*,char const*,size_t) ;
 char* FUNC_11 (struct table*,int,size_t*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct table*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_14(lua_State *VAR_3) {
 int VAR_4;
 struct context VAR_5;
 struct table * VAR_6 = ((void*)0);
 FUNC_2(VAR_3,1,VAR_1);
 VAR_5.L = FUNC_3();
 VAR_5.tbl = ((void*)0);
 VAR_5.string_index = 1;
 if (VAR_5.L == ((void*)0)) {
  FUNC_9(VAR_3, "memory error");
  goto error;
 }
 VAR_6 = (struct table *)FUNC_12(sizeof(struct table));
 if (VAR_6 == ((void*)0)) {

  FUNC_4(VAR_5.L);
  VAR_5.L = ((void*)0);
  FUNC_9(VAR_3, "memory error");
  goto error;
 }
 FUNC_13(VAR_6, 0, sizeof(struct table));
 VAR_5.tbl = VAR_6;

 FUNC_7(VAR_5.L, VAR_2);
 FUNC_8(VAR_5.L , &VAR_5);
 FUNC_8(VAR_5.L , VAR_3);

 VAR_4 = FUNC_6(VAR_5.L, 2, 1, 0);

 if (VAR_4 != VAR_0) {
  size_t VAR_7 = 0;
  const char * VAR_8 = FUNC_11(VAR_5.L, -1, &VAR_7);
  FUNC_10(VAR_3, VAR_8, VAR_7);
  goto error;
 }

 FUNC_0(&VAR_5, VAR_6);

 FUNC_8(VAR_3, VAR_6);

 return 1;
error:
 if (VAR_5.L) {
  FUNC_4(VAR_5.L);
 }
 if (VAR_6) {
  FUNC_1(VAR_6);
 }
 FUNC_5(VAR_3);
 return -1;
}
