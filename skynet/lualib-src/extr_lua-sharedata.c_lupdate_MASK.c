
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int dummy; } ;
struct ctrl {struct table* update; struct table* root; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 void* FUNC_4 (int *,int) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_3) {
 FUNC_0(VAR_3, 1, VAR_2);
 FUNC_0(VAR_3, 2, VAR_0);
 FUNC_0(VAR_3, 3, VAR_1);
 struct ctrl * VAR_4= FUNC_4(VAR_3, 1);
 struct table *VAR_5 = FUNC_4(VAR_3, 2);
 if (VAR_4->root == VAR_5) {
  return FUNC_1(VAR_3, "You should update a new object");
 }
 FUNC_2(VAR_3, 3);
 FUNC_3(VAR_3, 1);
 VAR_4->update = VAR_5;

 return 0;
}
