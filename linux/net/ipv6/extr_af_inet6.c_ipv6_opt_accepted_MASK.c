
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct TYPE_3__ {scalar_t__ odstopts; scalar_t__ dstopts; scalar_t__ osrcrt; scalar_t__ srcrt; scalar_t__ rxflow; scalar_t__ ohopopts; scalar_t__ hopopts; } ;
struct TYPE_4__ {TYPE_1__ bits; scalar_t__ all; } ;
struct ipv6_pinfo {TYPE_2__ rxopt; } ;
struct inet6_skb_parm {int flags; scalar_t__ dst0; scalar_t__ dst1; scalar_t__ srcrt; } ;


 int VAR_0 ;
 struct ipv6_pinfo* FUNC_0 (struct sock const*) ;
 scalar_t__ FUNC_1 (struct ipv6hdr*) ;
 scalar_t__ FUNC_2 (struct sk_buff const*) ;

bool FUNC_3(const struct sock *VAR_1, const struct sk_buff *VAR_2,
         const struct inet6_skb_parm *VAR_3)
{
 const struct ipv6_pinfo *VAR_4 = FUNC_0(VAR_1);

 if (VAR_4->rxopt.all) {
  if (((VAR_3->flags & VAR_0) &&
       (VAR_4->rxopt.bits.hopopts || VAR_4->rxopt.bits.ohopopts)) ||
      (FUNC_1((struct ipv6hdr *) FUNC_2(VAR_2)) &&
       VAR_4->rxopt.bits.rxflow) ||
      (VAR_3->srcrt && (VAR_4->rxopt.bits.srcrt ||
       VAR_4->rxopt.bits.osrcrt)) ||
      ((VAR_3->dst1 || VAR_3->dst0) &&
       (VAR_4->rxopt.bits.dstopts || VAR_4->rxopt.bits.odstopts)))
   return 1;
 }
 return 0;
}
