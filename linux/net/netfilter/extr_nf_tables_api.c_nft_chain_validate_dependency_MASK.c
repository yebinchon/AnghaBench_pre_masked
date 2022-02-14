
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_chain {int dummy; } ;
struct nft_base_chain {TYPE_1__* type; } ;
typedef enum nft_chain_types { ____Placeholder_nft_chain_types } nft_chain_types ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 struct nft_base_chain* FUNC_0 (struct nft_chain const*) ;
 scalar_t__ FUNC_1 (struct nft_chain const*) ;

int FUNC_2(const struct nft_chain *VAR_1,
      enum nft_chain_types VAR_2)
{
 const struct nft_base_chain *VAR_3;

 if (FUNC_1(VAR_1)) {
  VAR_3 = FUNC_0(VAR_1);
  if (VAR_3->type->type != VAR_2)
   return -VAR_0;
 }
 return 0;
}
