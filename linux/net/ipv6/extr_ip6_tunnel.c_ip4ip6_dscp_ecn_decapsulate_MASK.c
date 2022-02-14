
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct ip6_tnl {TYPE_1__ parms; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (struct ipv6hdr const*,struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct ipv6hdr const*) ;

__attribute__((used)) static int FUNC_4(const struct ip6_tnl *VAR_2,
           const struct ipv6hdr *VAR_3,
           struct sk_buff *VAR_4)
{
 __u8 VAR_5 = FUNC_3(VAR_3) & ~VAR_0;

 if (VAR_2->parms.flags & VAR_1)
  FUNC_2(FUNC_1(VAR_4), VAR_0, VAR_5);

 return FUNC_0(VAR_3, VAR_4);
}
