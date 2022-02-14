
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int data; } ;
struct TYPE_4__ {int code; } ;
struct nft_regs {TYPE_2__ verdict; scalar_t__* data; } ;
struct TYPE_3__ {int thoff; } ;
struct nft_pktinfo {TYPE_1__ xt; int tprot_set; struct sk_buff* skb; } ;
struct nft_payload {size_t dreg; size_t len; int base; int offset; } ;
struct nft_expr {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;



 size_t VAR_1 ;
 struct nft_payload* FUNC_1 (struct nft_expr const*) ;
 int FUNC_2 (scalar_t__*,struct sk_buff const*,int,size_t) ;
 scalar_t__ FUNC_3 (struct sk_buff const*,int,scalar_t__*,size_t) ;
 int FUNC_4 (struct sk_buff const*) ;
 int FUNC_5 (struct sk_buff const*) ;
 int FUNC_6 (struct sk_buff const*) ;
 int FUNC_7 (struct sk_buff const*) ;

void FUNC_8(const struct nft_expr *VAR_2,
        struct nft_regs *VAR_3,
        const struct nft_pktinfo *VAR_4)
{
 const struct nft_payload *VAR_5 = FUNC_1(VAR_2);
 const struct sk_buff *VAR_6 = VAR_4->skb;
 u32 *VAR_7 = &VAR_3->data[VAR_5->dreg];
 int VAR_8;

 VAR_7[VAR_5->len / VAR_1] = 0;
 switch (VAR_5->base) {
 case 130:
  if (!FUNC_5(VAR_6))
   goto err;

  if (FUNC_7(VAR_6)) {
   if (!FUNC_2(VAR_7, VAR_6,
         VAR_5->offset, VAR_5->len))
    goto err;
   return;
  }
  VAR_8 = FUNC_4(VAR_6) - VAR_6->data;
  break;
 case 129:
  VAR_8 = FUNC_6(VAR_6);
  break;
 case 128:
  if (!VAR_4->tprot_set)
   goto err;
  VAR_8 = VAR_4->xt.thoff;
  break;
 default:
  FUNC_0();
 }
 VAR_8 += VAR_5->offset;

 if (FUNC_3(VAR_6, VAR_8, VAR_7, VAR_5->len) < 0)
  goto err;
 return;
err:
 VAR_3->verdict.code = VAR_0;
}
