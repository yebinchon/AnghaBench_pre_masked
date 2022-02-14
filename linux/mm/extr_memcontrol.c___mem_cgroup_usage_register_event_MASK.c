
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mem_cgroup_thresholds {TYPE_2__* primary; TYPE_2__* spare; } ;
struct mem_cgroup_threshold_ary {int size; int current_threshold; TYPE_1__* entries; } ;
struct mem_cgroup_threshold {int dummy; } ;
struct mem_cgroup {int thresholds_lock; struct mem_cgroup_thresholds memsw_thresholds; struct mem_cgroup_thresholds thresholds; } ;
struct eventfd_ctx {int dummy; } ;
typedef enum res_type { ____Placeholder_res_type } res_type ;
struct TYPE_6__ {int size; int entries; } ;
struct TYPE_5__ {unsigned long threshold; struct eventfd_ctx* eventfd; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mem_cgroup*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*) ;
 struct mem_cgroup_threshold_ary* FUNC_3 (int ,int ) ;
 unsigned long FUNC_4 (struct mem_cgroup*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char const*,char*,unsigned long*) ;
 int FUNC_9 (TYPE_2__*,struct mem_cgroup_threshold_ary*) ;
 int FUNC_10 (TYPE_1__*,int,int,int ,int *) ;
 int FUNC_11 (struct mem_cgroup_threshold_ary*,int ,int) ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(struct mem_cgroup *VAR_6,
 struct eventfd_ctx *VAR_7, const char *VAR_8, enum res_type VAR_9)
{
 struct mem_cgroup_thresholds *VAR_10;
 struct mem_cgroup_threshold_ary *VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13;
 int VAR_14, VAR_15, VAR_16;

 VAR_16 = FUNC_8(VAR_8, "-1", &VAR_12);
 if (VAR_16)
  return VAR_16;

 FUNC_6(&VAR_6->thresholds_lock);

 if (VAR_9 == VAR_2) {
  VAR_10 = &VAR_6->thresholds;
  VAR_13 = FUNC_4(VAR_6, 0);
 } else if (VAR_9 == VAR_3) {
  VAR_10 = &VAR_6->memsw_thresholds;
  VAR_13 = FUNC_4(VAR_6, 1);
 } else
  FUNC_0();


 if (VAR_10->primary)
  FUNC_1(VAR_6, VAR_9 == VAR_3);

 VAR_15 = VAR_10->primary ? VAR_10->primary->size + 1 : 1;


 VAR_11 = FUNC_3(FUNC_11(VAR_11, VAR_5, VAR_15), VAR_1);
 if (!VAR_11) {
  VAR_16 = -VAR_0;
  goto unlock;
 }
 VAR_11->size = VAR_15;


 if (VAR_10->primary) {
  FUNC_5(VAR_11->entries, VAR_10->primary->entries, (VAR_15 - 1) *
    sizeof(struct mem_cgroup_threshold));
 }


 VAR_11->entries[VAR_15 - 1].eventfd = VAR_7;
 VAR_11->entries[VAR_15 - 1].threshold = VAR_12;


 FUNC_10(VAR_11->entries, VAR_15, sizeof(struct mem_cgroup_threshold),
   VAR_4, ((void*)0));


 VAR_11->current_threshold = -1;
 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  if (VAR_11->entries[VAR_14].threshold <= VAR_13) {





   ++VAR_11->current_threshold;
  } else
   break;
 }


 FUNC_2(VAR_10->spare);
 VAR_10->spare = VAR_10->primary;

 FUNC_9(VAR_10->primary, VAR_11);


 FUNC_12();

unlock:
 FUNC_7(&VAR_6->thresholds_lock);

 return VAR_16;
}
