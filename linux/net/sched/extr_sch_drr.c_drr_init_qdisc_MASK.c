
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct drr_sched {int active; int clhash; int filter_list; int block; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct drr_sched* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (int *,int *,struct Qdisc*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_4(struct Qdisc *VAR_0, struct nlattr *VAR_1,
     struct netlink_ext_ack *VAR_2)
{
 struct drr_sched *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_3(&VAR_3->block, &VAR_3->filter_list, VAR_0, VAR_2);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_1(&VAR_3->clhash);
 if (VAR_4 < 0)
  return VAR_4;
 FUNC_0(&VAR_3->active);
 return 0;
}
