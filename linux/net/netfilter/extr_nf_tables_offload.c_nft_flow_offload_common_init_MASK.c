
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct flow_cls_common_offload {int prio; struct netlink_ext_ack* extack; int protocol; } ;
typedef int __be16 ;



__attribute__((used)) static void FUNC_0(struct flow_cls_common_offload *VAR_0,
      __be16 VAR_1, int VAR_2,
      struct netlink_ext_ack *VAR_3)
{
 VAR_0->protocol = VAR_1;
 VAR_0->prio = VAR_2;
 VAR_0->extack = VAR_3;
}
