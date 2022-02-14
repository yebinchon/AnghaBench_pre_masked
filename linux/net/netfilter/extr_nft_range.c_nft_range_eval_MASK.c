
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* code; } ;
struct nft_regs {TYPE_1__ verdict; int * data; } ;
struct nft_range_expr {size_t sreg; int op; int len; int data_to; int data_from; } ;
struct nft_pktinfo {int dummy; } ;
struct nft_expr {int dummy; } ;


 void* VAR_0 ;


 int FUNC_0 (int *,int *,int ) ;
 struct nft_range_expr* FUNC_1 (struct nft_expr const*) ;

void FUNC_2(const struct nft_expr *VAR_1,
      struct nft_regs *VAR_2, const struct nft_pktinfo *VAR_3)
{
 const struct nft_range_expr *VAR_4 = FUNC_1(VAR_1);
 int VAR_5, VAR_6;

 VAR_5 = FUNC_0(&VAR_2->data[VAR_4->sreg], &VAR_4->data_from, VAR_4->len);
 VAR_6 = FUNC_0(&VAR_2->data[VAR_4->sreg], &VAR_4->data_to, VAR_4->len);
 switch (VAR_4->op) {
 case 129:
  if (VAR_5 < 0 || VAR_6 > 0)
   VAR_2->verdict.code = VAR_0;
  break;
 case 128:
  if (VAR_5 >= 0 && VAR_6 <= 0)
   VAR_2->verdict.code = VAR_0;
  break;
 }
}
