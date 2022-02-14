
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


 int FUNC_0 (struct net const*) ;
 int FUNC_1 (struct net const*,struct nft_set const*,void*) ;
 int VAR_0 ;
 struct nft_rhash* FUNC_2 (struct nft_set const*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 void* FUNC_5 (int *,struct nft_rhash_cmp_arg*,int ) ;

__attribute__((used)) static void *FUNC_6(const struct net *VAR_1,
      const struct nft_set *VAR_2,
      const struct nft_set_elem *VAR_3)
{
 struct nft_rhash *VAR_4 = FUNC_2(VAR_2);
 struct nft_rhash_elem *VAR_5;
 struct nft_rhash_cmp_arg VAR_6 = {
  .genmask = FUNC_0(VAR_1),
  .set = VAR_2,
  .key = VAR_3->key.val.data,
 };

 FUNC_3();
 VAR_5 = FUNC_5(&VAR_4->ht, &VAR_6, VAR_0);
 if (VAR_5 != ((void*)0) &&
     !FUNC_1(VAR_1, VAR_2, VAR_5))
  VAR_5 = ((void*)0);

 FUNC_4();

 return VAR_5;
}
