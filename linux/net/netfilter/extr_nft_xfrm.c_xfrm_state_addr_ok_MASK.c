
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef enum nft_xfrm_keys { ____Placeholder_nft_xfrm_keys } nft_xfrm_keys ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;




 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_0(enum nft_xfrm_keys VAR_4, u8 VAR_5, u8 VAR_6)
{
 switch (VAR_4) {
 case 131:
 case 129:
  if (VAR_5 == VAR_0)
   break;
  return 0;
 case 130:
 case 128:
  if (VAR_5 == VAR_1)
   break;
  return 0;
 default:
  return 1;
 }

 return VAR_6 == VAR_2 || VAR_6 == VAR_3;
}
