
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct in6_addr {int* s6_addr; int * s6_addr16; } ;
struct ieee802154_addr {int mode; int short_addr; int extended_addr; } ;


 int VAR_0 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct in6_addr*,int *) ;

__attribute__((used)) static inline void
FUNC_4(struct in6_addr *VAR_1,
         const void *VAR_2)
{
 const struct ieee802154_addr *VAR_3 = VAR_2;
 u8 VAR_4[VAR_0];

 switch (VAR_3->mode) {
 case 129:
  FUNC_2(VAR_4, &VAR_3->extended_addr);
  FUNC_3(VAR_1, VAR_4);
  break;
 case 128:






  VAR_1->s6_addr[0] = 0xFE;
  VAR_1->s6_addr[1] = 0x80;
  VAR_1->s6_addr[11] = 0xFF;
  VAR_1->s6_addr[12] = 0xFE;
  FUNC_1(&VAR_1->s6_addr16[7],
     &VAR_3->short_addr);
  break;
 default:

  FUNC_0(1);
  break;
 }
}
