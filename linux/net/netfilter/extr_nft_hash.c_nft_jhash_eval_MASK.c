
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nft_regs {int * data; } ;
struct nft_pktinfo {int dummy; } ;
struct nft_jhash {size_t sreg; size_t dreg; int offset; int modulus; int seed; int len; } ;
struct nft_expr {int dummy; } ;


 int FUNC_0 (void const*,int ,int ) ;
 struct nft_jhash* FUNC_1 (struct nft_expr const*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(const struct nft_expr *VAR_0,
      struct nft_regs *VAR_1,
      const struct nft_pktinfo *VAR_2)
{
 struct nft_jhash *VAR_3 = FUNC_1(VAR_0);
 const void *VAR_4 = &VAR_1->data[VAR_3->sreg];
 u32 VAR_5;

 VAR_5 = FUNC_2(FUNC_0(VAR_4, VAR_3->len, VAR_3->seed),
        VAR_3->modulus);

 VAR_1->data[VAR_3->dreg] = VAR_5 + VAR_3->offset;
}
