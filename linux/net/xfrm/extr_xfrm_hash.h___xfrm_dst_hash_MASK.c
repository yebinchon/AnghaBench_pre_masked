
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
typedef unsigned short u32 ;




 unsigned int FUNC_0 (int const*,int const*) ;
 unsigned int FUNC_1 (int const*,int const*) ;

__attribute__((used)) static inline unsigned int FUNC_2(const xfrm_address_t *VAR_0,
        const xfrm_address_t *VAR_1,
        u32 VAR_2, unsigned short VAR_3,
        unsigned int VAR_4)
{
 unsigned int VAR_5 = VAR_3 ^ VAR_2;
 switch (VAR_3) {
 case 129:
  VAR_5 ^= FUNC_0(VAR_0, VAR_1);
  break;
 case 128:
  VAR_5 ^= FUNC_1(VAR_0, VAR_1);
  break;
 }
 return (VAR_5 ^ (VAR_5 >> 16)) & VAR_4;
}
