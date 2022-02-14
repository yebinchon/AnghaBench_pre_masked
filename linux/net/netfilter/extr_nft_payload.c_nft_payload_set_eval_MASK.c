
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int data; scalar_t__ ip_summed; } ;
struct TYPE_4__ {int code; } ;
struct nft_regs {TYPE_2__ verdict; int * data; } ;
struct TYPE_3__ {int thoff; } ;
struct nft_pktinfo {TYPE_1__ xt; int tprot_set; struct sk_buff* skb; } ;
struct nft_payload_set {size_t sreg; int base; int csum_offset; int offset; scalar_t__ csum_type; scalar_t__ len; scalar_t__ csum_flags; } ;
struct nft_expr {int dummy; } ;
typedef int __wsum ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;



 int FUNC_1 (int const*,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 struct nft_payload_set* FUNC_3 (struct nft_expr const*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int const*,int ,int ,int) ;
 scalar_t__ FUNC_5 (struct nft_pktinfo const*,struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sk_buff*,int,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int,int const*,scalar_t__) ;

__attribute__((used)) static void FUNC_12(const struct nft_expr *VAR_3,
     struct nft_regs *VAR_4,
     const struct nft_pktinfo *VAR_5)
{
 const struct nft_payload_set *VAR_6 = FUNC_3(VAR_3);
 struct sk_buff *VAR_7 = VAR_5->skb;
 const u32 *VAR_8 = &VAR_4->data[VAR_6->sreg];
 int VAR_9, VAR_10;
 __wsum VAR_11, VAR_12;

 switch (VAR_6->base) {
 case 130:
  if (!FUNC_9(VAR_7))
   goto err;
  VAR_9 = FUNC_8(VAR_7) - VAR_7->data;
  break;
 case 129:
  VAR_9 = FUNC_10(VAR_7);
  break;
 case 128:
  if (!VAR_5->tprot_set)
   goto err;
  VAR_9 = VAR_5->xt.thoff;
  break;
 default:
  FUNC_0();
 }

 VAR_10 = VAR_9 + VAR_6->csum_offset;
 VAR_9 += VAR_6->offset;

 if ((VAR_6->csum_type == VAR_2 || VAR_6->csum_flags) &&
     (VAR_6->base != 128 ||
      VAR_7->ip_summed != VAR_0)) {
  VAR_11 = FUNC_6(VAR_7, VAR_9, VAR_6->len, 0);
  VAR_12 = FUNC_1(VAR_8, VAR_6->len, 0);

  if (VAR_6->csum_type == VAR_2 &&
      FUNC_4(VAR_7, VAR_8, VAR_11, VAR_12, VAR_10))
   goto err;

  if (VAR_6->csum_flags &&
      FUNC_5(VAR_5, VAR_7, VAR_11, VAR_12) < 0)
   goto err;
 }

 if (FUNC_7(VAR_7, FUNC_2(VAR_9 + VAR_6->len, 0)) ||
     FUNC_11(VAR_7, VAR_9, VAR_8, VAR_6->len) < 0)
  goto err;

 return;
err:
 VAR_4->verdict.code = VAR_1;
}
