
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct table {int sizearray; int L; int * array; int * arraytype; } ;
struct node {int v; int valuetype; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,size_t) ;
 struct table* FUNC_1 (int *,int) ;
 struct node* FUNC_2 (struct table*,scalar_t__,int,int,char const*,size_t) ;
 char* FUNC_3 (int *,int,size_t*) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_10(lua_State *VAR_3) {
 struct table *VAR_4 = FUNC_1(VAR_3,1);
 int VAR_5 = FUNC_8(VAR_3,2);
 uint32_t VAR_6;
 int VAR_7 = 0;
 int VAR_8;
 size_t VAR_9 = 0;
 const char * VAR_10 = ((void*)0);
 if (VAR_5 == VAR_2) {
  if (!FUNC_5(VAR_3, 2)) {
   return FUNC_4(VAR_3, "Invalid key %f", FUNC_7(VAR_3, 2));
  }
  VAR_7 = (int)FUNC_6(VAR_3, 2);
  if (VAR_7 > 0 && VAR_7 <= VAR_4->sizearray) {
   --VAR_7;
   FUNC_9(VAR_3, VAR_4->L, VAR_4->arraytype[VAR_7], &VAR_4->array[VAR_7]);
   return 1;
  }
  VAR_8 = VAR_0;
  VAR_6 = (uint32_t)VAR_7;
 } else {
  VAR_10 = FUNC_3(VAR_3, 2, &VAR_9);
  VAR_6 = FUNC_0(VAR_10, VAR_9);
  VAR_8 = VAR_1;
 }

 struct node *VAR_11 = FUNC_2(VAR_4, VAR_6, VAR_7, VAR_8, VAR_10, VAR_9);
 if (VAR_11) {
  FUNC_9(VAR_3, VAR_4->L, VAR_11->valuetype, &VAR_11->v);
  return 1;
 } else {
  return 0;
 }
}
