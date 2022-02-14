
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int szind_t ;
typedef int rtree_ctx_t ;
typedef scalar_t__ pszind_t ;
typedef int extent_t ;
typedef scalar_t__ extent_split_interior_result_t ;
struct TYPE_22__ {void* (* alloc ) (TYPE_1__*,int *,size_t,size_t,int*,int*,int ) ;} ;
typedef TYPE_1__ extent_hooks_t ;
struct TYPE_23__ {scalar_t__ extent_grow_next; scalar_t__ retain_grow_limit; int extent_grow_mtx; int extents_retained; } ;
typedef TYPE_2__ arena_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *,int *,size_t) ;
 int * FUNC_5 (int *,TYPE_2__*) ;
 void* FUNC_6 (int *,TYPE_2__*,int *,size_t,size_t,int*,int*) ;
 void* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,TYPE_2__*,TYPE_1__**,int *,int ,size_t,int) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_2__*,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,TYPE_2__*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_15 (int *,TYPE_2__*,void*,size_t,int,int ,int ,int ,int,int,int) ;
 int FUNC_16 (int *,int *,int *,int ) ;
 int FUNC_17 (int *,TYPE_2__*,TYPE_1__**,int *,int *,int) ;
 scalar_t__ FUNC_18 (int *,int *) ;
 size_t FUNC_19 (int *) ;
 int FUNC_20 (int *,int) ;
 scalar_t__ FUNC_21 (int *,TYPE_2__*,TYPE_1__**,int *,int **,int **,int **,int **,int **,int *,size_t,size_t,size_t,int,int ,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_22 (int *) ;
 int FUNC_23 (int *,int) ;
 int FUNC_24 (int *,TYPE_2__*,TYPE_1__**,int *,int *,int) ;
 int FUNC_25 (int *,int *) ;
 int FUNC_26 (int *,int *) ;
 int FUNC_27 (void*,int ,size_t) ;
 scalar_t__ FUNC_28 (void*,size_t) ;
 void* FUNC_29 (TYPE_1__*,int *,size_t,size_t,int*,int*,int ) ;
 size_t FUNC_30 (scalar_t__) ;
 int * FUNC_31 (int *,int *) ;

__attribute__((used)) static extent_t *
FUNC_32(tsdn_t *VAR_8, arena_t *VAR_9,
    extent_hooks_t **VAR_10, size_t VAR_11, size_t VAR_12, size_t VAR_13,
    bool VAR_14, szind_t VAR_15, bool *VAR_16, bool *VAR_17) {
 FUNC_25(VAR_8, &VAR_9->extent_grow_mtx);
 FUNC_3(VAR_12 == 0 || !VAR_14);
 FUNC_3(!*VAR_16 || !VAR_14);

 size_t VAR_18 = VAR_11 + VAR_12;
 size_t VAR_19 = VAR_18 + FUNC_0(VAR_13) - VAR_2;

 if (VAR_19 < VAR_18) {
  goto label_err;
 }




 pszind_t VAR_20 = 0;
 size_t VAR_21 = FUNC_30(VAR_9->extent_grow_next + VAR_20);
 while (VAR_21 < VAR_19) {
  VAR_20++;
  if (VAR_9->extent_grow_next + VAR_20 == VAR_0) {

   goto label_err;
  }
  FUNC_3(VAR_9->extent_grow_next + VAR_20 < VAR_0);
  VAR_21 = FUNC_30(VAR_9->extent_grow_next + VAR_20);
 }

 extent_t *VAR_22 = FUNC_5(VAR_8, VAR_9);
 if (VAR_22 == ((void*)0)) {
  goto label_err;
 }
 bool VAR_23 = 0;
 bool VAR_24 = 0;

 void *VAR_25;
 if (*VAR_10 == &VAR_4) {
  VAR_25 = FUNC_6(VAR_8, VAR_9, ((void*)0),
      VAR_21, VAR_2, &VAR_23, &VAR_24);
 } else {
  FUNC_14(VAR_8, VAR_9);
  VAR_25 = (*VAR_10)->alloc(*VAR_10, ((void*)0),
      VAR_21, VAR_2, &VAR_23, &VAR_24,
      FUNC_2(VAR_9));
  FUNC_13(VAR_8);
 }

 FUNC_15(VAR_22, VAR_9, VAR_25, VAR_21, 0, VAR_1,
     FUNC_1(VAR_9), VAR_7, VAR_23,
     VAR_24, 1);
 if (VAR_25 == ((void*)0)) {
  FUNC_10(VAR_8, VAR_9, VAR_22);
  goto label_err;
 }

 if (FUNC_18(VAR_8, VAR_22)) {
  FUNC_24(VAR_8, VAR_9, VAR_10,
      &VAR_9->extents_retained, VAR_22, 1);
  goto label_err;
 }

 if (FUNC_22(VAR_22) && FUNC_9(VAR_22)) {
  *VAR_16 = 1;
 }
 if (FUNC_9(VAR_22)) {
  *VAR_17 = 1;
 }

 rtree_ctx_t VAR_26;
 rtree_ctx_t *VAR_27 = FUNC_31(VAR_8, &VAR_26);

 extent_t *VAR_28;
 extent_t *VAR_29;
 extent_t *VAR_30;
 extent_t *VAR_31;
 extent_split_interior_result_t VAR_32 = FUNC_21(
     VAR_8, VAR_9, VAR_10, VAR_27, &VAR_22, &VAR_28, &VAR_29,
     &VAR_30, &VAR_31, ((void*)0), VAR_11, VAR_12, VAR_13, VAR_14, VAR_15,
     1);

 if (VAR_32 == VAR_6) {
  if (VAR_28 != ((void*)0)) {
   FUNC_17(VAR_8, VAR_9, VAR_10,
       &VAR_9->extents_retained, VAR_28, 1);
  }
  if (VAR_29 != ((void*)0)) {
   FUNC_17(VAR_8, VAR_9, VAR_10,
       &VAR_9->extents_retained, VAR_29, 1);
  }
 } else {




  FUNC_3(VAR_32 == VAR_5);
  if (VAR_31 != ((void*)0)) {
   if (VAR_3) {
    FUNC_12(VAR_8, VAR_31);
   }
   FUNC_17(VAR_8, VAR_9, VAR_10,
       &VAR_9->extents_retained, VAR_31, 1);
  }
  if (VAR_30 != ((void*)0)) {
   FUNC_11(VAR_8, VAR_30);
   FUNC_24(VAR_8, VAR_9, VAR_10,
       &VAR_9->extents_retained, VAR_30, 1);
  }
  goto label_err;
 }

 if (*VAR_17 && !FUNC_9(VAR_22)) {
  if (FUNC_8(VAR_8, VAR_9, VAR_10, VAR_22, 0,
      FUNC_19(VAR_22), 1)) {
   FUNC_17(VAR_8, VAR_9, VAR_10,
       &VAR_9->extents_retained, VAR_22, 1);
   goto label_err;
  }
  FUNC_23(VAR_22, 1);
 }





 if (VAR_9->extent_grow_next + VAR_20 + 1 <=
     VAR_9->retain_grow_limit) {
  VAR_9->extent_grow_next += VAR_20 + 1;
 } else {
  VAR_9->extent_grow_next = VAR_9->retain_grow_limit;
 }

 FUNC_26(VAR_8, &VAR_9->extent_grow_mtx);

 if (VAR_3) {

  FUNC_12(VAR_8, VAR_22);
 }
 if (VAR_12 != 0) {
  FUNC_4(VAR_8, VAR_22, VAR_13);
 }
 if (VAR_14) {
  rtree_ctx_t VAR_33;
  rtree_ctx_t *VAR_34 = FUNC_31(VAR_8,
      &VAR_33);

  FUNC_20(VAR_22, 1);
  FUNC_16(VAR_8, VAR_34, VAR_22, VAR_15);
 }
 if (*VAR_16 && !FUNC_22(VAR_22)) {
  void *VAR_35 = FUNC_7(VAR_22);
  size_t VAR_36 = FUNC_19(VAR_22);
  if (FUNC_28(VAR_35, VAR_36)) {
   FUNC_27(VAR_35, 0, VAR_36);
  }
 }

 return VAR_22;
label_err:
 FUNC_26(VAR_8, &VAR_9->extent_grow_mtx);
 return ((void*)0);
}
