
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int* s6_addr; int * s6_addr16; } ;
struct ieee802154_addr {int mode; int short_addr; int extended_addr; } ;


 int VAR_0 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (unsigned char**,int *) ;
 int FUNC_3 (struct in6_addr*,struct in6_addr const*) ;
 int FUNC_4 (struct in6_addr const*,unsigned char*) ;

__attribute__((used)) static inline bool
FUNC_5(const struct in6_addr *VAR_1,
       const void *VAR_2)
{
 const struct ieee802154_addr *VAR_3 = VAR_2;
 unsigned char VAR_4[VAR_0];
 bool VAR_5 = 0;
 struct in6_addr VAR_6 = {};

 switch (VAR_3->mode) {
 case 129:
  FUNC_2(&VAR_4, &VAR_3->extended_addr);
  if (FUNC_4(VAR_1, VAR_4))
   VAR_5 = 1;
  break;
 case 128:






  VAR_6.s6_addr[0] = 0xFE;
  VAR_6.s6_addr[1] = 0x80;
  VAR_6.s6_addr[11] = 0xFF;
  VAR_6.s6_addr[12] = 0xFE;
  FUNC_1(&VAR_6.s6_addr16[7],
     &VAR_3->short_addr);
  if (FUNC_3(&VAR_6, VAR_1))
   VAR_5 = 1;
  break;
 default:

  FUNC_0(1);
  break;
 }

 return VAR_5;
}
