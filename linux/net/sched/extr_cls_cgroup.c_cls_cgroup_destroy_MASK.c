
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int root; } ;
struct netlink_ext_ack {int dummy; } ;
struct cls_cgroup_head {int rwork; int exts; } ;


 int FUNC_0 (struct cls_cgroup_head*) ;
 int VAR_0 ;
 struct cls_cgroup_head* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct tcf_proto *VAR_1, bool VAR_2,
          struct netlink_ext_ack *VAR_3)
{
 struct cls_cgroup_head *VAR_4 = FUNC_1(VAR_1->root);


 if (VAR_4) {
  if (FUNC_2(&VAR_4->exts))
   FUNC_3(&VAR_4->rwork, VAR_0);
  else
   FUNC_0(VAR_4);
 }
}
