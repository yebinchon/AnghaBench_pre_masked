
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dev; } ;
struct in6_addr {int dummy; } ;
struct ipv6hdr {int hop_limit; struct in6_addr daddr; struct in6_addr saddr; int nexthdr; int payload_len; } ;
struct TYPE_2__ {unsigned int ndisc_tclass; } ;
struct inet6_dev {TYPE_1__ cnf; } ;


 int VAR_0 ;
 struct inet6_dev* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ipv6hdr*,unsigned int,int ) ;
 struct ipv6hdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_8(struct sk_buff *VAR_1,
         const struct in6_addr *VAR_2,
         const struct in6_addr *VAR_3,
         int VAR_4, int VAR_5)
{
 struct ipv6hdr *VAR_6;
 struct inet6_dev *VAR_7;
 unsigned VAR_8;

 FUNC_4();
 VAR_7 = FUNC_0(VAR_1->dev);
 VAR_8 = VAR_7 ? VAR_7->cnf.ndisc_tclass : 0;
 FUNC_5();

 FUNC_6(VAR_1, sizeof(*VAR_6));
 FUNC_7(VAR_1);
 VAR_6 = FUNC_3(VAR_1);

 FUNC_2(VAR_6, VAR_8, 0);

 VAR_6->payload_len = FUNC_1(VAR_5);
 VAR_6->nexthdr = VAR_0;
 VAR_6->hop_limit = VAR_4;

 VAR_6->saddr = *VAR_2;
 VAR_6->daddr = *VAR_3;
}
