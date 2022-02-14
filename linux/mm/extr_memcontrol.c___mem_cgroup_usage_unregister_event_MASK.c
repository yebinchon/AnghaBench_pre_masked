
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_cgroup_thresholds {struct mem_cgroup_threshold_ary* spare; struct mem_cgroup_threshold_ary* primary; } ;
struct mem_cgroup_threshold_ary {int size; int current_threshold; TYPE_1__* entries; } ;
struct mem_cgroup {int thresholds_lock; struct mem_cgroup_thresholds memsw_thresholds; struct mem_cgroup_thresholds thresholds; } ;
struct eventfd_ctx {int dummy; } ;
typedef enum res_type { ____Placeholder_res_type } res_type ;
struct TYPE_2__ {unsigned long threshold; struct eventfd_ctx* eventfd; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mem_cgroup*,int) ;
 int FUNC_2 (struct mem_cgroup_threshold_ary*) ;
 unsigned long FUNC_3 (struct mem_cgroup*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mem_cgroup_threshold_ary*,struct mem_cgroup_threshold_ary*) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct mem_cgroup *VAR_2,
 struct eventfd_ctx *VAR_3, enum res_type VAR_4)
{
 struct mem_cgroup_thresholds *VAR_5;
 struct mem_cgroup_threshold_ary *VAR_6;
 unsigned long VAR_7;
 int VAR_8, VAR_9, VAR_10;

 FUNC_4(&VAR_2->thresholds_lock);

 if (VAR_4 == VAR_0) {
  VAR_5 = &VAR_2->thresholds;
  VAR_7 = FUNC_3(VAR_2, 0);
 } else if (VAR_4 == VAR_1) {
  VAR_5 = &VAR_2->memsw_thresholds;
  VAR_7 = FUNC_3(VAR_2, 1);
 } else
  FUNC_0();

 if (!VAR_5->primary)
  goto unlock;


 FUNC_1(VAR_2, VAR_4 == VAR_1);


 VAR_10 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_5->primary->size; VAR_8++) {
  if (VAR_5->primary->entries[VAR_8].eventfd != VAR_3)
   VAR_10++;
 }

 VAR_6 = VAR_5->spare;


 if (!VAR_10) {
  FUNC_2(VAR_6);
  VAR_6 = ((void*)0);
  goto swap_buffers;
 }

 VAR_6->size = VAR_10;


 VAR_6->current_threshold = -1;
 for (VAR_8 = 0, VAR_9 = 0; VAR_8 < VAR_5->primary->size; VAR_8++) {
  if (VAR_5->primary->entries[VAR_8].eventfd == VAR_3)
   continue;

  VAR_6->entries[VAR_9] = VAR_5->primary->entries[VAR_8];
  if (VAR_6->entries[VAR_9].threshold <= VAR_7) {





   ++VAR_6->current_threshold;
  }
  VAR_9++;
 }

swap_buffers:

 VAR_5->spare = VAR_5->primary;

 FUNC_6(VAR_5->primary, VAR_6);


 FUNC_7();


 if (!VAR_6) {
  FUNC_2(VAR_5->spare);
  VAR_5->spare = ((void*)0);
 }
unlock:
 FUNC_5(&VAR_2->thresholds_lock);
}
