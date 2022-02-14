
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int rtree_leaf_elm_t ;
typedef int rtree_ctx_t ;
typedef scalar_t__ lock_result_t ;
typedef int extent_t ;


 scalar_t__ FUNC_0 (int *,int *,int **) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (int *,int *,int *,uintptr_t,int,int) ;

__attribute__((used)) static extent_t *
FUNC_2(tsdn_t *VAR_2, rtree_ctx_t *VAR_3, void *VAR_4) {
 extent_t *VAR_5 = ((void*)0);
 rtree_leaf_elm_t *VAR_6 = FUNC_1(VAR_2, &VAR_0,
     VAR_3, (uintptr_t)VAR_4, 0, 0);
 if (VAR_6 == ((void*)0)) {
  return ((void*)0);
 }
 lock_result_t VAR_7;
 do {
  VAR_7 = FUNC_0(VAR_2, VAR_6, &VAR_5);
 } while (VAR_7 == VAR_1);
 return VAR_5;
}
