
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup_eventfd_list {int list; struct eventfd_ctx* eventfd; } ;
struct mem_cgroup {scalar_t__ under_oom; int oom_notify; } ;
struct eventfd_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eventfd_ctx*,int) ;
 struct mem_cgroup_eventfd_list* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct mem_cgroup *VAR_3,
 struct eventfd_ctx *VAR_4, const char *VAR_5)
{
 struct mem_cgroup_eventfd_list *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_3(&VAR_2);

 VAR_6->eventfd = VAR_4;
 FUNC_2(&VAR_6->list, &VAR_3->oom_notify);


 if (VAR_3->under_oom)
  FUNC_0(VAR_4, 1);
 FUNC_4(&VAR_2);

 return 0;
}
