
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ writeback; scalar_t__ taken; scalar_t__ dirty; scalar_t__ congested; scalar_t__ unqueued_dirty; scalar_t__ file_taken; scalar_t__ immediate; } ;
struct scan_control {unsigned long nr_reclaimed; unsigned long nr_scanned; int memcg_low_skipped; int hibernation_mode; TYPE_7__ nr; struct mem_cgroup* target_mem_cgroup; int gfp_mask; int priority; int memcg_low_reclaim; } ;
struct reclaim_state {unsigned long reclaimed_slab; } ;
struct mem_cgroup {int dummy; } ;
struct TYPE_9__ {scalar_t__ kswapd_failures; int flags; int node_id; } ;
typedef TYPE_1__ pg_data_t ;
struct TYPE_11__ {struct reclaim_state* reclaim_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 TYPE_8__* VAR_6 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct scan_control*) ;
 struct mem_cgroup* FUNC_4 (struct mem_cgroup*,struct mem_cgroup*,int *) ;
 int FUNC_5 (struct mem_cgroup*,struct mem_cgroup*) ;
 int FUNC_6 (struct mem_cgroup*,int ) ;
 int FUNC_7 (TYPE_7__*,int ,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,struct mem_cgroup*) ;
 scalar_t__ FUNC_9 (struct scan_control*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (TYPE_1__*,struct mem_cgroup*,int) ;
 scalar_t__ FUNC_12 (TYPE_1__*,unsigned long,struct scan_control*) ;
 int FUNC_13 (TYPE_1__*,struct mem_cgroup*,struct scan_control*,unsigned long*) ;
 int FUNC_14 (int ,int ,struct mem_cgroup*,int ) ;
 int FUNC_15 (int ,struct mem_cgroup*,int,unsigned long,unsigned long) ;
 int FUNC_16 (int ,int) ;

__attribute__((used)) static bool FUNC_17(pg_data_t *VAR_7, struct scan_control *VAR_8)
{
 struct reclaim_state *VAR_9 = VAR_6->reclaim_state;
 unsigned long VAR_10, VAR_11;
 bool VAR_12 = 0;

 do {
  struct mem_cgroup *VAR_13 = VAR_8->target_mem_cgroup;
  unsigned long VAR_14 = 0;
  struct mem_cgroup *VAR_15;

  FUNC_7(&VAR_8->nr, 0, sizeof(VAR_8->nr));

  VAR_10 = VAR_8->nr_reclaimed;
  VAR_11 = VAR_8->nr_scanned;

  VAR_15 = FUNC_4(VAR_13, ((void*)0), ((void*)0));
  do {
   unsigned long VAR_16;
   unsigned long VAR_17;
   unsigned long VAR_18;

   switch (FUNC_5(VAR_13, VAR_15)) {
   case 129:




    continue;
   case 130:






    if (!VAR_8->memcg_low_reclaim) {
     VAR_8->memcg_low_skipped = 1;
     continue;
    }
    FUNC_6(VAR_15, VAR_2);
    break;
   case 128:







    break;
   }

   VAR_17 = VAR_8->nr_reclaimed;
   VAR_18 = VAR_8->nr_scanned;
   FUNC_13(VAR_7, VAR_15, VAR_8, &VAR_16);
   VAR_14 += VAR_16;

   FUNC_14(VAR_8->gfp_mask, VAR_7->node_id, VAR_15,
     VAR_8->priority);


   FUNC_15(VAR_8->gfp_mask, VAR_15, 0,
       VAR_8->nr_scanned - VAR_18,
       VAR_8->nr_reclaimed - VAR_17);

  } while ((VAR_15 = FUNC_4(VAR_13, VAR_15, ((void*)0))));

  if (VAR_9) {
   VAR_8->nr_reclaimed += VAR_9->reclaimed_slab;
   VAR_9->reclaimed_slab = 0;
  }


  FUNC_15(VAR_8->gfp_mask, VAR_8->target_mem_cgroup, 1,
      VAR_8->nr_scanned - VAR_11,
      VAR_8->nr_reclaimed - VAR_10);

  if (VAR_8->nr_reclaimed - VAR_10)
   VAR_12 = 1;

  if (FUNC_1()) {
   if (VAR_8->nr.writeback && VAR_8->nr.writeback == VAR_8->nr.taken)
    FUNC_10(VAR_5, &VAR_7->flags);






   if (VAR_8->nr.dirty && VAR_8->nr.dirty == VAR_8->nr.congested)
    FUNC_10(VAR_3, &VAR_7->flags);


   if (VAR_8->nr.unqueued_dirty == VAR_8->nr.file_taken)
    FUNC_10(VAR_4, &VAR_7->flags);







   if (VAR_8->nr.immediate)
    FUNC_0(VAR_0, VAR_1/10);
  }





  if (!FUNC_3(VAR_8) && FUNC_9(VAR_8) &&
      VAR_8->nr.dirty && VAR_8->nr.dirty == VAR_8->nr.congested)
   FUNC_11(VAR_7, VAR_13, 1);







  if (!VAR_8->hibernation_mode && !FUNC_1() &&
     FUNC_2() && FUNC_8(VAR_7, VAR_13))
   FUNC_16(VAR_0, VAR_1/10);

 } while (FUNC_12(VAR_7, VAR_8->nr_reclaimed - VAR_10,
      VAR_8));







 if (VAR_12)
  VAR_7->kswapd_failures = 0;

 return VAR_12;
}
