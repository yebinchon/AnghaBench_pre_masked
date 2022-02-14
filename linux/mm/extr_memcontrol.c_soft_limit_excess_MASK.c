
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int soft_limit; int memory; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int *) ;

__attribute__((used)) static unsigned long FUNC_2(struct mem_cgroup *VAR_0)
{
 unsigned long VAR_1 = FUNC_1(&VAR_0->memory);
 unsigned long VAR_2 = FUNC_0(VAR_0->soft_limit);
 unsigned long VAR_3 = 0;

 if (VAR_1 > VAR_2)
  VAR_3 = VAR_1 - VAR_2;

 return VAR_3;
}
