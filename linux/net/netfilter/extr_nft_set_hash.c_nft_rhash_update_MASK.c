
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nft_set_ext {int dummy; } ;
struct nft_set {int dummy; } ;
struct nft_rhash_elem {struct nft_set_ext ext; int node; } ;
struct nft_rhash_cmp_arg {int const* key; struct nft_set* set; int genmask; } ;
struct nft_rhash {int ht; } ;
struct nft_regs {int dummy; } ;
struct nft_expr {int dummy; } ;


 scalar_t__ FUNC_0 (struct nft_rhash_elem*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nft_set*,struct nft_rhash_elem*,int) ;
 struct nft_rhash* FUNC_2 (struct nft_set*) ;
 struct nft_rhash_elem* FUNC_3 (int *,struct nft_rhash_cmp_arg*,int ) ;
 struct nft_rhash_elem* FUNC_4 (int *,struct nft_rhash_cmp_arg*,int *,int ) ;

__attribute__((used)) static bool FUNC_5(struct nft_set *VAR_2, const u32 *VAR_3,
        void *(*VAR_4)(struct nft_set *,
       const struct nft_expr *,
       struct nft_regs *VAR_5),
        const struct nft_expr *VAR_6,
        struct nft_regs *VAR_7,
        const struct nft_set_ext **VAR_8)
{
 struct nft_rhash *VAR_9 = FUNC_2(VAR_2);
 struct nft_rhash_elem *VAR_10, *VAR_11;
 struct nft_rhash_cmp_arg VAR_12 = {
  .genmask = VAR_0,
  .set = VAR_2,
  .key = VAR_3,
 };

 VAR_10 = FUNC_3(&VAR_9->ht, &VAR_12, VAR_1);
 if (VAR_10 != ((void*)0))
  goto out;

 VAR_10 = VAR_4(VAR_2, VAR_6, VAR_7);
 if (VAR_10 == ((void*)0))
  goto err1;

 VAR_11 = FUNC_4(&VAR_9->ht, &VAR_12, &VAR_10->node,
      VAR_1);
 if (FUNC_0(VAR_11))
  goto err2;


 if (VAR_11) {
  FUNC_1(VAR_2, VAR_10, 1);
  VAR_10 = VAR_11;
 }

out:
 *VAR_8 = &VAR_10->ext;
 return 1;

err2:
 FUNC_1(VAR_2, VAR_10, 1);
err1:
 return 0;
}
