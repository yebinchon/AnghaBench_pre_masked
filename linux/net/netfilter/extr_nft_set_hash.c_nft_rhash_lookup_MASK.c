
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nft_set_ext {int dummy; } ;
struct nft_set {int dummy; } ;
struct nft_rhash_elem {struct nft_set_ext ext; } ;
struct nft_rhash_cmp_arg {int const* key; struct nft_set const* set; int genmask; } ;
struct nft_rhash {int ht; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct net const*) ;
 int VAR_0 ;
 struct nft_rhash* FUNC_1 (struct nft_set const*) ;
 struct nft_rhash_elem* FUNC_2 (int *,struct nft_rhash_cmp_arg*,int ) ;

__attribute__((used)) static bool FUNC_3(const struct net *VAR_1, const struct nft_set *VAR_2,
        const u32 *VAR_3, const struct nft_set_ext **VAR_4)
{
 struct nft_rhash *VAR_5 = FUNC_1(VAR_2);
 const struct nft_rhash_elem *VAR_6;
 struct nft_rhash_cmp_arg VAR_7 = {
  .genmask = FUNC_0(VAR_1),
  .set = VAR_2,
  .key = VAR_3,
 };

 VAR_6 = FUNC_2(&VAR_5->ht, &VAR_7, VAR_0);
 if (VAR_6 != ((void*)0))
  *VAR_4 = &VAR_6->ext;

 return !!VAR_6;
}
