
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct nft_set_ext {int dummy; } ;
struct nft_set_elem {struct nft_bitmap_elem* priv; } ;
struct nft_set {int dummy; } ;
struct nft_bitmap_elem {int head; struct nft_set_ext ext; } ;
struct nft_bitmap {size_t* bitmap; int list; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct nft_bitmap_elem* FUNC_1 (struct nft_set const*,struct nft_bitmap_elem*,size_t) ;
 int FUNC_2 (struct nft_set const*,int ,size_t*,size_t*) ;
 size_t FUNC_3 (struct net const*) ;
 int FUNC_4 (struct nft_set_ext*) ;
 struct nft_bitmap* FUNC_5 (struct nft_set const*) ;

__attribute__((used)) static int FUNC_6(const struct net *VAR_1, const struct nft_set *VAR_2,
        const struct nft_set_elem *VAR_3,
        struct nft_set_ext **VAR_4)
{
 struct nft_bitmap *VAR_5 = FUNC_5(VAR_2);
 struct nft_bitmap_elem *VAR_6 = VAR_3->priv, *VAR_7;
 u8 VAR_8 = FUNC_3(VAR_1);
 u32 VAR_9, VAR_10;

 VAR_7 = FUNC_1(VAR_2, VAR_6, VAR_8);
 if (VAR_7) {
  *VAR_4 = &VAR_7->ext;
  return -VAR_0;
 }

 FUNC_2(VAR_2, FUNC_4(&VAR_6->ext), &VAR_9, &VAR_10);

 VAR_5->bitmap[VAR_9] |= (VAR_8 << VAR_10);
 FUNC_0(&VAR_6->head, &VAR_5->list);

 return 0;
}
