
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_set_elem {struct nft_rbtree_elem* priv; } ;
struct nft_set {int dummy; } ;
struct nft_rbtree_elem {int ext; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct net const*,struct nft_set const*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(const struct net *VAR_0,
    const struct nft_set *VAR_1,
    const struct nft_set_elem *VAR_2)
{
 struct nft_rbtree_elem *VAR_3 = VAR_2->priv;

 FUNC_0(VAR_0, VAR_1, &VAR_3->ext);
 FUNC_1(&VAR_3->ext);
}
