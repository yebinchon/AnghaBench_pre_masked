
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int val; } ;
struct nft_set_elem {TYPE_1__ key; } ;
struct nft_set {int dummy; } ;
typedef void nft_rbtree_elem ;
struct nft_rbtree {int lock; int count; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct net const*,struct nft_set const*,int const*,void**,unsigned int,unsigned int,int ) ;
 int FUNC_2 (struct net const*) ;
 struct nft_rbtree* FUNC_3 (struct nft_set const*) ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void *FUNC_8(const struct net *VAR_1, const struct nft_set *VAR_2,
       const struct nft_set_elem *VAR_3, unsigned int VAR_4)
{
 struct nft_rbtree *VAR_5 = FUNC_3(VAR_2);
 unsigned int VAR_6 = FUNC_5(&VAR_5->count);
 struct nft_rbtree_elem *VAR_7 = FUNC_0(-VAR_0);
 const u32 *VAR_8 = (const u32 *)&VAR_3->key.val;
 u8 VAR_9 = FUNC_2(VAR_1);
 bool VAR_10;

 VAR_10 = FUNC_1(VAR_1, VAR_2, VAR_8, &VAR_7, VAR_6, VAR_4, VAR_9);
 if (VAR_10 || !FUNC_6(&VAR_5->count, VAR_6))
  return VAR_7;

 FUNC_4(&VAR_5->lock);
 VAR_6 = FUNC_5(&VAR_5->count);
 VAR_10 = FUNC_1(VAR_1, VAR_2, VAR_8, &VAR_7, VAR_6, VAR_4, VAR_9);
 if (!VAR_10)
  VAR_7 = FUNC_0(-VAR_0);
 FUNC_7(&VAR_5->lock);

 return VAR_7;
}
