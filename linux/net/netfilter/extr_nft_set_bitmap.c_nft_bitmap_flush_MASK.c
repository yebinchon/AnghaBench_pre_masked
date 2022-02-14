
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct nft_set {int dummy; } ;
struct nft_bitmap_elem {int ext; } ;
struct nft_bitmap {size_t* bitmap; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct nft_set const*,int ,size_t*,size_t*) ;
 size_t FUNC_1 (struct net const*) ;
 int FUNC_2 (struct net const*,struct nft_set const*,int *) ;
 int FUNC_3 (int *) ;
 struct nft_bitmap* FUNC_4 (struct nft_set const*) ;

__attribute__((used)) static bool FUNC_5(const struct net *VAR_0,
        const struct nft_set *VAR_1, void *VAR_2)
{
 struct nft_bitmap *VAR_3 = FUNC_4(VAR_1);
 u8 VAR_4 = FUNC_1(VAR_0);
 struct nft_bitmap_elem *VAR_5 = VAR_2;
 u32 VAR_6, VAR_7;

 FUNC_0(VAR_1, FUNC_3(&VAR_5->ext), &VAR_6, &VAR_7);

 VAR_3->bitmap[VAR_6] &= ~(VAR_4 << VAR_7);
 FUNC_2(VAR_0, VAR_1, &VAR_5->ext);

 return 1;
}
