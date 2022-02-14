
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int tcpmem; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct mem_cgroup*,int ,unsigned int) ;
 int FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (struct mem_cgroup*,unsigned int) ;

void FUNC_4(struct mem_cgroup *VAR_2, unsigned int VAR_3)
{
 if (!FUNC_0(VAR_1)) {
  FUNC_2(&VAR_2->tcpmem, VAR_3);
  return;
 }

 FUNC_1(VAR_2, VAR_0, -VAR_3);

 FUNC_3(VAR_2, VAR_3);
}
