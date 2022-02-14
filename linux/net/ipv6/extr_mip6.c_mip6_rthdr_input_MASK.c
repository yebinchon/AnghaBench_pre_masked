
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_state {int lock; scalar_t__ coaddr; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int nexthdr; } ;
struct rt2_hdr {TYPE_1__ rt_hdr; } ;
struct ipv6hdr {int daddr; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct in6_addr*) ;
 int FUNC_1 (int *,struct in6_addr*) ;
 struct ipv6hdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct xfrm_state *VAR_1, struct sk_buff *VAR_2)
{
 const struct ipv6hdr *VAR_3 = FUNC_2(VAR_2);
 struct rt2_hdr *VAR_4 = (struct rt2_hdr *)VAR_2->data;
 int VAR_5 = VAR_4->rt_hdr.nexthdr;

 FUNC_3(&VAR_1->lock);
 if (!FUNC_1(&VAR_3->daddr, (struct in6_addr *)VAR_1->coaddr) &&
     !FUNC_0((struct in6_addr *)VAR_1->coaddr))
  VAR_5 = -VAR_0;
 FUNC_4(&VAR_1->lock);

 return VAR_5;
}
