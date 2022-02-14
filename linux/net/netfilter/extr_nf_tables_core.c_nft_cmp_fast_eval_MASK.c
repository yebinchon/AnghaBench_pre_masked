
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int code; } ;
struct nft_regs {int* data; TYPE_1__ verdict; } ;
struct nft_expr {int dummy; } ;
struct nft_cmp_fast_expr {size_t sreg; int data; int len; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct nft_cmp_fast_expr* FUNC_1 (struct nft_expr const*) ;

__attribute__((used)) static void FUNC_2(const struct nft_expr *VAR_1,
         struct nft_regs *VAR_2)
{
 const struct nft_cmp_fast_expr *VAR_3 = FUNC_1(VAR_1);
 u32 VAR_4 = FUNC_0(VAR_3->len);

 if ((VAR_2->data[VAR_3->sreg] & VAR_4) == VAR_3->data)
  return;
 VAR_2->verdict.code = VAR_0;
}
