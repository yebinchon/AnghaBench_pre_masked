
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_data {int dummy; } ;
typedef enum nft_data_types { ____Placeholder_nft_data_types } nft_data_types ;



 int FUNC_0 (int) ;
 void FUNC_1 (struct nft_data const*) ;

void FUNC_2(const struct nft_data *VAR_0, enum nft_data_types VAR_1)
{
 if (VAR_1 < 128)
  return;
 switch (VAR_1) {
 case 128:
  return FUNC_1(VAR_0);
 default:
  FUNC_0(1);
 }
}
