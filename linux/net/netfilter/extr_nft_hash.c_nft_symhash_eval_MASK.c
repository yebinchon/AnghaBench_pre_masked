
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct nft_symhash {size_t dreg; scalar_t__ offset; int modulus; } ;
struct nft_regs {scalar_t__* data; } ;
struct nft_pktinfo {struct sk_buff* skb; } ;
struct nft_expr {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 struct nft_symhash* FUNC_1 (struct nft_expr const*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(const struct nft_expr *VAR_0,
        struct nft_regs *VAR_1,
        const struct nft_pktinfo *VAR_2)
{
 struct nft_symhash *VAR_3 = FUNC_1(VAR_0);
 struct sk_buff *VAR_4 = VAR_2->skb;
 u32 VAR_5;

 VAR_5 = FUNC_2(FUNC_0(VAR_4), VAR_3->modulus);

 VAR_1->data[VAR_3->dreg] = VAR_5 + VAR_3->offset;
}
