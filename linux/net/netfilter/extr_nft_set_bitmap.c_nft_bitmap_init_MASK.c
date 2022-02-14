
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nft_set_desc {int dummy; } ;
struct nft_set {int klen; } ;
struct nft_bitmap {int bitmap_size; int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct nft_bitmap* FUNC_2 (struct nft_set const*) ;

__attribute__((used)) static int FUNC_3(const struct nft_set *VAR_0,
    const struct nft_set_desc *VAR_1,
    const struct nlattr * const VAR_2[])
{
 struct nft_bitmap *VAR_3 = FUNC_2(VAR_0);

 FUNC_0(&VAR_3->list);
 VAR_3->bitmap_size = FUNC_1(VAR_0->klen);

 return 0;
}
