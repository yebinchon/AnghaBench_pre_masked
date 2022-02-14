
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mem_cgroup_threshold_ary {int current_threshold; int size; TYPE_3__* entries; } ;
struct TYPE_5__ {int primary; } ;
struct TYPE_4__ {int primary; } ;
struct mem_cgroup {TYPE_2__ memsw_thresholds; TYPE_1__ thresholds; } ;
struct TYPE_6__ {unsigned long threshold; int eventfd; } ;


 int FUNC_0 (int ,int) ;
 unsigned long FUNC_1 (struct mem_cgroup*,int) ;
 struct mem_cgroup_threshold_ary* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct mem_cgroup *VAR_0, bool VAR_1)
{
 struct mem_cgroup_threshold_ary *VAR_2;
 unsigned long VAR_3;
 int VAR_4;

 FUNC_3();
 if (!VAR_1)
  VAR_2 = FUNC_2(VAR_0->thresholds.primary);
 else
  VAR_2 = FUNC_2(VAR_0->memsw_thresholds.primary);

 if (!VAR_2)
  goto unlock;

 VAR_3 = FUNC_1(VAR_0, VAR_1);






 VAR_4 = VAR_2->current_threshold;







 for (; VAR_4 >= 0 && FUNC_5(VAR_2->entries[VAR_4].threshold > VAR_3); VAR_4--)
  FUNC_0(VAR_2->entries[VAR_4].eventfd, 1);


 VAR_4++;







 for (; VAR_4 < VAR_2->size && FUNC_5(VAR_2->entries[VAR_4].threshold <= VAR_3); VAR_4++)
  FUNC_0(VAR_2->entries[VAR_4].eventfd, 1);


 VAR_2->current_threshold = VAR_4 - 1;
unlock:
 FUNC_4();
}
