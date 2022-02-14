
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nlattr {int dummy; } ;
struct nft_set_desc {int size; } ;
struct nft_hash {int dummy; } ;
struct hlist_head {int dummy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u64 FUNC_1(const struct nlattr * const VAR_0[],
        const struct nft_set_desc *VAR_1)
{
 return sizeof(struct nft_hash) +
        FUNC_0(VAR_1->size) * sizeof(struct hlist_head);
}
