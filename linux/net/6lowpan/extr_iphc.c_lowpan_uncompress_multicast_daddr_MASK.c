
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct in6_addr {int* s6_addr; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct sk_buff*,int*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,char*,int*,int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2,
          struct in6_addr *VAR_3,
          u8 VAR_4)
{
 bool VAR_5;

 switch (VAR_4) {
 case 131:



  VAR_5 = FUNC_0(VAR_2, VAR_3->s6_addr, 16);
  break;
 case 130:



  VAR_3->s6_addr[0] = 0xFF;
  VAR_5 = FUNC_0(VAR_2, &VAR_3->s6_addr[1], 1);
  VAR_5 |= FUNC_0(VAR_2, &VAR_3->s6_addr[11], 5);
  break;
 case 129:



  VAR_3->s6_addr[0] = 0xFF;
  VAR_5 = FUNC_0(VAR_2, &VAR_3->s6_addr[1], 1);
  VAR_5 |= FUNC_0(VAR_2, &VAR_3->s6_addr[13], 3);
  break;
 case 128:



  VAR_3->s6_addr[0] = 0xFF;
  VAR_3->s6_addr[1] = 0x02;
  VAR_5 = FUNC_0(VAR_2, &VAR_3->s6_addr[15], 1);
  break;
 default:
  FUNC_1("DAM value has a wrong value: 0x%x\n", VAR_4);
  return -VAR_0;
 }

 if (VAR_5) {
  FUNC_1("Failed to fetch skb data\n");
  return -VAR_1;
 }

 FUNC_2(((void*)0), "Reconstructed ipv6 multicast addr is",
   VAR_3->s6_addr, 16);

 return 0;
}
