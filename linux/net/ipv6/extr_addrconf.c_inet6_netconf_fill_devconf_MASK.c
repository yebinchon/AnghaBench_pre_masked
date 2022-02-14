
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct netconfmsg {int ncm_family; } ;
struct ipv6_devconf {int forwarding; int mc_forwarding; int proxy_ndp; int ignore_routes_with_linkdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int,int) ;
 int FUNC_1 (struct sk_buff*,struct nlmsghdr*) ;
 struct netconfmsg* FUNC_2 (struct nlmsghdr*) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_4 (struct sk_buff*,int ,int ,int,int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_8, int VAR_9,
          struct ipv6_devconf *VAR_10, u32 VAR_11,
          u32 VAR_12, int VAR_13, unsigned int VAR_14,
          int VAR_15)
{
 struct nlmsghdr *VAR_16;
 struct netconfmsg *VAR_17;
 bool VAR_18 = 0;

 VAR_16 = FUNC_4(VAR_8, VAR_11, VAR_12, VAR_13, sizeof(struct netconfmsg),
   VAR_14);
 if (!VAR_16)
  return -VAR_1;

 if (VAR_15 == VAR_2)
  VAR_18 = 1;

 VAR_17 = FUNC_2(VAR_16);
 VAR_17->ncm_family = VAR_0;

 if (FUNC_0(VAR_8, VAR_4, VAR_9) < 0)
  goto nla_put_failure;

 if (!VAR_10)
  goto out;

 if ((VAR_18 || VAR_15 == VAR_3) &&
     FUNC_0(VAR_8, VAR_3, VAR_10->forwarding) < 0)
  goto nla_put_failure;






 if ((VAR_18 || VAR_15 == VAR_7) &&
     FUNC_0(VAR_8, VAR_7, VAR_10->proxy_ndp) < 0)
  goto nla_put_failure;

 if ((VAR_18 || VAR_15 == VAR_5) &&
     FUNC_0(VAR_8, VAR_5,
   VAR_10->ignore_routes_with_linkdown) < 0)
  goto nla_put_failure;

out:
 FUNC_3(VAR_8, VAR_16);
 return 0;

nla_put_failure:
 FUNC_1(VAR_8, VAR_16);
 return -VAR_1;
}
