
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct lowpan_iphc_ctx {int plen; int pfx; } ;
struct in6_addr {int* s6_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct in6_addr*,int *,int) ;
 int FUNC_1 (struct sk_buff*,int*,int) ;
 int FUNC_2 (int*,struct in6_addr*,int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1,
       struct lowpan_iphc_ctx *VAR_2,
       struct in6_addr *VAR_3,
       u8 VAR_4)
{
 struct in6_addr VAR_5 = {};
 bool VAR_6;

 VAR_3->s6_addr[0] = 0xFF;
 VAR_6 = FUNC_1(VAR_1, &VAR_3->s6_addr[1], 2);
 VAR_6 |= FUNC_1(VAR_1, &VAR_3->s6_addr[12], 4);
 if (VAR_6)
  return -VAR_0;


 VAR_3->s6_addr[3] = VAR_2->plen;

 FUNC_0(&VAR_5, &VAR_2->pfx, VAR_2->plen);

 FUNC_2(&VAR_3->s6_addr[4], &VAR_5, 8);

 return 0;
}
