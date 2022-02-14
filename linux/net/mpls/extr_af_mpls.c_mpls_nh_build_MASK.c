
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct mpls_route {int dummy; } ;
struct mpls_nh {int nh_via_table; int nh_via_alen; int nh_label; int nh_labels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mpls_route*,struct mpls_nh*) ;
 int FUNC_1 (struct net*,struct mpls_route*,struct mpls_nh*,int) ;
 int FUNC_2 (struct nlattr*,int ,int *,int ,struct netlink_ext_ack*) ;
 int FUNC_3 (struct nlattr*,int *,int *,int ,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_2, struct mpls_route *VAR_3,
    struct mpls_nh *VAR_4, int VAR_5, struct nlattr *VAR_6,
    struct nlattr *VAR_7, u8 VAR_8,
    struct netlink_ext_ack *VAR_9)
{
 int VAR_10 = -VAR_0;

 if (!VAR_4)
  goto errout;

 if (VAR_7) {
  VAR_10 = FUNC_2(VAR_7, VAR_8, &VAR_4->nh_labels,
         VAR_4->nh_label, VAR_9);
  if (VAR_10)
   goto errout;
 }

 if (VAR_6) {
  VAR_10 = FUNC_3(VAR_6, &VAR_4->nh_via_alen, &VAR_4->nh_via_table,
      FUNC_0(VAR_3, VAR_4), VAR_9);
  if (VAR_10)
   goto errout;
 } else {
  VAR_4->nh_via_table = VAR_1;
 }

 VAR_10 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_10)
  goto errout;

 return 0;

errout:
 return VAR_10;
}
