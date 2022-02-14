
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {struct tc_u_common* data; } ;
struct tc_u_knode {int dummy; } ;
struct tc_u_hnode {int refcnt; scalar_t__ is_root; int handle; } ;
struct tc_u_common {int refcnt; scalar_t__ knodes; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct tcf_proto*,struct tc_u_knode*) ;
 int FUNC_3 (struct tcf_proto*,struct tc_u_hnode*,struct netlink_ext_ack*) ;
 int FUNC_4 (struct tcf_proto*,struct tc_u_knode*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_5(struct tcf_proto *VAR_2, void *VAR_3, bool *VAR_4,
        bool VAR_5, struct netlink_ext_ack *VAR_6)
{
 struct tc_u_hnode *VAR_7 = VAR_3;
 struct tc_u_common *VAR_8 = VAR_2->data;
 int VAR_9 = 0;

 if (FUNC_1(VAR_7->handle)) {
  FUNC_4(VAR_2, (struct tc_u_knode *)VAR_7, VAR_6);
  VAR_9 = FUNC_2(VAR_2, (struct tc_u_knode *)VAR_7);
  goto out;
 }

 if (VAR_7->is_root) {
  FUNC_0(VAR_6, "Not allowed to delete root node");
  return -VAR_1;
 }

 if (VAR_7->refcnt == 1) {
  FUNC_3(VAR_2, VAR_7, VAR_6);
 } else {
  FUNC_0(VAR_6, "Can not delete in-use filter");
  return -VAR_0;
 }

out:
 *VAR_4 = VAR_8->refcnt == 1 && VAR_8->knodes == 0;
 return VAR_9;
}
