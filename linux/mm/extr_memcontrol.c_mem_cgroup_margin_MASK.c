
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max; } ;
struct mem_cgroup {TYPE_1__ memsw; TYPE_1__ memory; } ;


 unsigned long FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 unsigned long FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static unsigned long FUNC_4(struct mem_cgroup *VAR_0)
{
 unsigned long VAR_1 = 0;
 unsigned long VAR_2;
 unsigned long VAR_3;

 VAR_2 = FUNC_3(&VAR_0->memory);
 VAR_3 = FUNC_0(VAR_0->memory.max);
 if (VAR_2 < VAR_3)
  VAR_1 = VAR_3 - VAR_2;

 if (FUNC_1()) {
  VAR_2 = FUNC_3(&VAR_0->memsw);
  VAR_3 = FUNC_0(VAR_0->memsw.max);
  if (VAR_2 <= VAR_3)
   VAR_1 = FUNC_2(VAR_1, VAR_3 - VAR_2);
  else
   VAR_1 = 0;
 }

 return VAR_1;
}
