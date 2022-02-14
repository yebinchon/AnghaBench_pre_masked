
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct netconfmsg {int ncm_family; } ;
struct ipv4_devconf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ipv4_devconf,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_1 (struct sk_buff*,int,int) ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*) ;
 struct netconfmsg* FUNC_3 (struct nlmsghdr*) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_5 (struct sk_buff*,int ,int ,int,int,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_16, int VAR_17,
         struct ipv4_devconf *VAR_18, u32 VAR_19,
         u32 VAR_20, int VAR_21, unsigned int VAR_22,
         int VAR_23)
{
 struct nlmsghdr *VAR_24;
 struct netconfmsg *VAR_25;
 bool VAR_26 = 0;

 VAR_24 = FUNC_5(VAR_16, VAR_19, VAR_20, VAR_21, sizeof(struct netconfmsg),
   VAR_22);
 if (!VAR_24)
  return -VAR_2;

 if (VAR_23 == VAR_6)
  VAR_26 = 1;

 VAR_25 = FUNC_3(VAR_24);
 VAR_25->ncm_family = VAR_0;

 if (FUNC_1(VAR_16, VAR_9, VAR_17) < 0)
  goto nla_put_failure;

 if (!VAR_18)
  goto out;

 if ((VAR_26 || VAR_23 == VAR_8) &&
     FUNC_1(VAR_16, VAR_8,
   FUNC_0(*VAR_18, VAR_3)) < 0)
  goto nla_put_failure;
 if ((VAR_26 || VAR_23 == VAR_13) &&
     FUNC_1(VAR_16, VAR_13,
   FUNC_0(*VAR_18, VAR_15)) < 0)
  goto nla_put_failure;
 if ((VAR_26 || VAR_23 == VAR_11) &&
     FUNC_1(VAR_16, VAR_11,
   FUNC_0(*VAR_18, VAR_5)) < 0)
  goto nla_put_failure;
 if ((VAR_26 || VAR_23 == VAR_7) &&
     FUNC_1(VAR_16, VAR_7,
   FUNC_0(*VAR_18, VAR_1)) < 0)
  goto nla_put_failure;
 if ((VAR_26 || VAR_23 == VAR_12) &&
     FUNC_1(VAR_16, VAR_12,
   FUNC_0(*VAR_18, VAR_14)) < 0)
  goto nla_put_failure;
 if ((VAR_26 || VAR_23 == VAR_10) &&
     FUNC_1(VAR_16, VAR_10,
   FUNC_0(*VAR_18, VAR_4)) < 0)
  goto nla_put_failure;

out:
 FUNC_4(VAR_16, VAR_24);
 return 0;

nla_put_failure:
 FUNC_2(VAR_16, VAR_24);
 return -VAR_2;
}
