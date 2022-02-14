
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nft_set {int dummy; } ;
struct nft_rhash_elem {int node; } ;
struct nft_rhash_cmp_arg {int const* key; struct nft_set const* set; int genmask; } ;
struct nft_rhash {int ht; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nft_rhash* FUNC_0 (struct nft_set const*) ;
 struct nft_rhash_elem* FUNC_1 (int *,struct nft_rhash_cmp_arg*,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static bool FUNC_3(const struct nft_set *VAR_2,
        const u32 *VAR_3)
{
 struct nft_rhash *VAR_4 = FUNC_0(VAR_2);
 struct nft_rhash_cmp_arg VAR_5 = {
  .genmask = VAR_0,
  .set = VAR_2,
  .key = VAR_3,
 };
 struct nft_rhash_elem *VAR_6;

 VAR_6 = FUNC_1(&VAR_4->ht, &VAR_5, VAR_1);
 if (VAR_6 == ((void*)0))
  return 0;

 return FUNC_2(&VAR_4->ht, &VAR_6->node, VAR_1) == 0;
}
