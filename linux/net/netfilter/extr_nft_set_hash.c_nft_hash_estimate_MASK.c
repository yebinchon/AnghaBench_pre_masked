
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nft_set_estimate {int size; int space; int lookup; } ;
struct nft_set_desc {int size; int klen; } ;
struct nft_hash_elem {int dummy; } ;
struct nft_hash {int dummy; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(const struct nft_set_desc *VAR_2, u32 VAR_3,
         struct nft_set_estimate *VAR_4)
{
 if (!VAR_2->size)
  return 0;

 if (VAR_2->klen == 4)
  return 0;

 VAR_4->size = sizeof(struct nft_hash) +
        FUNC_0(VAR_2->size) * sizeof(struct hlist_head) +
        VAR_2->size * sizeof(struct nft_hash_elem);
 VAR_4->lookup = VAR_0;
 VAR_4->space = VAR_1;

 return 1;
}
