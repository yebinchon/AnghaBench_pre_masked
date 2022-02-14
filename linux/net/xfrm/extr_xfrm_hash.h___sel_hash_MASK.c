
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
typedef int u8 ;
struct xfrm_selector {int prefixlen_s; int prefixlen_d; int saddr; int daddr; } ;




 unsigned int FUNC_0 (int const*,int const*,int ,int ) ;
 unsigned int FUNC_1 (int const*,int const*,int ,int ) ;

__attribute__((used)) static inline unsigned int FUNC_2(const struct xfrm_selector *VAR_0,
          unsigned short VAR_1, unsigned int VAR_2,
          u8 VAR_3, u8 VAR_4)
{
 const xfrm_address_t *VAR_5 = &VAR_0->daddr;
 const xfrm_address_t *VAR_6 = &VAR_0->saddr;
 unsigned int VAR_7 = 0;

 switch (VAR_1) {
 case 129:
  if (VAR_0->prefixlen_d < VAR_3 ||
      VAR_0->prefixlen_s < VAR_4)
   return VAR_2 + 1;

  VAR_7 = FUNC_0(VAR_5, VAR_6, VAR_3, VAR_4);
  break;

 case 128:
  if (VAR_0->prefixlen_d < VAR_3 ||
      VAR_0->prefixlen_s < VAR_4)
   return VAR_2 + 1;

  VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_3, VAR_4);
  break;
 }
 VAR_7 ^= (VAR_7 >> 16);
 return VAR_7 & VAR_2;
}
