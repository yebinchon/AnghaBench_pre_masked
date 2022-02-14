
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int tsd_t ;
typedef size_t szind_t ;
struct TYPE_16__ {int lock; } ;
typedef TYPE_7__ bin_t ;
struct TYPE_14__ {int mtx; } ;
struct TYPE_13__ {int mtx; } ;
struct TYPE_12__ {int mtx; } ;
struct TYPE_11__ {int mtx; } ;
struct TYPE_10__ {int mtx; } ;
struct TYPE_17__ {TYPE_7__* bins; TYPE_6__* base; int tcache_ql_mtx; TYPE_5__ decay_muzzy; TYPE_4__ decay_dirty; TYPE_3__ extents_retained; TYPE_2__ extents_muzzy; TYPE_1__ extents_dirty; int extent_avail_mtx; int large_mtx; } ;
typedef TYPE_8__ arena_t ;
struct TYPE_15__ {int mtx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 TYPE_8__* FUNC_1 (int *,unsigned int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int FUNC_2 () ;
 scalar_t__ VAR_8 ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(tsd_t *VAR_9, const size_t *VAR_10, size_t VAR_11,
    void *VAR_12, size_t *VAR_13, void *VAR_14, size_t VAR_15) {
 if (!VAR_5) {
  return VAR_0;
 }

 tsdn_t *VAR_16 = FUNC_3(VAR_9);







 FUNC_0(VAR_16, &VAR_6); FUNC_0(VAR_16, &VAR_6); FUNC_0(VAR_16, &VAR_6);;
 if (VAR_7) {
  FUNC_0(VAR_16, &VAR_2); FUNC_0(VAR_16, &VAR_2); FUNC_0(VAR_16, &VAR_2);;
 }
 if (VAR_4 && VAR_8) {
  FUNC_0(VAR_16, &VAR_3); FUNC_0(VAR_16, &VAR_3); FUNC_0(VAR_16, &VAR_3);;
 }



 unsigned VAR_17 = FUNC_2();

 for (unsigned VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {
  arena_t *VAR_19 = FUNC_1(VAR_16, VAR_18, 0);
  if (!VAR_19) {
   continue;
  }
  FUNC_0(VAR_16, &VAR_19->large_mtx); FUNC_0(VAR_16, &VAR_19->large_mtx); FUNC_0(VAR_16, &VAR_19->large_mtx);;
  FUNC_0(VAR_16, &VAR_19->extent_avail_mtx); FUNC_0(VAR_16, &VAR_19->extent_avail_mtx); FUNC_0(VAR_16, &VAR_19->extent_avail_mtx);;
  FUNC_0(VAR_16, &VAR_19->extents_dirty.mtx); FUNC_0(VAR_16, &VAR_19->extents_dirty.mtx); FUNC_0(VAR_16, &VAR_19->extents_dirty.mtx);;
  FUNC_0(VAR_16, &VAR_19->extents_muzzy.mtx); FUNC_0(VAR_16, &VAR_19->extents_muzzy.mtx); FUNC_0(VAR_16, &VAR_19->extents_muzzy.mtx);;
  FUNC_0(VAR_16, &VAR_19->extents_retained.mtx); FUNC_0(VAR_16, &VAR_19->extents_retained.mtx); FUNC_0(VAR_16, &VAR_19->extents_retained.mtx);;
  FUNC_0(VAR_16, &VAR_19->decay_dirty.mtx); FUNC_0(VAR_16, &VAR_19->decay_dirty.mtx); FUNC_0(VAR_16, &VAR_19->decay_dirty.mtx);;
  FUNC_0(VAR_16, &VAR_19->decay_muzzy.mtx); FUNC_0(VAR_16, &VAR_19->decay_muzzy.mtx); FUNC_0(VAR_16, &VAR_19->decay_muzzy.mtx);;
  FUNC_0(VAR_16, &VAR_19->tcache_ql_mtx); FUNC_0(VAR_16, &VAR_19->tcache_ql_mtx); FUNC_0(VAR_16, &VAR_19->tcache_ql_mtx);;
  FUNC_0(VAR_16, &VAR_19->base->mtx); FUNC_0(VAR_16, &VAR_19->base->mtx); FUNC_0(VAR_16, &VAR_19->base->mtx);;

  for (szind_t VAR_20 = 0; VAR_20 < VAR_1; VAR_20++) {
   bin_t *VAR_21 = &VAR_19->bins[VAR_20];
   FUNC_0(VAR_16, &VAR_21->lock); FUNC_0(VAR_16, &VAR_21->lock); FUNC_0(VAR_16, &VAR_21->lock);;
  }
 }

 return 0;
}
