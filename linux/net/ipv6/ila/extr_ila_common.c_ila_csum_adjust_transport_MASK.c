
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int check; } ;
struct tcphdr {int check; } ;
struct sk_buff {int ip_summed; } ;
struct ipv6hdr {int nexthdr; } ;
struct ila_params {int dummy; } ;
struct icmp6hdr {int icmp6_cksum; } ;
typedef int __wsum ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct ipv6hdr*,struct ila_params*) ;
 int FUNC_1 (int *,struct sk_buff*,int ,int) ;
 struct ipv6hdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,size_t) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_2,
          struct ila_params *VAR_3)
{
 size_t VAR_4 = sizeof(struct ipv6hdr);
 struct ipv6hdr *VAR_5 = FUNC_2(VAR_2);
 __wsum VAR_6;

 switch (VAR_5->nexthdr) {
 case 129:
  if (FUNC_3(FUNC_4(VAR_2, VAR_4 + sizeof(struct tcphdr)))) {
   struct tcphdr *VAR_7 = (struct tcphdr *)
     (FUNC_5(VAR_2) + VAR_4);

   VAR_6 = FUNC_0(VAR_5, VAR_3);
   FUNC_1(&VAR_7->check, VAR_2,
       VAR_6, 1);
  }
  break;
 case 128:
  if (FUNC_3(FUNC_4(VAR_2, VAR_4 + sizeof(struct udphdr)))) {
   struct udphdr *VAR_8 = (struct udphdr *)
     (FUNC_5(VAR_2) + VAR_4);

   if (VAR_8->check || VAR_2->ip_summed == VAR_0) {
    VAR_6 = FUNC_0(VAR_5, VAR_3);
    FUNC_1(&VAR_8->check, VAR_2,
        VAR_6, 1);
    if (!VAR_8->check)
     VAR_8->check = VAR_1;
   }
  }
  break;
 case 130:
  if (FUNC_3(FUNC_4(VAR_2,
      VAR_4 + sizeof(struct icmp6hdr)))) {
   struct icmp6hdr *VAR_9 = (struct icmp6hdr *)
     (FUNC_5(VAR_2) + VAR_4);

   VAR_6 = FUNC_0(VAR_5, VAR_3);
   FUNC_1(&VAR_9->icmp6_cksum, VAR_2,
       VAR_6, 1);
  }
  break;
 }
}
