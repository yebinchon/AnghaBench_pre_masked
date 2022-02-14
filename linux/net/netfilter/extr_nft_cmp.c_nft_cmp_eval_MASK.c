
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int code; } ;
struct nft_regs {TYPE_1__ verdict; int * data; } ;
struct nft_pktinfo {int dummy; } ;
struct nft_expr {int dummy; } ;
struct nft_cmp_expr {size_t sreg; int op; int len; int data; } ;


 int VAR_0 ;






 int FUNC_0 (int *,int *,int ) ;
 struct nft_cmp_expr* FUNC_1 (struct nft_expr const*) ;

void FUNC_2(const struct nft_expr *VAR_1,
    struct nft_regs *VAR_2,
    const struct nft_pktinfo *VAR_3)
{
 const struct nft_cmp_expr *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_2->data[VAR_4->sreg], &VAR_4->data, VAR_4->len);
 switch (VAR_4->op) {
 case 133:
  if (VAR_5 != 0)
   goto mismatch;
  break;
 case 128:
  if (VAR_5 == 0)
   goto mismatch;
  break;
 case 130:
  if (VAR_5 == 0)
   goto mismatch;

 case 129:
  if (VAR_5 > 0)
   goto mismatch;
  break;
 case 132:
  if (VAR_5 == 0)
   goto mismatch;

 case 131:
  if (VAR_5 < 0)
   goto mismatch;
  break;
 }
 return;

mismatch:
 VAR_2->verdict.code = VAR_0;
}
