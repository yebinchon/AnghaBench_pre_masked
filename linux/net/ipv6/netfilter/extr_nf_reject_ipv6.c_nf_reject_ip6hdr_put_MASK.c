
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct sk_buff {int protocol; } const sk_buff ;
struct ipv6hdr {int hop_limit; int saddr; int daddr; int nexthdr; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ipv6hdr*,int const,int ) ;
 void* FUNC_2 (struct sk_buff const*) ;
 int FUNC_3 (struct sk_buff const*,int) ;
 int FUNC_4 (struct sk_buff const*) ;

struct ipv6hdr *FUNC_5(struct sk_buff *VAR_2,
         const struct sk_buff *VAR_3,
         __u8 VAR_4, int VAR_5)
{
 struct ipv6hdr *VAR_6;
 const struct ipv6hdr *VAR_7 = FUNC_2(VAR_3);

 const __u8 VAR_8 = 0x0U;

 FUNC_3(VAR_2, sizeof(struct ipv6hdr));
 FUNC_4(VAR_2);
 VAR_6 = FUNC_2(VAR_2);
 FUNC_1(VAR_6, VAR_8, 0);
 VAR_6->hop_limit = VAR_5;
 VAR_6->nexthdr = VAR_4;
 VAR_6->saddr = VAR_7->daddr;
 VAR_6->daddr = VAR_7->saddr;

 VAR_2->protocol = FUNC_0(VAR_1);

 return VAR_6;
}
