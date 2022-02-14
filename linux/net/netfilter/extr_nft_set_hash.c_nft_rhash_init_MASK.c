
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhashtable_params {int key_len; int nelem_hint; } ;
struct nlattr {int dummy; } ;
struct nft_set_desc {scalar_t__ size; } ;
struct nft_set {int flags; int klen; } ;
struct nft_rhash {int gc_work; int ht; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nft_set const*) ;
 struct rhashtable_params VAR_3 ;
 struct nft_rhash* FUNC_2 (struct nft_set const*) ;
 int FUNC_3 (int *,struct rhashtable_params*) ;

__attribute__((used)) static int FUNC_4(const struct nft_set *VAR_4,
     const struct nft_set_desc *VAR_5,
     const struct nlattr * const VAR_6[])
{
 struct nft_rhash *VAR_7 = FUNC_2(VAR_4);
 struct rhashtable_params VAR_8 = VAR_3;
 int VAR_9;

 VAR_8.nelem_hint = VAR_5->size ?: VAR_0;
 VAR_8.key_len = VAR_4->klen;

 VAR_9 = FUNC_3(&VAR_7->ht, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_0(&VAR_7->gc_work, VAR_2);
 if (VAR_4->flags & VAR_1)
  FUNC_1(VAR_4);

 return 0;
}
