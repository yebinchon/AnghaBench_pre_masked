
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_skbprio_qopt {int limit; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct Qdisc {int limit; } ;


 struct tc_skbprio_qopt* FUNC_0 (struct nlattr*) ;

__attribute__((used)) static int FUNC_1(struct Qdisc *VAR_0, struct nlattr *VAR_1,
   struct netlink_ext_ack *VAR_2)
{
 struct tc_skbprio_qopt *VAR_3 = FUNC_0(VAR_1);

 VAR_0->limit = VAR_3->limit;
 return 0;
}
