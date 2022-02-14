
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct in6_addr {int dummy; } ;
struct TYPE_6__ {struct in6_addr dst; struct in6_addr src; } ;
struct TYPE_5__ {int dst; int src; } ;
struct TYPE_7__ {TYPE_2__ ipv6; TYPE_1__ ipv4; } ;
struct TYPE_8__ {TYPE_3__ u; } ;
struct ip_tunnel_info {TYPE_4__ key; } ;
typedef int __be32 ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned short FUNC_0 (struct ip_tunnel_info const*) ;
 int FUNC_1 (struct sk_buff*,int ,struct in6_addr const*) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_7,
         const struct ip_tunnel_info *VAR_8)
{
 unsigned short VAR_9 = FUNC_0(VAR_8);

 if (VAR_9 == VAR_0) {
  __be32 VAR_10 = VAR_8->key.u.ipv4.src;
  __be32 VAR_11 = VAR_8->key.u.ipv4.dst;

  if (!FUNC_2(VAR_7, VAR_4, VAR_10) &&
      !FUNC_2(VAR_7, VAR_3, VAR_11))
   return 0;
 }

 if (VAR_9 == VAR_1) {
  const struct in6_addr *VAR_12 = &VAR_8->key.u.ipv6.src;
  const struct in6_addr *VAR_13 = &VAR_8->key.u.ipv6.dst;

  if (!FUNC_1(VAR_7,
          VAR_6, VAR_12) &&
      !FUNC_1(VAR_7,
          VAR_5, VAR_13))
   return 0;
 }

 return -VAR_2;
}
