
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct mpls_route_config {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mpls_route_config*) ;
 struct mpls_route_config* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mpls_route_config*,struct netlink_ext_ack*) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*,struct mpls_route_config*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2, struct nlmsghdr *VAR_3,
        struct netlink_ext_ack *VAR_4)
{
 struct mpls_route_config *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_5, VAR_4);
 if (VAR_6 < 0)
  goto out;

 VAR_6 = FUNC_2(VAR_5, VAR_4);
out:
 FUNC_0(VAR_5);

 return VAR_6;
}
