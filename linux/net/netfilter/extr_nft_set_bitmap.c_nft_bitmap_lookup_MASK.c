
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nft_set_ext {int dummy; } ;
struct nft_set {int dummy; } ;
struct nft_bitmap {int bitmap; } ;
struct net {int dummy; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct nft_set const*,int const*,int *,int *) ;
 int FUNC_2 (struct net const*) ;
 struct nft_bitmap* FUNC_3 (struct nft_set const*) ;

__attribute__((used)) static bool FUNC_4(const struct net *VAR_0, const struct nft_set *VAR_1,
         const u32 *VAR_2, const struct nft_set_ext **VAR_3)
{
 const struct nft_bitmap *VAR_4 = FUNC_3(VAR_1);
 u8 VAR_5 = FUNC_2(VAR_0);
 u32 VAR_6, VAR_7;

 FUNC_1(VAR_1, VAR_2, &VAR_6, &VAR_7);

 return FUNC_0(VAR_4->bitmap, VAR_6, VAR_7, VAR_5);
}
