
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ipv6_sr_hdr {int segments_left; struct in6_addr* segments; } ;
struct in6_addr {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {int daddr; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int *,int *) ;
 int FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_0)
{
 struct ipv6_sr_hdr *VAR_1;
 struct in6_addr *VAR_2;
 __be32 VAR_3, VAR_4;





 VAR_1 = (struct ipv6_sr_hdr *)FUNC_1(VAR_0);
 VAR_2 = VAR_1->segments + VAR_1->segments_left;

 VAR_1->segments_left++;
 VAR_3 = *(__be32 *)VAR_1;

 VAR_1->segments_left--;
 VAR_4 = *(__be32 *)VAR_1;



 FUNC_3(VAR_0, VAR_3, VAR_4);



 FUNC_2(VAR_0, (__be32 *)(&FUNC_0(VAR_0)->daddr),
      (__be32 *)VAR_2);
}
