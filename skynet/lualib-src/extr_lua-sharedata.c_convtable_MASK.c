
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union value {int dummy; } value ;
typedef void* uint8_t ;
struct table {int sizearray; int sizehash; struct node* hash; union value* array; void** arraytype; int L; } ;
struct node {scalar_t__ nocolliding; void* valuetype; } ;
struct context {int L; struct table* tbl; } ;
typedef int lua_State ;


 void* VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,struct context*) ;
 int FUNC_2 (int *,struct context*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int) ;
 struct context* FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct context*,int *,int,int) ;

__attribute__((used)) static int
FUNC_10(lua_State *VAR_1) {
 int VAR_2;
 struct context *VAR_3 = FUNC_7(VAR_1,2);
 struct table *VAR_4 = VAR_3->tbl;

 VAR_4->L = VAR_3->L;

 int VAR_5 = FUNC_6(VAR_1, 1);
 if (VAR_5) {
  VAR_4->arraytype = (uint8_t *)FUNC_8(VAR_5 * sizeof(uint8_t));
  if (VAR_4->arraytype == ((void*)0)) {
   goto memerror;
  }
  for (VAR_2=0;VAR_2<VAR_5;VAR_2++) {
   VAR_4->arraytype[VAR_2] = VAR_0;
  }
  VAR_4->array = (union value *)FUNC_8(VAR_5 * sizeof(union value));
  if (VAR_4->array == ((void*)0)) {
   goto memerror;
  }
  VAR_4->sizearray = VAR_5;
 }
 int VAR_6 = FUNC_0(VAR_1, VAR_5);
 if (VAR_6) {
  VAR_4->hash = (struct node *)FUNC_8(VAR_6 * sizeof(struct node));
  if (VAR_4->hash == ((void*)0)) {
   goto memerror;
  }
  for (VAR_2=0;VAR_2<VAR_6;VAR_2++) {
   VAR_4->hash[VAR_2].valuetype = VAR_0;
   VAR_4->hash[VAR_2].nocolliding = 0;
  }
  VAR_4->sizehash = VAR_6;

  FUNC_2(VAR_1, VAR_3);
  FUNC_1(VAR_1, VAR_3);
 } else {
  int VAR_7;
  for (VAR_7=1;VAR_7<=VAR_5;VAR_7++) {
   FUNC_5(VAR_1, 1, VAR_7);
   FUNC_9(VAR_3, VAR_1, -1, VAR_7);
   FUNC_4(VAR_1,1);
  }
 }

 return 0;
memerror:
 return FUNC_3(VAR_1, "memory error");
}
