
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct table {int sizearray; scalar_t__* arraytype; int sizehash; int L; struct node* hash; } ;
struct node {int dummy; } ;
typedef int lua_State ;
typedef int lua_Integer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (char const*,size_t) ;
 struct table* FUNC_1 (int *,int) ;
 struct node* FUNC_2 (struct table*,scalar_t__,int,int,char const*,size_t) ;
 char* FUNC_3 (int *,int,size_t*) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,struct table*) ;
 int FUNC_10 (int *,int ,struct node*) ;

__attribute__((used)) static int
FUNC_11(lua_State *VAR_4) {
 struct table *VAR_5 = FUNC_1(VAR_4,1);
 if (FUNC_5(VAR_4,2)) {
  if (VAR_5->sizearray > 0) {
   int VAR_6;
   for (VAR_6=0;VAR_6<VAR_5->sizearray;VAR_6++) {
    if (VAR_5->arraytype[VAR_6] != VAR_3) {
     FUNC_6(VAR_4, VAR_6+1);
     return 1;
    }
   }
  }
  return FUNC_9(VAR_4, VAR_5);
 }
 int VAR_7 = FUNC_8(VAR_4,2);
 uint32_t VAR_8;
 int VAR_9 = 0;
 int VAR_10;
 size_t VAR_11=0;
 const char *VAR_12 = ((void*)0);
 int VAR_13 = VAR_5->sizearray;
 if (VAR_7 == VAR_2) {
  if (!FUNC_4(VAR_4, 2)) {
   return 0;
  }
  VAR_9 = (int)FUNC_7(VAR_4, 2);
  if (VAR_9 > 0 && VAR_9 <= VAR_13) {
   lua_Integer VAR_14;
   for (VAR_14=VAR_9;VAR_14<VAR_13;VAR_14++) {
    if (VAR_5->arraytype[VAR_14] != VAR_3) {
     FUNC_6(VAR_4, VAR_14+1);
     return 1;
    }
   }
   return FUNC_9(VAR_4, VAR_5);
  }
  VAR_8 = (uint32_t)VAR_9;
  VAR_10 = VAR_0;
 } else {
  VAR_12 = FUNC_3(VAR_4, 2, &VAR_11);
  VAR_8 = FUNC_0(VAR_12, VAR_11);
  VAR_10 = VAR_1;
 }

 struct node *VAR_15 = FUNC_2(VAR_5, VAR_8, VAR_9, VAR_10, VAR_12, VAR_11);
 if (VAR_15) {
  ++VAR_15;
  int VAR_16 = VAR_15-VAR_5->hash;
  if (VAR_16 == VAR_5->sizehash) {
   return 0;
  }
  FUNC_10(VAR_4, VAR_5->L, VAR_15);
  return 1;
 } else {
  return 0;
 }
}
