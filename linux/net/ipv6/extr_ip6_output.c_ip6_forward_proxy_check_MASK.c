
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ data; } ;
struct ipv6hdr {scalar_t__ nexthdr; int daddr; } ;
struct icmp6hdr {int icmp6_type; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 struct ipv6hdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int,scalar_t__*,int *) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_2)
{
 struct ipv6hdr *VAR_3 = FUNC_3(VAR_2);
 u8 VAR_4 = VAR_3->nexthdr;
 __be16 VAR_5;
 int VAR_6;

 if (FUNC_2(VAR_4)) {
  VAR_6 = FUNC_4(VAR_2, sizeof(*VAR_3), &VAR_4, &VAR_5);
  if (VAR_6 < 0)
   return 0;
 } else
  VAR_6 = sizeof(struct ipv6hdr);

 if (VAR_4 == VAR_0) {
  struct icmp6hdr *VAR_7;

  if (!FUNC_5(VAR_2, (FUNC_6(VAR_2) +
      VAR_6 + 1 - VAR_2->data)))
   return 0;

  VAR_7 = (struct icmp6hdr *)(FUNC_6(VAR_2) + VAR_6);

  switch (VAR_7->icmp6_type) {
  case 128:
  case 129:
  case 131:
  case 132:
  case 130:




   return 1;
  default:
   break;
  }
 }






 if (FUNC_1(&VAR_3->daddr) & VAR_1) {
  FUNC_0(VAR_2);
  return -1;
 }

 return 0;
}
