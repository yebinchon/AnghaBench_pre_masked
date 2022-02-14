
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
struct TYPE_4__ {int code; } ;
struct nft_regs {TYPE_1__ verdict; } ;
struct TYPE_6__ {scalar_t__ hotdrop; } ;
struct nft_pktinfo {TYPE_3__ xt; struct sk_buff* skb; } ;
struct nft_expr {TYPE_2__* ops; } ;
struct TYPE_5__ {struct xt_target* data; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct xt_action_param*,struct xt_target*,void*) ;
 void* FUNC_1 (struct nft_expr const*) ;
 int FUNC_2 (struct sk_buff*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(const struct nft_expr *VAR_2,
          struct nft_regs *VAR_3,
          const struct nft_pktinfo *VAR_4)
{
 void *VAR_5 = FUNC_1(VAR_2);
 struct xt_target *VAR_6 = VAR_2->ops->data;
 struct sk_buff *VAR_7 = VAR_4->skb;
 int VAR_8;

 FUNC_0((struct xt_action_param *)&VAR_4->xt, VAR_6, VAR_5);

 VAR_8 = VAR_6->target(VAR_7, &VAR_4->xt);

 if (VAR_4->xt.hotdrop)
  VAR_8 = VAR_1;

 switch (VAR_8) {
 case 128:
  VAR_3->verdict.code = VAR_0;
  break;
 default:
  VAR_3->verdict.code = VAR_8;
  break;
 }
}
