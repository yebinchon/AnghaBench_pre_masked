
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct in6_addr {int* s6_addr; } ;
struct TYPE_2__ {int lltype; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct net_device const*) ;
 int FUNC_1 (struct sk_buff*,int*,int) ;
 int FUNC_2 (struct in6_addr*,void const*) ;
 int FUNC_3 (struct net_device const*,struct in6_addr*,void const*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *,char*,int*,int) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_2,
           const struct net_device *VAR_3,
           struct in6_addr *VAR_4,
           u8 VAR_5, const void *VAR_6)
{
 bool VAR_7;

 switch (VAR_5) {

 case 135:

  VAR_7 = FUNC_1(VAR_2, VAR_4->s6_addr, 16);
  break;
 case 131:
 case 134:

  VAR_4->s6_addr[0] = 0xFE;
  VAR_4->s6_addr[1] = 0x80;
  VAR_7 = FUNC_1(VAR_2, &VAR_4->s6_addr[8], 8);
  break;
 case 130:
 case 133:

  VAR_4->s6_addr[0] = 0xFE;
  VAR_4->s6_addr[1] = 0x80;
  VAR_4->s6_addr[11] = 0xFF;
  VAR_4->s6_addr[12] = 0xFE;
  VAR_7 = FUNC_1(VAR_2, &VAR_4->s6_addr[14], 2);
  break;
 case 129:
 case 132:
  VAR_7 = 0;
  switch (FUNC_0(VAR_3)->lltype) {
  case 128:
   FUNC_2(VAR_4, VAR_6);
   break;
  default:
   FUNC_3(VAR_3, VAR_4, VAR_6);
   break;
  }
  break;
 default:
  FUNC_4("Invalid address mode value: 0x%x\n", VAR_5);
  return -VAR_0;
 }

 if (VAR_7) {
  FUNC_4("Failed to fetch skb data\n");
  return -VAR_1;
 }

 FUNC_5(((void*)0), "Reconstructed ipv6 addr is",
   VAR_4->s6_addr, 16);

 return 0;
}
