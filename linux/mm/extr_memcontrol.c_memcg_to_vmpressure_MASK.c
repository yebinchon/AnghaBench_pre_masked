
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmpressure {int dummy; } ;
struct mem_cgroup {struct vmpressure vmpressure; } ;


 struct mem_cgroup* VAR_0 ;

struct vmpressure *FUNC_0(struct mem_cgroup *VAR_1)
{
 if (!VAR_1)
  VAR_1 = VAR_0;
 return &VAR_1->vmpressure;
}
