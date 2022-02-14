
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int szind_t ;
typedef int rtree_ctx_t ;
typedef int extent_t ;
struct TYPE_15__ {int * merge; } ;
typedef TYPE_1__ extent_hooks_t ;
struct TYPE_16__ {int stats; int extents_muzzy; int extents_dirty; } ;
typedef TYPE_2__ arena_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (int *,TYPE_2__*,int *,size_t) ;
 int FUNC_2 (int *,int *,size_t) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *,TYPE_2__*,TYPE_1__**,int ,size_t,int ,int ,int,int ,int*,int*) ;
 TYPE_2__* FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_2__*,TYPE_1__**,int *) ;
 TYPE_1__* FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (int *,TYPE_2__*,TYPE_1__**,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 size_t FUNC_12 (int *) ;
 int * FUNC_13 (int *,TYPE_2__*,TYPE_1__**,int *,int ,size_t,int ,int ,int,int ,int*,int*) ;
 int VAR_7 ;
 int FUNC_14 (void*,int ,size_t) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_15 (int *,int *,int *,uintptr_t,int ,int) ;
 int FUNC_16 (size_t) ;
 int * FUNC_17 (int *,int *) ;
 scalar_t__ FUNC_18 (int ) ;

__attribute__((used)) static bool
FUNC_19(tsdn_t *VAR_10, extent_t *VAR_11, size_t VAR_12,
    bool VAR_13) {
 arena_t *VAR_14 = FUNC_6(VAR_11);
 size_t VAR_15 = FUNC_12(VAR_11);
 extent_hooks_t *VAR_16 = FUNC_8(VAR_14);
 size_t VAR_17 = VAR_12 - VAR_15;

 if (VAR_16->merge == ((void*)0)) {
  return 1;
 }

 if (VAR_5 && FUNC_18(VAR_9)) {
  VAR_13 = 1;
 }






 bool VAR_18 = VAR_13;
 bool VAR_19 = 1;
 extent_t *VAR_20;
 bool VAR_21;
 if ((VAR_20 = FUNC_13(VAR_10, VAR_14, &VAR_16,
     &VAR_14->extents_dirty, FUNC_10(VAR_11), VAR_17, 0,
     VAR_0, 0, VAR_2, &VAR_18, &VAR_19)) != ((void*)0)
     || (VAR_20 = FUNC_13(VAR_10, VAR_14, &VAR_16,
     &VAR_14->extents_muzzy, FUNC_10(VAR_11), VAR_17, 0,
     VAR_0, 0, VAR_2, &VAR_18, &VAR_19)) != ((void*)0)) {
  if (VAR_6) {
   VAR_21 = 0;
  }
 } else {
  if ((VAR_20 = FUNC_5(VAR_10, VAR_14, &VAR_16,
      FUNC_10(VAR_11), VAR_17, 0, VAR_0, 0,
      VAR_2, &VAR_18, &VAR_19)) == ((void*)0)) {
   return 1;
  }
  if (VAR_6) {
   VAR_21 = 1;
  }
 }

 if (FUNC_9(VAR_10, VAR_14, &VAR_16, VAR_11, VAR_20)) {
  FUNC_7(VAR_10, VAR_14, &VAR_16, VAR_20);
  return 1;
 }
 rtree_ctx_t VAR_22;
 rtree_ctx_t *VAR_23 = FUNC_17(VAR_10, &VAR_22);
 szind_t VAR_24 = FUNC_16(VAR_12);
 FUNC_11(VAR_11, VAR_24);
 FUNC_15(VAR_10, &VAR_7, VAR_23,
     (uintptr_t)FUNC_4(VAR_11), VAR_24, 0);

 if (VAR_6 && VAR_21) {
  FUNC_2(VAR_10, &VAR_14->stats, VAR_17);
 }

 if (VAR_13) {
  if (VAR_4) {







   void *VAR_25 = (void *)
       ((uintptr_t)FUNC_4(VAR_11) + VAR_15);
   void *VAR_26 = FUNC_0((void *)((uintptr_t)VAR_25 +
       VAR_3));
   size_t VAR_27 = (uintptr_t)VAR_26 - (uintptr_t)VAR_25;
   FUNC_3(VAR_27 > 0);
   FUNC_14(VAR_25, 0, VAR_27);
  }
  FUNC_3(VAR_18);
 } else if (VAR_5 && FUNC_18(VAR_8)) {
  FUNC_14((void *)((uintptr_t)FUNC_4(VAR_11) + VAR_15),
      VAR_1, VAR_12 - VAR_15);
 }

 FUNC_1(VAR_10, VAR_14, VAR_11, VAR_15);

 return 0;
}
