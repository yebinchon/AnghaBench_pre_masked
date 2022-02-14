
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_set_elem {struct nft_rhash_elem* priv; } ;
struct nft_set {int dummy; } ;
struct nft_rhash_elem {int node; } ;
struct nft_rhash {int ht; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 struct nft_rhash* FUNC_0 (struct nft_set const*) ;
 int FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_2(const struct net *VAR_1,
        const struct nft_set *VAR_2,
        const struct nft_set_elem *VAR_3)
{
 struct nft_rhash *VAR_4 = FUNC_0(VAR_2);
 struct nft_rhash_elem *VAR_5 = VAR_3->priv;

 FUNC_1(&VAR_4->ht, &VAR_5->node, VAR_0);
}
