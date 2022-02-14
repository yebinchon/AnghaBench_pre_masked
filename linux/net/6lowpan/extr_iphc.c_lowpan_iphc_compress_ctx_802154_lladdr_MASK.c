
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lowpan_iphc_ctx {int plen; int pfx; } ;
struct in6_addr {int* s6_addr; int * s6_addr16; } ;
struct ieee802154_addr {int mode; int short_addr; int extended_addr; } ;


 int VAR_0 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (unsigned char**,int *) ;
 int FUNC_3 (struct in6_addr*,struct in6_addr const*) ;
 int FUNC_4 (struct in6_addr*,int *,int ) ;
 int FUNC_5 (int*,unsigned char**,int) ;

__attribute__((used)) static inline bool
FUNC_6(const struct in6_addr *VAR_1,
           const struct lowpan_iphc_ctx *VAR_2,
           const void *VAR_3)
{
 const struct ieee802154_addr *VAR_4 = VAR_3;
 unsigned char VAR_5[VAR_0];
 bool VAR_6 = 0;
 struct in6_addr VAR_7 = {};

 switch (VAR_4->mode) {
 case 129:
  FUNC_2(&VAR_5, &VAR_4->extended_addr);

  FUNC_5(&VAR_7.s6_addr[8], &VAR_5, VAR_0);

  VAR_7.s6_addr[8] ^= 0x02;

  FUNC_4(&VAR_7, &VAR_2->pfx, VAR_2->plen);
  if (FUNC_3(&VAR_7, VAR_1))
   VAR_6 = 1;
  break;
 case 128:
  VAR_7.s6_addr[11] = 0xFF;
  VAR_7.s6_addr[12] = 0xFE;
  FUNC_1(&VAR_7.s6_addr16[7],
     &VAR_4->short_addr);

  FUNC_4(&VAR_7, &VAR_2->pfx, VAR_2->plen);
  if (FUNC_3(&VAR_7, VAR_1))
   VAR_6 = 1;
  break;
 default:

  FUNC_0(1);
  break;
 }

 return VAR_6;
}
