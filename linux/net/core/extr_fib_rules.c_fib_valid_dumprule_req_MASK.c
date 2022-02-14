
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct netlink_ext_ack {int dummy; } ;
struct fib_rule_hdr {scalar_t__ flags; scalar_t__ action; scalar_t__ res2; scalar_t__ res1; scalar_t__ table; scalar_t__ tos; scalar_t__ src_len; scalar_t__ dst_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 scalar_t__ FUNC_1 (struct nlmsghdr const*,int) ;
 struct fib_rule_hdr* FUNC_2 (struct nlmsghdr const*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(const struct nlmsghdr *VAR_1,
       struct netlink_ext_ack *VAR_2)
{
 struct fib_rule_hdr *VAR_3;

 if (VAR_1->nlmsg_len < FUNC_3(sizeof(*VAR_3))) {
  FUNC_0(VAR_2, "Invalid header for fib rule dump request");
  return -VAR_0;
 }

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3->dst_len || VAR_3->src_len || VAR_3->tos || VAR_3->table ||
     VAR_3->res1 || VAR_3->res2 || VAR_3->action || VAR_3->flags) {
  FUNC_0(VAR_2,
          "Invalid values in header for fib rule dump request");
  return -VAR_0;
 }

 if (FUNC_1(VAR_1, sizeof(*VAR_3))) {
  FUNC_0(VAR_2, "Invalid data after header in fib rule dump request");
  return -VAR_0;
 }

 return 0;
}
