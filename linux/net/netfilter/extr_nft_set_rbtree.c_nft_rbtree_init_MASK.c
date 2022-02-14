
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nft_set_desc {int dummy; } ;
struct nft_set {int flags; } ;
struct nft_rbtree {int gc_work; int root; int count; int lock; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nft_set const*) ;
 struct nft_rbtree* FUNC_2 (struct nft_set const*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(const struct nft_set *VAR_4,
      const struct nft_set_desc *VAR_5,
      const struct nlattr * const VAR_6[])
{
 struct nft_rbtree *VAR_7 = FUNC_2(VAR_4);

 FUNC_4(&VAR_7->lock);
 FUNC_5(&VAR_7->count);
 VAR_7->root = VAR_1;

 FUNC_0(&VAR_7->gc_work, VAR_2);
 if (VAR_4->flags & VAR_0)
  FUNC_3(VAR_3, &VAR_7->gc_work,
       FUNC_1(VAR_4));

 return 0;
}
