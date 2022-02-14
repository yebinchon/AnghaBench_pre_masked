
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_set_ext {int dummy; } ;
struct nft_set_elem {struct nft_rbtree_elem* priv; } ;
struct nft_set {int dummy; } ;
struct nft_rbtree_elem {int dummy; } ;
struct nft_rbtree {int lock; int count; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct net const*,struct nft_set const*,struct nft_rbtree_elem*,struct nft_set_ext**) ;
 struct nft_rbtree* FUNC_1 (struct nft_set const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(const struct net *VAR_0, const struct nft_set *VAR_1,
        const struct nft_set_elem *VAR_2,
        struct nft_set_ext **VAR_3)
{
 struct nft_rbtree *VAR_4 = FUNC_1(VAR_1);
 struct nft_rbtree_elem *VAR_5 = VAR_2->priv;
 int VAR_6;

 FUNC_2(&VAR_4->lock);
 FUNC_3(&VAR_4->count);
 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_5, VAR_3);
 FUNC_4(&VAR_4->count);
 FUNC_5(&VAR_4->lock);

 return VAR_6;
}
