
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int szind_t ;
typedef int rtree_leaf_elm_t ;
typedef int rtree_ctx_t ;
typedef int extent_t ;
struct TYPE_6__ {int (* split ) (TYPE_1__*,scalar_t__,size_t,size_t,size_t,int ,int ) ;} ;
typedef TYPE_1__ extent_hooks_t ;
typedef int arena_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,TYPE_1__**) ;
 TYPE_1__ VAR_1 ;
 int FUNC_11 (int *,int *,void*,size_t,int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_12 (int *,int *,int *) ;
 int FUNC_13 (int *,int *,int *,int,int,int **,int **) ;
 int FUNC_14 (int *,int *,int *,int *,int ,int) ;
 size_t FUNC_15 (int *) ;
 int FUNC_16 (int *,size_t) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,int *,int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (TYPE_1__*,scalar_t__,size_t,size_t,size_t,int ,int ) ;
 int * FUNC_23 (int *,int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int ,int ,int) ;

__attribute__((used)) static extent_t *
FUNC_26(tsdn_t *VAR_2, arena_t *VAR_3,
    extent_hooks_t **VAR_4, extent_t *VAR_5, size_t VAR_6,
    szind_t VAR_7, bool VAR_8, size_t VAR_9, szind_t VAR_10, bool VAR_11,
    bool VAR_12) {
 FUNC_1(FUNC_15(VAR_5) == VAR_6 + VAR_9);
 FUNC_25(FUNC_24(VAR_2),
     VAR_0, VAR_12 ? 1 : 0);

 FUNC_10(VAR_3, VAR_4);

 if ((*VAR_4)->split == ((void*)0)) {
  return ((void*)0);
 }

 extent_t *VAR_13 = FUNC_3(VAR_2, VAR_3);
 if (VAR_13 == ((void*)0)) {
  goto label_error_a;
 }

 FUNC_11(VAR_13, VAR_3, (void *)((uintptr_t)FUNC_4(VAR_5) +
     VAR_6), VAR_9, VAR_11, VAR_10, FUNC_17(VAR_5),
     FUNC_18(VAR_5), FUNC_21(VAR_5),
     FUNC_5(VAR_5), FUNC_7(VAR_5));

 rtree_ctx_t VAR_14;
 rtree_ctx_t *VAR_15 = FUNC_23(VAR_2, &VAR_14);
 rtree_leaf_elm_t *VAR_16, *VAR_17;
 {
  extent_t VAR_18;

  FUNC_11(&VAR_18, VAR_3, FUNC_2(VAR_5), VAR_6,
      VAR_8, VAR_7, FUNC_17(VAR_5),
      FUNC_18(VAR_5), FUNC_21(VAR_5),
      FUNC_5(VAR_5), FUNC_7(VAR_5));

  FUNC_13(VAR_2, VAR_15, &VAR_18, 0,
      1, &VAR_16, &VAR_17);
 }
 rtree_leaf_elm_t *VAR_19, *VAR_20;
 FUNC_13(VAR_2, VAR_15, VAR_13, 0, 1,
     &VAR_19, &VAR_20);

 if (VAR_16 == ((void*)0) || VAR_17 == ((void*)0) || VAR_19 == ((void*)0)
     || VAR_20 == ((void*)0)) {
  goto label_error_b;
 }

 FUNC_12(VAR_2, VAR_5, VAR_13);

 if (*VAR_4 != &VAR_1) {
  FUNC_9(VAR_2, VAR_3);
 }
 bool VAR_21 = (*VAR_4)->split(*VAR_4, FUNC_4(VAR_5),
     VAR_6 + VAR_9, VAR_6, VAR_9, FUNC_5(VAR_5),
     FUNC_0(VAR_3));
 if (*VAR_4 != &VAR_1) {
  FUNC_8(VAR_2);
 }
 if (VAR_21) {
  goto label_error_c;
 }

 FUNC_16(VAR_5, VAR_6);
 FUNC_19(VAR_5, VAR_7);

 FUNC_14(VAR_2, VAR_16, VAR_17, VAR_5,
     VAR_7, VAR_8);
 FUNC_14(VAR_2, VAR_19, VAR_20, VAR_13,
     VAR_10, VAR_11);

 FUNC_20(VAR_2, VAR_5, VAR_13);

 return VAR_13;
label_error_c:
 FUNC_20(VAR_2, VAR_5, VAR_13);
label_error_b:
 FUNC_6(VAR_2, VAR_3, VAR_13);
label_error_a:
 return ((void*)0);
}
