
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int in6; } ;
struct TYPE_4__ {int in6; } ;
struct TYPE_6__ {TYPE_2__ saddr; TYPE_1__ daddr; } ;
struct xfrm_state {TYPE_3__ sel; } ;
struct sk_buff {scalar_t__ len; scalar_t__ mac_len; } ;
struct ipv6hdr {int saddr; int daddr; int payload_len; } ;


 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (scalar_t__) ;
 struct ipv6hdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct xfrm_state *VAR_0, struct sk_buff *VAR_1)
{
 struct ipv6hdr *VAR_2;
 int VAR_3 = sizeof(struct ipv6hdr);
 int VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_3 + VAR_1->mac_len);
 if (VAR_4)
  goto out;

 FUNC_0(VAR_1, VAR_3);
 FUNC_5(VAR_1);
 FUNC_4(VAR_1);

 FUNC_6(VAR_1);

 VAR_2 = FUNC_2(VAR_1);
 VAR_2->payload_len = FUNC_1(VAR_1->len - VAR_3);
 VAR_2->daddr = VAR_0->sel.daddr.in6;
 VAR_2->saddr = VAR_0->sel.saddr.in6;
 VAR_4 = 0;
out:
 return VAR_4;
}
