
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xt_target {int (* target ) (struct sk_buff*,TYPE_3__*) ;} ;
struct xt_action_param {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {int code; } ;
struct nft_regs {TYPE_2__ verdict; } ;
struct TYPE_6__ {scalar_t__ hotdrop; } ;
struct nft_pktinfo {TYPE_3__ xt; struct sk_buff* skb; } ;
struct nft_expr {TYPE_1__* ops; } ;
struct TYPE_4__ {struct xt_target* data; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xt_action_param*,struct xt_target*,void*) ;
 void* FUNC_1 (struct nft_expr const*) ;
 int FUNC_2 (struct sk_buff*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(const struct nft_expr *VAR_4,
       struct nft_regs *VAR_5,
       const struct nft_pktinfo *VAR_6)
{
 void *VAR_7 = FUNC_1(VAR_4);
 struct xt_target *VAR_8 = VAR_4->ops->data;
 struct sk_buff *VAR_9 = VAR_6->skb;
 int VAR_10;

 FUNC_0((struct xt_action_param *)&VAR_6->xt, VAR_8, VAR_7);

 VAR_10 = VAR_8->target(VAR_9, &VAR_6->xt);

 if (VAR_6->xt.hotdrop)
  VAR_10 = VAR_3;

 switch (VAR_10) {
 case 131:
  VAR_5->verdict.code = VAR_2;
  break;
 case 129:
  VAR_5->verdict.code = VAR_3;
  break;
 case 130:
  VAR_5->verdict.code = VAR_0;
  break;
 case 128:
  VAR_5->verdict.code = VAR_1;
  break;
 default:
  VAR_5->verdict.code = VAR_10;
  break;
 }
}
