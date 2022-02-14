
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rhashtable_compare_arg {struct nft_rhash_cmp_arg* key; } ;
struct nft_rhash_elem {int ext; } ;
struct nft_rhash_cmp_arg {int genmask; TYPE_1__* set; int key; } ;
struct TYPE_2__ {int klen; } ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline int FUNC_4(struct rhashtable_compare_arg *VAR_0,
    const void *VAR_1)
{
 const struct nft_rhash_cmp_arg *VAR_2 = VAR_0->key;
 const struct nft_rhash_elem *VAR_3 = VAR_1;

 if (FUNC_0(FUNC_3(&VAR_3->ext), VAR_2->key, VAR_2->set->klen))
  return 1;
 if (FUNC_2(&VAR_3->ext))
  return 1;
 if (!FUNC_1(&VAR_3->ext, VAR_2->genmask))
  return 1;
 return 0;
}
