
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int ip_summed; int csum; } ;
struct ipv6hdr {int daddr; int saddr; } ;
struct icmp6hdr {scalar_t__ icmp6_cksum; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,unsigned int,int ,int ) ;
 int FUNC_1 (struct icmp6hdr*,unsigned int,int ) ;
 struct ipv6hdr* FUNC_2 (struct sk_buff*) ;
 struct icmp6hdr* FUNC_3 (struct sk_buff*,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2, unsigned int VAR_3,
         unsigned int VAR_4)
{
 struct icmp6hdr *VAR_5;
 const struct ipv6hdr *VAR_6;

 VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4, sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return 0;

 VAR_6 = FUNC_2(VAR_2);
 VAR_5->icmp6_cksum = 0;
 VAR_2->csum = FUNC_1(VAR_5, VAR_4 - VAR_3, 0);
 VAR_5->icmp6_cksum = FUNC_0(&VAR_6->saddr, &VAR_6->daddr,
           VAR_4 - VAR_3, VAR_1,
           VAR_2->csum);

 VAR_2->ip_summed = VAR_0;

 return 1;
}
