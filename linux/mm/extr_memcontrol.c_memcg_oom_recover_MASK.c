
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {scalar_t__ under_oom; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,struct mem_cgroup*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct mem_cgroup *VAR_2)
{
 if (VAR_2 && VAR_2->under_oom)
  FUNC_0(&VAR_1, VAR_0, 0, VAR_2);
}
