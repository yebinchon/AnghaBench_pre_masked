
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int tcpmem_active; int tcpmem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mem_cgroup *VAR_2, unsigned long VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_0);

 VAR_4 = FUNC_2(&VAR_2->tcpmem, VAR_3);
 if (VAR_4)
  goto out;

 if (!VAR_2->tcpmem_active) {
  FUNC_3(&VAR_1);
  VAR_2->tcpmem_active = 1;
 }
out:
 FUNC_1(&VAR_0);
 return VAR_4;
}
