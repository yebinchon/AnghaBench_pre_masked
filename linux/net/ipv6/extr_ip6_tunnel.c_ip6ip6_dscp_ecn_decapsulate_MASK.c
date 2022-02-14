
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct ip6_tnl {TYPE_1__ parms; } ;


 int FUNC_0 (struct ipv6hdr const*,struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ipv6hdr const*) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(const struct ip6_tnl *VAR_1,
           const struct ipv6hdr *VAR_2,
           struct sk_buff *VAR_3)
{
 if (VAR_1->parms.flags & VAR_0)
  FUNC_1(FUNC_2(VAR_2), FUNC_3(VAR_3));

 return FUNC_0(VAR_2, VAR_3);
}
