
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct lowpan_iphc_ctx {int plen; int pfx; } ;
struct in6_addr {int* s6_addr; } ;
struct TYPE_2__ {int lltype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct in6_addr*,int *,int ) ;
 TYPE_1__* FUNC_1 (struct net_device const*) ;
 int FUNC_2 (struct sk_buff*,int*,int) ;
 int FUNC_3 (struct in6_addr*,void const*) ;
 int FUNC_4 (struct net_device const*,struct in6_addr*,void const*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *,char*,int*,int) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_2,
        const struct net_device *VAR_3,
        const struct lowpan_iphc_ctx *VAR_4,
        struct in6_addr *VAR_5,
        u8 VAR_6, const void *VAR_7)
{
 bool VAR_8;

 switch (VAR_6) {

 case 135:
  VAR_8 = 0;





  break;
 case 131:
 case 134:
  VAR_8 = FUNC_2(VAR_2, &VAR_5->s6_addr[8], 8);
  FUNC_0(VAR_5, &VAR_4->pfx, VAR_4->plen);
  break;
 case 130:
 case 133:
  VAR_5->s6_addr[11] = 0xFF;
  VAR_5->s6_addr[12] = 0xFE;
  VAR_8 = FUNC_2(VAR_2, &VAR_5->s6_addr[14], 2);
  FUNC_0(VAR_5, &VAR_4->pfx, VAR_4->plen);
  break;
 case 129:
 case 132:
  VAR_8 = 0;
  switch (FUNC_1(VAR_3)->lltype) {
  case 128:
   FUNC_3(VAR_5, VAR_7);
   break;
  default:
   FUNC_4(VAR_3, VAR_5, VAR_7);
   break;
  }
  FUNC_0(VAR_5, &VAR_4->pfx, VAR_4->plen);
  break;
 default:
  FUNC_5("Invalid sam value: 0x%x\n", VAR_6);
  return -VAR_0;
 }

 if (VAR_8) {
  FUNC_5("Failed to fetch skb data\n");
  return -VAR_1;
 }

 FUNC_6(((void*)0),
   "Reconstructed context based ipv6 src addr is",
   VAR_5->s6_addr, 16);

 return 0;
}
