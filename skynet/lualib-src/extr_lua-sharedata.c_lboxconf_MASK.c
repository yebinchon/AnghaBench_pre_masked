
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int L; } ;
struct state {int ref; } ;
struct ctrl {int * update; struct table* root; } ;
typedef int lua_State ;


 int FUNC_0 (int *) ;
 struct table* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 struct ctrl* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int,char*) ;
 int FUNC_6 (int *,int) ;
 struct state* FUNC_7 (int ,int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_8(lua_State *VAR_1) {
 struct table * VAR_2 = FUNC_1(VAR_1,1);
 struct state * VAR_3 = FUNC_7(VAR_2->L, 1);
 FUNC_0(&VAR_3->ref);

 struct ctrl * VAR_4 = FUNC_3(VAR_1, sizeof(*VAR_4));
 VAR_4->root = VAR_2;
 VAR_4->update = ((void*)0);
 if (FUNC_2(VAR_1, "confctrl")) {
  FUNC_4(VAR_1, VAR_0);
  FUNC_5(VAR_1, -2, "__gc");
 }
 FUNC_6(VAR_1, -2);

 return 1;
}
