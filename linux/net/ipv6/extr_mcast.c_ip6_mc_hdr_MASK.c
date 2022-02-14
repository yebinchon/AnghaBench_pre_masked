
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {struct net_device* dev; void* protocol; } ;
struct net_device {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ipv6hdr {int nexthdr; struct in6_addr daddr; struct in6_addr saddr; int hop_limit; void* payload_len; } ;
struct TYPE_2__ {int hop_limit; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct ipv6hdr*,int ,int ) ;
 struct ipv6hdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_1, struct sk_buff *VAR_2,
         struct net_device *VAR_3,
         const struct in6_addr *VAR_4,
         const struct in6_addr *VAR_5,
         int VAR_6, int VAR_7)
{
 struct ipv6hdr *VAR_8;

 VAR_2->protocol = FUNC_0(VAR_0);
 VAR_2->dev = VAR_3;

 FUNC_5(VAR_2);
 FUNC_4(VAR_2, sizeof(struct ipv6hdr));
 VAR_8 = FUNC_3(VAR_2);

 FUNC_2(VAR_8, 0, 0);

 VAR_8->payload_len = FUNC_0(VAR_7);
 VAR_8->nexthdr = VAR_6;
 VAR_8->hop_limit = FUNC_1(VAR_1)->hop_limit;

 VAR_8->saddr = *VAR_4;
 VAR_8->daddr = *VAR_5;
}
