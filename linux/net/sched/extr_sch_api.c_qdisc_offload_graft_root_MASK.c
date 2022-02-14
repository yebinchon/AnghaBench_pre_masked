
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_root_qopt_offload {int ingress; int handle; int command; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct Qdisc {int flags; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int *,struct Qdisc*,struct Qdisc*,int ,struct tc_root_qopt_offload*,struct netlink_ext_ack*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_3,
         struct Qdisc *VAR_4, struct Qdisc *VAR_5,
         struct netlink_ext_ack *VAR_6)
{
 struct tc_root_qopt_offload VAR_7 = {
  .command = VAR_1,
  .handle = VAR_4 ? VAR_4->handle : 0,
  .ingress = (VAR_4 && VAR_4->flags & VAR_0) ||
      (VAR_5 && VAR_5->flags & VAR_0),
 };

 FUNC_0(VAR_3, ((void*)0), VAR_4, VAR_5,
       VAR_2, &VAR_7, VAR_6);
}
