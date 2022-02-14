
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nft_set_ext {int dummy; } ;
struct nft_set {int klen; } ;
struct nft_hash {int buckets; int seed; } ;
struct nft_data {int dummy; } ;


 int FUNC_0 (struct nft_data const*,int,int ) ;
 int FUNC_1 (int ,int ) ;
 struct nft_data* FUNC_2 (struct nft_set_ext const*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static u32 FUNC_4(const struct nft_set *VAR_0, const struct nft_hash *VAR_1,
       const struct nft_set_ext *VAR_2)
{
 const struct nft_data *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4, VAR_5;

 if (VAR_0->klen == 4) {
  VAR_5 = *(u32 *)VAR_3;
  VAR_4 = FUNC_1(VAR_5, VAR_1->seed);
 } else {
  VAR_4 = FUNC_0(VAR_3, VAR_0->klen, VAR_1->seed);
 }
 VAR_4 = FUNC_3(VAR_4, VAR_1->buckets);

 return VAR_4;
}
