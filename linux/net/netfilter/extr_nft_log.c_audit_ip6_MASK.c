
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {int daddr; int saddr; int nexthdr; } ;
struct audit_buffer {int dummy; } ;
typedef int _ip6h ;
typedef int __be16 ;


 int FUNC_0 (struct audit_buffer*,char*,int *,int *,int ) ;
 int FUNC_1 (struct sk_buff*,scalar_t__,int *,int *) ;
 struct ipv6hdr* FUNC_2 (struct sk_buff*,scalar_t__,int,struct ipv6hdr*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_4(struct audit_buffer *VAR_0, struct sk_buff *VAR_1)
{
 struct ipv6hdr VAR_2;
 const struct ipv6hdr *VAR_3;
 u8 VAR_4;
 __be16 VAR_5;

 VAR_3 = FUNC_2(VAR_1, FUNC_3(VAR_1), sizeof(VAR_2), &VAR_2);
 if (!VAR_3)
  return 0;

 VAR_4 = VAR_3->nexthdr;
 FUNC_1(VAR_1, FUNC_3(VAR_1) + sizeof(VAR_2), &VAR_4, &VAR_5);

 FUNC_0(VAR_0, " saddr=%pI6c daddr=%pI6c proto=%hhu",
    &VAR_3->saddr, &VAR_3->daddr, VAR_4);

 return 1;
}
