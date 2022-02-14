
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_flowtable {int use; } ;
struct nft_ctx {int dummy; } ;
typedef enum nft_trans_phase { ____Placeholder_nft_trans_phase } nft_trans_phase ;






void FUNC_0(const struct nft_ctx *VAR_0,
        struct nft_flowtable *VAR_1,
        enum nft_trans_phase VAR_2)
{
 switch (VAR_2) {
 case 129:
 case 130:
 case 128:
  VAR_1->use--;

 default:
  return;
 }
}
