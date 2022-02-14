
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int memsw; int memory; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mem_cgroup*) ;
 unsigned long FUNC_1 (struct mem_cgroup*,int ) ;
 unsigned long FUNC_2 (int *) ;

__attribute__((used)) static unsigned long FUNC_3(struct mem_cgroup *VAR_3, bool VAR_4)
{
 unsigned long VAR_5;

 if (FUNC_0(VAR_3)) {
  VAR_5 = FUNC_1(VAR_3, VAR_0) +
   FUNC_1(VAR_3, VAR_1);
  if (VAR_4)
   VAR_5 += FUNC_1(VAR_3, VAR_2);
 } else {
  if (!VAR_4)
   VAR_5 = FUNC_2(&VAR_3->memory);
  else
   VAR_5 = FUNC_2(&VAR_3->memsw);
 }
 return VAR_5;
}
