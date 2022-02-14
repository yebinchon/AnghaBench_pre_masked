
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int szind_t ;
typedef int rtree_ctx_t ;
typedef int extents_t ;
typedef int extent_t ;
typedef int extent_hooks_t ;
typedef int arena_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *,size_t) ;
 void* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int **,int *,int ,size_t,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *,int ) ;
 int FUNC_6 (int *,int *,int **,int *,int *,int) ;
 int * FUNC_7 (int *,int *,int **,int *,int *,void*,size_t,size_t,size_t,int,int) ;
 int * FUNC_8 (int *,int *,int **,int *,int *,void*,size_t,size_t,size_t,int,int ,int *,int) ;
 size_t FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (void*,int ,size_t) ;
 scalar_t__ FUNC_15 (void*,size_t) ;
 int * FUNC_16 (int *,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,int ,int) ;

__attribute__((used)) static extent_t *
FUNC_19(tsdn_t *VAR_3, arena_t *VAR_4, extent_hooks_t **VAR_5,
    extents_t *VAR_6, void *VAR_7, size_t VAR_8, size_t VAR_9,
    size_t VAR_10, bool VAR_11, szind_t VAR_12, bool *VAR_13, bool *VAR_14,
    bool VAR_15) {
 FUNC_18(FUNC_17(VAR_3),
     VAR_0, VAR_15 ? 1 : 0);
 FUNC_0(VAR_7 == ((void*)0) || !VAR_11);
 FUNC_0(VAR_9 == 0 || !VAR_11);
 FUNC_0(!*VAR_13 || !VAR_11);

 rtree_ctx_t VAR_16;
 rtree_ctx_t *VAR_17 = FUNC_16(VAR_3, &VAR_16);

 extent_t *VAR_18 = FUNC_7(VAR_3, VAR_4, VAR_5,
     VAR_17, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11,
     VAR_15);
 if (VAR_18 == ((void*)0)) {
  return ((void*)0);
 }

 VAR_18 = FUNC_8(VAR_3, VAR_4, VAR_5, VAR_17,
     VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_18,
     VAR_15);
 if (VAR_18 == ((void*)0)) {
  return ((void*)0);
 }

 if (*VAR_14 && !FUNC_4(VAR_18)) {
  if (FUNC_3(VAR_3, VAR_4, VAR_5, VAR_18,
      0, FUNC_9(VAR_18), VAR_15)) {
   FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6,
       VAR_18, VAR_15);
   return ((void*)0);
  }
  FUNC_13(VAR_18, 1);
 }

 if (FUNC_4(VAR_18)) {
  *VAR_14 = 1;
 }
 if (FUNC_12(VAR_18)) {
  *VAR_13 = 1;
 }

 if (VAR_9 != 0) {
  FUNC_1(VAR_3, VAR_18, VAR_10);
 }
 FUNC_0(FUNC_11(VAR_18) == VAR_2);
 if (VAR_11) {
  FUNC_10(VAR_18, VAR_11);
  FUNC_5(VAR_3, VAR_17, VAR_18, VAR_12);
 }

 if (*VAR_13) {
  void *VAR_19 = FUNC_2(VAR_18);
  size_t VAR_20 = FUNC_9(VAR_18);
  if (!FUNC_12(VAR_18)) {
   if (FUNC_15(VAR_19, VAR_20)) {
    FUNC_14(VAR_19, 0, VAR_20);
   }
  } else if (VAR_1) {
   size_t *VAR_21 = (size_t *)(uintptr_t)VAR_19;
   for (size_t VAR_22 = 0; VAR_22 < VAR_20 / sizeof(size_t); VAR_22++) {
    FUNC_0(VAR_21[VAR_22] == 0);
   }
  }
 }
 return VAR_18;
}
