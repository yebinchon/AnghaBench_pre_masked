
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ipv6_opt_hdr {int nexthdr; } ;


 int FUNC_0 (struct ipv6_opt_hdr*) ;
 int FUNC_1 (struct ipv6_opt_hdr*,struct ipv6_opt_hdr*,int ) ;
 struct ipv6_opt_hdr* FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_0, u8 *VAR_1, u8 VAR_2, struct ipv6_opt_hdr *VAR_3)
{
 struct ipv6_opt_hdr *VAR_4 = FUNC_2(VAR_0, FUNC_0(VAR_3));

 FUNC_1(VAR_4, VAR_3, FUNC_0(VAR_3));
 VAR_4->nexthdr = *VAR_1;
 *VAR_1 = VAR_2;
}
