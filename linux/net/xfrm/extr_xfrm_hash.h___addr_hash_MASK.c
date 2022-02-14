
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
typedef int u8 ;




 unsigned int FUNC_0 (int const*,int const*,int ,int ) ;
 unsigned int FUNC_1 (int const*,int const*,int ,int ) ;

__attribute__((used)) static inline unsigned int FUNC_2(const xfrm_address_t *VAR_0,
           const xfrm_address_t *VAR_1,
           unsigned short VAR_2,
           unsigned int VAR_3,
           u8 VAR_4, u8 VAR_5)
{
 unsigned int VAR_6 = 0;

 switch (VAR_2) {
 case 129:
  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_4, VAR_5);
  break;

 case 128:
  VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_4, VAR_5);
  break;
 }
 VAR_6 ^= (VAR_6 >> 16);
 return VAR_6 & VAR_3;
}
