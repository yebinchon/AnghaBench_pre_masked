
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_red_qopt_offload {int command; int child_handle; int parent; int handle; } ;
struct netlink_ext_ack {int dummy; } ;
struct Qdisc {int handle; int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (int ,struct Qdisc*,struct Qdisc*,struct Qdisc*,int ,struct tc_red_qopt_offload*,struct netlink_ext_ack*) ;

__attribute__((used)) static void FUNC_2(struct Qdisc *VAR_2,
         struct Qdisc *VAR_3, struct Qdisc *VAR_4,
         struct netlink_ext_ack *VAR_5)
{
 struct tc_red_qopt_offload VAR_6 = {
  .handle = VAR_2->handle,
  .parent = VAR_2->parent,
  .child_handle = VAR_3->handle,
  .command = VAR_0,
 };

 FUNC_1(FUNC_0(VAR_2), VAR_2, VAR_3, VAR_4,
       VAR_1, &VAR_6, VAR_5);
}
