
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned long max; } ;
struct TYPE_5__ {unsigned long max; } ;
struct TYPE_4__ {unsigned long max; } ;
struct mem_cgroup {TYPE_3__ swap; TYPE_2__ memsw; TYPE_1__ memory; } ;


 scalar_t__ FUNC_0 (struct mem_cgroup*) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ VAR_0 ;

unsigned long FUNC_2(struct mem_cgroup *VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = VAR_1->memory.max;
 if (FUNC_0(VAR_1)) {
  unsigned long VAR_3;
  unsigned long VAR_4;

  VAR_3 = VAR_1->memsw.max;
  VAR_4 = VAR_1->swap.max;
  VAR_4 = FUNC_1(VAR_4, (unsigned long)VAR_0);
  VAR_2 = FUNC_1(VAR_2 + VAR_4, VAR_3);
 }
 return VAR_2;
}
