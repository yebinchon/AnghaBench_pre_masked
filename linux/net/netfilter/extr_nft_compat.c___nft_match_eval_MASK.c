
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xt_match {int (* match ) (struct sk_buff*,struct xt_action_param*) ;} ;
struct xt_action_param {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {int code; } ;
struct nft_regs {TYPE_2__ verdict; } ;
struct TYPE_4__ {scalar_t__ hotdrop; } ;
struct nft_pktinfo {TYPE_1__ xt; struct sk_buff* skb; } ;
struct nft_expr {TYPE_3__* ops; } ;
struct TYPE_6__ {struct xt_match* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xt_action_param*,struct xt_match*,void*) ;
 int FUNC_1 (struct sk_buff*,struct xt_action_param*) ;

__attribute__((used)) static void FUNC_2(const struct nft_expr *VAR_3,
        struct nft_regs *VAR_4,
        const struct nft_pktinfo *VAR_5,
        void *VAR_6)
{
 struct xt_match *VAR_7 = VAR_3->ops->data;
 struct sk_buff *VAR_8 = VAR_5->skb;
 bool VAR_9;

 FUNC_0((struct xt_action_param *)&VAR_5->xt, VAR_7, VAR_6);

 VAR_9 = VAR_7->match(VAR_8, (struct xt_action_param *)&VAR_5->xt);

 if (VAR_5->xt.hotdrop) {
  VAR_4->verdict.code = VAR_2;
  return;
 }

 switch (VAR_9 ? 1 : 0) {
 case 1:
  VAR_4->verdict.code = VAR_1;
  break;
 case 0:
  VAR_4->verdict.code = VAR_0;
  break;
 }
}
