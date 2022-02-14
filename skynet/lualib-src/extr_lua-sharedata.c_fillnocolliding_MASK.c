
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct table {size_t sizehash; struct node* hash; } ;
struct node {scalar_t__ valuetype; int key; int keytype; size_t keyhash; int next; int nocolliding; } ;
struct context {struct table* tbl; } ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct context*,int *,int,int*,size_t*,int*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct context*,int *,int,int) ;
 int FUNC_5 (struct context*,int *,int,struct node*) ;

__attribute__((used)) static void
FUNC_6(lua_State *VAR_1, struct context *VAR_2) {
 struct table * VAR_3 = VAR_2->tbl;
 FUNC_3(VAR_1);
 while (FUNC_1(VAR_1, 1) != 0) {
  int VAR_4;
  int VAR_5;
  uint32_t VAR_6;
  if (!FUNC_0(VAR_2, VAR_1, -2, &VAR_4, &VAR_6, &VAR_5)) {
   FUNC_4(VAR_2, VAR_1, -1, VAR_4);
  } else {
   struct node * VAR_7 = &VAR_3->hash[VAR_6 % VAR_3->sizehash];
   if (VAR_7->valuetype == VAR_0) {
    VAR_7->key = VAR_4;
    VAR_7->keytype = VAR_5;
    VAR_7->keyhash = VAR_6;
    VAR_7->next = -1;
    VAR_7->nocolliding = 1;
    FUNC_5(VAR_2, VAR_1, -1, VAR_7);
   }
  }
  FUNC_2(VAR_1,1);
 }
}
