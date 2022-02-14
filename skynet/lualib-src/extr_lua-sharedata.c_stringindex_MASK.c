
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {int string_index; int * L; } ;
typedef int lua_State ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char const*,size_t) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int
FUNC_8(struct context *VAR_0, const char * VAR_1, size_t VAR_2) {
 lua_State *VAR_3 = VAR_0->L;
 FUNC_3(VAR_3, VAR_1, VAR_2);
 FUNC_4(VAR_3, -1);
 FUNC_5(VAR_3, 1);
 int VAR_4;

 if (FUNC_0(VAR_3, -1)) {
  VAR_4 = ++VAR_0->string_index;
  FUNC_1(VAR_3, 1);
  FUNC_2(VAR_3, VAR_4);
  FUNC_6(VAR_3, 1);
 } else {
  VAR_4 = FUNC_7(VAR_3, -1);
  FUNC_1(VAR_3, 2);
 }
 return VAR_4;
}
