
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct rtvia {int rtvia_family; int rtvia_addr; } ;
struct nlattr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct TYPE_4__ {int ipv6; int ipv4; } ;
struct fib_nh_common {int nhc_flags; int nhc_family; int nhc_gw_family; scalar_t__ nhc_lwtstate; TYPE_2__* nhc_dev; TYPE_1__ nhc_gw; } ;
struct TYPE_5__ {int ifindex; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,int *,int) ;
 struct rtvia* FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct sk_buff*,int ,int *) ;
 int FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 struct nlattr* FUNC_8 (struct sk_buff*,int ,int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

int FUNC_11(struct sk_buff *VAR_10, const struct fib_nh_common *VAR_11,
       u8 VAR_12, unsigned char *VAR_13, bool VAR_14)
{
 if (VAR_11->nhc_flags & VAR_6)
  *VAR_13 |= VAR_6;

 if (VAR_11->nhc_flags & VAR_7) {
  *VAR_13 |= VAR_7;

  FUNC_9();
  switch (VAR_11->nhc_family) {
  case 129:
   if (FUNC_1(VAR_11->nhc_dev))
    *VAR_13 |= VAR_6;
   break;
  case 128:
   if (FUNC_0(VAR_11->nhc_dev))
    *VAR_13 |= VAR_6;
   break;
  }
  FUNC_10();
 }

 switch (VAR_11->nhc_gw_family) {
 case 129:
  if (FUNC_6(VAR_10, VAR_3, VAR_11->nhc_gw.ipv4))
   goto nla_put_failure;
  break;
 case 128:



  if (VAR_12 != VAR_11->nhc_gw_family) {
   int VAR_15 = sizeof(struct in6_addr);
   struct nlattr *VAR_16;
   struct rtvia *VAR_17;

   VAR_16 = FUNC_8(VAR_10, VAR_5, VAR_15 + 2);
   if (!VAR_16)
    goto nla_put_failure;

   VAR_17 = FUNC_4(VAR_16);
   VAR_17->rtvia_family = 128;
   FUNC_3(VAR_17->rtvia_addr, &VAR_11->nhc_gw.ipv6, VAR_15);
  } else if (FUNC_5(VAR_10, VAR_3,
         &VAR_11->nhc_gw.ipv6) < 0) {
   goto nla_put_failure;
  }
  break;
 }

 *VAR_13 |= (VAR_11->nhc_flags & VAR_9);
 if (VAR_11->nhc_flags & VAR_8)
  *VAR_13 |= VAR_8;

 if (!VAR_14 && VAR_11->nhc_dev &&
     FUNC_7(VAR_10, VAR_4, VAR_11->nhc_dev->ifindex))
  goto nla_put_failure;

 if (VAR_11->nhc_lwtstate &&
     FUNC_2(VAR_10, VAR_11->nhc_lwtstate,
    VAR_1, VAR_2) < 0)
  goto nla_put_failure;

 return 0;

nla_put_failure:
 return -VAR_0;
}
