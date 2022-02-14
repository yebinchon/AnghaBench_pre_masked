
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ val; } ;
struct nft_set_elem {TYPE_2__ key; } ;
struct nft_set {int dummy; } ;
typedef void nft_rhash_elem ;
struct nft_rhash_cmp_arg {int key; struct nft_set const* set; int genmask; } ;
struct nft_rhash {int ht; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct net const*) ;
 int VAR_1 ;
 struct nft_rhash* FUNC_2 (struct nft_set const*) ;
 void* FUNC_3 (int *,struct nft_rhash_cmp_arg*,int ) ;

__attribute__((used)) static void *FUNC_4(const struct net *VAR_2, const struct nft_set *VAR_3,
      const struct nft_set_elem *VAR_4, unsigned int VAR_5)
{
 struct nft_rhash *VAR_6 = FUNC_2(VAR_3);
 struct nft_rhash_elem *VAR_7;
 struct nft_rhash_cmp_arg VAR_8 = {
  .genmask = FUNC_1(VAR_2),
  .set = VAR_3,
  .key = VAR_4->key.val.data,
 };

 VAR_7 = FUNC_3(&VAR_6->ht, &VAR_8, VAR_1);
 if (VAR_7 != ((void*)0))
  return VAR_7;

 return FUNC_0(-VAR_0);
}
