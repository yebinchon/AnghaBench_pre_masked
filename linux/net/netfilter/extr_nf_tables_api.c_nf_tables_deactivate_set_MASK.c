
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_set_binding {int dummy; } ;
struct nft_set {int use; } ;
struct nft_ctx {int dummy; } ;
typedef enum nft_trans_phase { ____Placeholder_nft_trans_phase } nft_trans_phase ;



 int VAR_0 ;


 int FUNC_0 (struct nft_ctx const*,struct nft_set*,struct nft_set_binding*,int) ;

void FUNC_1(const struct nft_ctx *VAR_1, struct nft_set *VAR_2,
         struct nft_set_binding *VAR_3,
         enum nft_trans_phase VAR_4)
{
 switch (VAR_4) {
 case 129:
  VAR_2->use--;
  return;
 case 130:
 case 128:
  VAR_2->use--;

 default:
  FUNC_0(VAR_1, VAR_2, VAR_3,
         VAR_4 == VAR_0);
 }
}
