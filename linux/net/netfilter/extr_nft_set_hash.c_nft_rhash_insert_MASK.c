
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nft_set_ext {int dummy; } ;
struct TYPE_4__ {int data; } ;
struct TYPE_3__ {TYPE_2__ val; } ;
struct nft_set_elem {TYPE_1__ key; struct nft_rhash_elem* priv; } ;
struct nft_set {int dummy; } ;
struct nft_rhash_elem {struct nft_set_ext ext; int node; } ;
struct nft_rhash_cmp_arg {int key; struct nft_set const* set; int genmask; } ;
struct nft_rhash {int ht; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nft_rhash_elem*) ;
 int FUNC_1 (struct nft_rhash_elem*) ;
 int FUNC_2 (struct net const*) ;
 int VAR_1 ;
 struct nft_rhash* FUNC_3 (struct nft_set const*) ;
 struct nft_rhash_elem* FUNC_4 (int *,struct nft_rhash_cmp_arg*,int *,int ) ;

__attribute__((used)) static int FUNC_5(const struct net *VAR_2, const struct nft_set *VAR_3,
       const struct nft_set_elem *VAR_4,
       struct nft_set_ext **VAR_5)
{
 struct nft_rhash *VAR_6 = FUNC_3(VAR_3);
 struct nft_rhash_elem *VAR_7 = VAR_4->priv;
 struct nft_rhash_cmp_arg VAR_8 = {
  .genmask = FUNC_2(VAR_2),
  .set = VAR_3,
  .key = VAR_4->key.val.data,
 };
 struct nft_rhash_elem *VAR_9;

 VAR_9 = FUNC_4(&VAR_6->ht, &VAR_8, &VAR_7->node,
      VAR_1);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);
 if (VAR_9) {
  *VAR_5 = &VAR_9->ext;
  return -VAR_0;
 }
 return 0;
}
