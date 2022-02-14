
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_ctx {scalar_t__ family; struct nft_chain* chain; } ;
struct nft_chain {int dummy; } ;
struct nft_base_chain {TYPE_1__* type; } ;
typedef enum nft_chain_types { ____Placeholder_nft_chain_types } nft_chain_types ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nft_base_chain* FUNC_0 (struct nft_chain const*) ;
 int FUNC_1 (struct nft_chain const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(const struct nft_ctx *VAR_4,
      const char *VAR_5)
{
 enum nft_chain_types VAR_6 = VAR_2;
 const struct nft_chain *VAR_7 = VAR_4->chain;
 const struct nft_base_chain *VAR_8;

 if (!VAR_5 ||
     !FUNC_1(VAR_7))
  return 0;

 VAR_8 = FUNC_0(VAR_7);
 if (FUNC_2(VAR_5, "nat") == 0) {
  if (VAR_4->family != VAR_1)
   VAR_6 = VAR_3;
  if (VAR_8->type->type != VAR_6)
   return -VAR_0;
 }

 return 0;
}
