
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int szind_t ;
typedef int rtree_ctx_t ;
typedef int extent_t ;
struct TYPE_3__ {int prof_accum; } ;
typedef TYPE_1__ arena_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_3 ;
 size_t FUNC_4 (int *,void const*) ;
 int FUNC_5 (int *,int *,size_t) ;
 int * FUNC_6 (int *,int *,int *,uintptr_t,int) ;
 int FUNC_7 (int *,int *,int *,uintptr_t,int ,int) ;
 int FUNC_8 (size_t) ;
 int * FUNC_9 (int *,int *) ;

void
FUNC_10(tsdn_t *VAR_4, const void *VAR_5, size_t VAR_6) {
 FUNC_1(VAR_2);
 FUNC_0(VAR_5 != ((void*)0));
 FUNC_0(FUNC_4(VAR_4, VAR_5) == VAR_0);
 FUNC_0(VAR_6 <= VAR_1);

 rtree_ctx_t VAR_7;
 rtree_ctx_t *VAR_8 = FUNC_9(VAR_4, &VAR_7);

 extent_t *VAR_9 = FUNC_6(VAR_4, &VAR_3, VAR_8,
     (uintptr_t)VAR_5, 1);
 arena_t *VAR_10 = FUNC_2(VAR_9);

 szind_t VAR_11 = FUNC_8(VAR_6);
 FUNC_3(VAR_9, VAR_11);
 FUNC_7(VAR_4, &VAR_3, VAR_8, (uintptr_t)VAR_5,
     VAR_11, 0);

 FUNC_5(VAR_4, &VAR_10->prof_accum, VAR_6);

 FUNC_0(FUNC_4(VAR_4, VAR_5) == VAR_6);
}
