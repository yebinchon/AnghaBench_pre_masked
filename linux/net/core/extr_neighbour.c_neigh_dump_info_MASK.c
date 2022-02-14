
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct rtgenmsg {int rtgen_family; } ;
struct nlmsghdr {int dummy; } ;
struct netlink_callback {int* args; scalar_t__ strict_check; int extack; struct nlmsghdr* nlh; } ;
struct neigh_table {int family; } ;
struct neigh_dump_filter {int dummy; } ;
struct ndmsg {scalar_t__ ndm_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (struct neigh_table*,struct sk_buff*,struct netlink_callback*,struct neigh_dump_filter*) ;
 struct neigh_table** VAR_2 ;
 int FUNC_2 (struct nlmsghdr const*,scalar_t__,struct neigh_dump_filter*,int ) ;
 scalar_t__ FUNC_3 (struct nlmsghdr const*) ;
 int FUNC_4 (struct nlmsghdr const*) ;
 int FUNC_5 (struct neigh_table*,struct sk_buff*,struct netlink_callback*,struct neigh_dump_filter*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_3, struct netlink_callback *VAR_4)
{
 const struct nlmsghdr *VAR_5 = VAR_4->nlh;
 struct neigh_dump_filter VAR_6 = {};
 struct neigh_table *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 VAR_9 = ((struct rtgenmsg *)FUNC_3(VAR_5))->rtgen_family;




 if (FUNC_4(VAR_5) >= sizeof(struct ndmsg) &&
     ((struct ndmsg *)FUNC_3(VAR_5))->ndm_flags == VAR_1)
  VAR_11 = 1;

 VAR_12 = FUNC_2(VAR_5, VAR_4->strict_check, &VAR_6, VAR_4->extack);
 if (VAR_12 < 0 && VAR_4->strict_check)
  return VAR_12;

 VAR_10 = VAR_4->args[0];

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_7 = VAR_2[VAR_8];

  if (!VAR_7)
   continue;
  if (VAR_8 < VAR_10 || (VAR_9 && VAR_7->family != VAR_9))
   continue;
  if (VAR_8 > VAR_10)
   FUNC_0(&VAR_4->args[1], 0, sizeof(VAR_4->args) -
      sizeof(VAR_4->args[0]));
  if (VAR_11)
   VAR_12 = FUNC_5(VAR_7, VAR_3, VAR_4, &VAR_6);
  else
   VAR_12 = FUNC_1(VAR_7, VAR_3, VAR_4, &VAR_6);
  if (VAR_12 < 0)
   break;
 }

 VAR_4->args[0] = VAR_8;
 return VAR_3->len;
}
