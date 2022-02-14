
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct fib6_config {int fc_delete_all_nh; scalar_t__ fc_mp; scalar_t__ fc_nh_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct fib6_config*,struct netlink_ext_ack*) ;
 int FUNC_2 (struct fib6_config*,struct netlink_ext_ack*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*,struct fib6_config*,struct netlink_ext_ack*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_1, struct nlmsghdr *VAR_2,
         struct netlink_ext_ack *VAR_3)
{
 struct fib6_config VAR_4;
 int VAR_5;

 VAR_5 = FUNC_4(VAR_1, VAR_2, &VAR_4, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_4.fc_nh_id &&
     !FUNC_3(FUNC_5(VAR_1->sk), VAR_4.fc_nh_id)) {
  FUNC_0(VAR_3, "Nexthop id does not exist");
  return -VAR_0;
 }

 if (VAR_4.fc_mp)
  return FUNC_2(&VAR_4, VAR_3);
 else {
  VAR_4.fc_delete_all_nh = 1;
  return FUNC_1(&VAR_4, VAR_3);
 }
}
