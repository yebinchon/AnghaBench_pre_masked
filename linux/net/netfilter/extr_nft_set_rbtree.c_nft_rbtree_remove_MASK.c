
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_set_elem {struct nft_rbtree_elem* priv; } ;
struct nft_set {int dummy; } ;
struct nft_rbtree_elem {int node; } ;
struct nft_rbtree {int lock; int count; int root; } ;
struct net {int dummy; } ;


 struct nft_rbtree* FUNC_0 (struct nft_set const*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(const struct net *VAR_0,
         const struct nft_set *VAR_1,
         const struct nft_set_elem *VAR_2)
{
 struct nft_rbtree *VAR_3 = FUNC_0(VAR_1);
 struct nft_rbtree_elem *VAR_4 = VAR_2->priv;

 FUNC_2(&VAR_3->lock);
 FUNC_3(&VAR_3->count);
 FUNC_1(&VAR_4->node, &VAR_3->root);
 FUNC_4(&VAR_3->count);
 FUNC_5(&VAR_3->lock);
}
