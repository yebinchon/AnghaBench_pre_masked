
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_cgroup {int dummy; } ;
struct TYPE_2__ {int lock; struct mem_cgroup* to; struct mem_cgroup* from; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (struct mem_cgroup*,struct mem_cgroup*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct mem_cgroup *VAR_1)
{
 struct mem_cgroup *VAR_2;
 struct mem_cgroup *VAR_3;
 bool VAR_4 = 0;




 FUNC_1(&VAR_0.lock);
 VAR_2 = VAR_0.from;
 VAR_3 = VAR_0.to;
 if (!VAR_2)
  goto unlock;

 VAR_4 = FUNC_0(VAR_2, VAR_1) ||
  FUNC_0(VAR_3, VAR_1);
unlock:
 FUNC_2(&VAR_0.lock);
 return VAR_4;
}
