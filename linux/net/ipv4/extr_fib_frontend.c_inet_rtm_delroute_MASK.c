
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct fib_table {int dummy; } ;
struct fib_config {int fc_table; scalar_t__ fc_nh_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 struct fib_table* FUNC_1 (struct net*,int ) ;
 int FUNC_2 (struct net*,struct fib_table*,struct fib_config*,struct netlink_ext_ack*) ;
 int FUNC_3 (struct net*,scalar_t__) ;
 int FUNC_4 (struct net*,struct sk_buff*,struct nlmsghdr*,struct fib_config*,struct netlink_ext_ack*) ;
 struct net* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_2, struct nlmsghdr *VAR_3,
        struct netlink_ext_ack *VAR_4)
{
 struct net *VAR_5 = FUNC_5(VAR_2->sk);
 struct fib_config VAR_6;
 struct fib_table *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_5, VAR_2, VAR_3, &VAR_6, VAR_4);
 if (VAR_8 < 0)
  goto errout;

 if (VAR_6.fc_nh_id && !FUNC_3(VAR_5, VAR_6.fc_nh_id)) {
  FUNC_0(VAR_4, "Nexthop id does not exist");
  VAR_8 = -VAR_0;
  goto errout;
 }

 VAR_7 = FUNC_1(VAR_5, VAR_6.fc_table);
 if (!VAR_7) {
  FUNC_0(VAR_4, "FIB table does not exist");
  VAR_8 = -VAR_1;
  goto errout;
 }

 VAR_8 = FUNC_2(VAR_5, VAR_7, &VAR_6, VAR_4);
errout:
 return VAR_8;
}
