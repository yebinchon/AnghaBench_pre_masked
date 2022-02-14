
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {int fib_has_custom_local_routes; } ;
struct net {TYPE_1__ ipv4; } ;
struct fib_table {int dummy; } ;
struct fib_config {scalar_t__ fc_type; int fc_table; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct fib_table* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct net*,struct fib_table*,struct fib_config*,struct netlink_ext_ack*) ;
 int FUNC_2 (struct net*,struct sk_buff*,struct nlmsghdr*,struct fib_config*,struct netlink_ext_ack*) ;
 struct net* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2, struct nlmsghdr *VAR_3,
        struct netlink_ext_ack *VAR_4)
{
 struct net *VAR_5 = FUNC_3(VAR_2->sk);
 struct fib_config VAR_6;
 struct fib_table *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_5, VAR_2, VAR_3, &VAR_6, VAR_4);
 if (VAR_8 < 0)
  goto errout;

 VAR_7 = FUNC_0(VAR_5, VAR_6.fc_table);
 if (!VAR_7) {
  VAR_8 = -VAR_0;
  goto errout;
 }

 VAR_8 = FUNC_1(VAR_5, VAR_7, &VAR_6, VAR_4);
 if (!VAR_8 && VAR_6.fc_type == VAR_1)
  VAR_5->ipv4.fib_has_custom_local_routes = 1;
errout:
 return VAR_8;
}
