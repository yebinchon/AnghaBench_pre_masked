
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int version; scalar_t__ protocol; int ihl; } ;


 scalar_t__ VAR_0 ;
 struct iphdr* FUNC_0 (struct sk_buff const*,unsigned int,int,struct ipv6hdr*) ;
 unsigned int FUNC_1 (struct sk_buff const*) ;

__attribute__((used)) static struct iphdr *FUNC_2(const struct sk_buff *VAR_1,
        struct ipv6hdr *VAR_2)
{
 unsigned int VAR_3 = FUNC_1(VAR_1);
 struct iphdr *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_3, sizeof(struct iphdr), VAR_2);

 if (!VAR_4)
  return ((void*)0);

 if (VAR_4->version == 4 && VAR_4->protocol == VAR_0)
  return FUNC_0(VAR_1, VAR_3 + VAR_4->ihl * 4,
       sizeof(struct ipv6hdr), VAR_2);

 else if (VAR_4->version == 4)
  return VAR_4;

 else if (VAR_4->version == 6)
  return FUNC_0(VAR_1, VAR_3, sizeof(struct ipv6hdr),
       VAR_2);

 return ((void*)0);
}
