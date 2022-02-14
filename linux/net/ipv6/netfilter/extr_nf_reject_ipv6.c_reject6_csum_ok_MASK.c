
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int data; int len; } ;
struct ipv6hdr {int nexthdr; } ;
typedef int __be16 ;


 int FUNC_0 (int) ;
 struct ipv6hdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int *,int *,int*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int,int,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_6(struct sk_buff *VAR_0, int VAR_1)
{
 const struct ipv6hdr *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;
 __be16 VAR_4;
 u8 VAR_5;

 if (FUNC_5(VAR_0))
  return 1;

 VAR_5 = VAR_2->nexthdr;
 VAR_3 = FUNC_2(VAR_0, ((u8 *)(VAR_2 + 1) - VAR_0->data), &VAR_5, &VAR_4);

 if (VAR_3 < 0 || VAR_3 >= VAR_0->len || (VAR_4 & FUNC_0(~0x7)) != 0)
  return 0;

 if (!FUNC_4(VAR_5))
  return 1;

 return FUNC_3(VAR_0, VAR_1, VAR_3, VAR_5) == 0;
}
