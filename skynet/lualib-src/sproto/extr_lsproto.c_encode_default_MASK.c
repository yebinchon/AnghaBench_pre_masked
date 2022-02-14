
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sproto_arg {scalar_t__ index; int tagname; int * ud; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,char*) ;
 int FUNC_4 (struct sproto_arg const*,int) ;

__attribute__((used)) static int
FUNC_5(const struct sproto_arg *VAR_2) {
 lua_State *VAR_3 = VAR_2->ud;
 FUNC_1(VAR_3, VAR_2->tagname);
 if (VAR_2->index > 0) {
  FUNC_0(VAR_3);
  FUNC_4(VAR_2, 1);
  FUNC_3(VAR_3, -2, "__array");
  FUNC_2(VAR_3, -3);
  return VAR_1;
 } else {
  FUNC_4(VAR_2, 0);
  FUNC_2(VAR_3, -3);
  return VAR_0;
 }
}
