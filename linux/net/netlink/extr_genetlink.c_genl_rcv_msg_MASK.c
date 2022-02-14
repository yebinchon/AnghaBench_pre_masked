
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_type; } ;
struct netlink_ext_ack {int dummy; } ;
struct genl_family {int parallel_ops; } ;


 int VAR_0 ;
 struct genl_family* FUNC_0 (int ) ;
 int FUNC_1 (struct genl_family const*,struct sk_buff*,struct nlmsghdr*,struct netlink_ext_ack*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1, struct nlmsghdr *VAR_2,
   struct netlink_ext_ack *VAR_3)
{
 const struct genl_family *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_2->nlmsg_type);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 if (!VAR_4->parallel_ops)
  FUNC_2();

 VAR_5 = FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3);

 if (!VAR_4->parallel_ops)
  FUNC_3();

 return VAR_5;
}
