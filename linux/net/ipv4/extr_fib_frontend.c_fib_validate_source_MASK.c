
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; } ;
struct TYPE_2__ {scalar_t__ fib_has_custom_local_routes; } ;
struct net {TYPE_1__ ipv4; } ;
struct in_device {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct in_device*) ;
 int FUNC_1 (struct in_device*) ;
 int FUNC_2 (struct in_device*) ;
 int FUNC_3 (struct sk_buff*,int ,int ,int ,int,struct net_device*,int,struct in_device*,scalar_t__*) ;
 struct net* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net*) ;
 int FUNC_6 (struct net*) ;
 scalar_t__ FUNC_7 (struct net*,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;

int FUNC_9(struct sk_buff *VAR_1, __be32 VAR_2, __be32 VAR_3,
   u8 VAR_4, int VAR_5, struct net_device *VAR_6,
   struct in_device *VAR_7, u32 *VAR_8)
{
 int VAR_9 = FUNC_8(VAR_1) ? 0 : FUNC_1(VAR_7);
 struct net *VAR_10 = FUNC_4(VAR_6);

 if (!VAR_9 && !FUNC_6(VAR_10) &&
     (VAR_6->ifindex != VAR_5 || !FUNC_2(VAR_7))) {
  if (FUNC_0(VAR_7))
   goto ok;




  if (VAR_10->ipv4.fib_has_custom_local_routes ||
      FUNC_5(VAR_10))
   goto full_check;
  if (FUNC_7(VAR_10, VAR_2))
   return -VAR_0;

ok:
  *VAR_8 = 0;
  return 0;
 }

full_check:
 return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_9, VAR_7, VAR_8);
}
