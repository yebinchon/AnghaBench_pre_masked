
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct nft_quota {int quota; int consumed; } ;


 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline bool FUNC_2(struct nft_quota *VAR_0,
     const struct sk_buff *VAR_1)
{
 return FUNC_0(VAR_1->len, &VAR_0->consumed) >=
        FUNC_1(&VAR_0->quota);
}
