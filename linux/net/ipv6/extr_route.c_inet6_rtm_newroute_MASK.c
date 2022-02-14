
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct fib6_config {scalar_t__ fc_metric; scalar_t__ fc_mp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fib6_config*,int ,struct netlink_ext_ack*) ;
 int FUNC_1 (struct fib6_config*,struct netlink_ext_ack*) ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*,struct fib6_config*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2, struct nlmsghdr *VAR_3,
         struct netlink_ext_ack *VAR_4)
{
 struct fib6_config VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_3, &VAR_5, VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_5.fc_metric == 0)
  VAR_5.fc_metric = VAR_1;

 if (VAR_5.fc_mp)
  return FUNC_1(&VAR_5, VAR_4);
 else
  return FUNC_0(&VAR_5, VAR_0, VAR_4);
}
