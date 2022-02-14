
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ipv6_sr_hdr {scalar_t__ segments_left; } ;


 struct ipv6_sr_hdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static struct ipv6_sr_hdr *FUNC_2(struct sk_buff *VAR_0)
{
 struct ipv6_sr_hdr *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return ((void*)0);

 if (VAR_1->segments_left == 0)
  return ((void*)0);






 return VAR_1;
}
