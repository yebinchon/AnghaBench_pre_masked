
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int szind_t ;
typedef int extent_t ;
typedef int extent_hooks_t ;
struct TYPE_11__ {int mapped; } ;
struct TYPE_10__ {TYPE_4__ stats; int extents_muzzy; int extents_dirty; } ;
typedef TYPE_1__ arena_t ;


 int * VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,size_t) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (int *,TYPE_4__*,int *,size_t) ;
 int FUNC_3 (int *,TYPE_4__*) ;
 int FUNC_4 (int *,TYPE_4__*) ;
 scalar_t__ VAR_3 ;
 int * FUNC_5 (int *,TYPE_1__*,int **,int *,size_t,size_t,size_t,int,int ,int*,int*) ;
 int * FUNC_6 (int *,TYPE_1__*,int **,int *,int *,size_t,size_t,size_t,int,int ,int*,int*) ;
 size_t VAR_4 ;
 int FUNC_7 (size_t) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int ) ;

extent_t *
FUNC_10(tsdn_t *VAR_5, arena_t *VAR_6, size_t VAR_7,
    size_t VAR_8, bool *VAR_9) {
 extent_hooks_t *VAR_10 = VAR_0;

 FUNC_9(FUNC_8(VAR_5),
     VAR_2, 0);

 szind_t VAR_11 = FUNC_7(VAR_7);
 size_t VAR_12;
 bool VAR_13 = 1;
 extent_t *VAR_14 = FUNC_6(VAR_5, VAR_6, &VAR_10,
     &VAR_6->extents_dirty, ((void*)0), VAR_7, VAR_4, VAR_8, 0,
     VAR_11, VAR_9, &VAR_13);
 if (VAR_14 == ((void*)0)) {
  VAR_14 = FUNC_6(VAR_5, VAR_6, &VAR_10,
      &VAR_6->extents_muzzy, ((void*)0), VAR_7, VAR_4, VAR_8,
      0, VAR_11, VAR_9, &VAR_13);
 }
 size_t VAR_15 = VAR_7 + VAR_4;
 if (VAR_14 == ((void*)0)) {
  VAR_14 = FUNC_5(VAR_5, VAR_6, &VAR_10, ((void*)0),
      VAR_7, VAR_4, VAR_8, 0, VAR_11, VAR_9,
      &VAR_13);
  if (VAR_3) {





   VAR_12 = VAR_15;
  }
 } else if (VAR_3) {
  VAR_12 = 0;
 }

 if (VAR_14 != ((void*)0)) {
  if (VAR_3) {
   FUNC_3(VAR_5, &VAR_6->stats);
   FUNC_0(VAR_5, VAR_6, VAR_7);
   if (VAR_12 != 0) {
    FUNC_2(VAR_5, &VAR_6->stats,
        &VAR_6->stats.mapped, VAR_12);
   }
   FUNC_4(VAR_5, &VAR_6->stats);
  }
  FUNC_1(VAR_6, VAR_15 >> VAR_1);
 }

 return VAR_14;
}
