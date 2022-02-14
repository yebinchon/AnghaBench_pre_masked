
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int * array; int * arraytype; } ;
struct node {int v; int valuetype; } ;
struct context {struct table* tbl; } ;
typedef int lua_State ;


 int FUNC_0 (struct context*,int *,int,struct node*) ;

__attribute__((used)) static void
FUNC_1(struct context *VAR_0, lua_State *VAR_1, int VAR_2, int VAR_3) {
 struct node VAR_4;
 FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_4);
 struct table *VAR_5 = VAR_0->tbl;
 --VAR_3;
 VAR_5->arraytype[VAR_3] = VAR_4.valuetype;
 VAR_5->array[VAR_3] = VAR_4.v;
}
