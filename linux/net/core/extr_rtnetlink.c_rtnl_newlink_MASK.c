
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct nlmsghdr*,struct nlattr**,struct netlink_ext_ack*) ;
 int FUNC_1 (struct nlattr**) ;
 struct nlattr** FUNC_2 (scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_3, struct nlmsghdr *VAR_4,
   struct netlink_ext_ack *VAR_5)
{
 struct nlattr **VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_2 + 1, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_6, VAR_5);
 FUNC_1(VAR_6);
 return VAR_7;
}
