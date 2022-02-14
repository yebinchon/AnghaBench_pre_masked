
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int css; int memsw; int memory; } ;


 int FUNC_0 (int *,unsigned int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct mem_cgroup*) ;
 int FUNC_3 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct mem_cgroup *VAR_0, unsigned int VAR_1)
{
 if (FUNC_2(VAR_0))
  return;

 FUNC_3(&VAR_0->memory, VAR_1);
 if (FUNC_1())
  FUNC_3(&VAR_0->memsw, VAR_1);

 FUNC_0(&VAR_0->css, VAR_1);
}
