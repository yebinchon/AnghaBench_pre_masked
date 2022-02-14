
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nft_set_desc {int size; } ;
struct nft_set {int dummy; } ;
struct nft_hash {int seed; int buckets; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 struct nft_hash* FUNC_2 (struct nft_set const*) ;

__attribute__((used)) static int FUNC_3(const struct nft_set *VAR_0,
    const struct nft_set_desc *VAR_1,
    const struct nlattr * const VAR_2[])
{
 struct nft_hash *VAR_3 = FUNC_2(VAR_0);

 VAR_3->buckets = FUNC_1(VAR_1->size);
 FUNC_0(&VAR_3->seed, sizeof(VAR_3->seed));

 return 0;
}
