
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int truesize; scalar_t__ encapsulation; int pkt_type; scalar_t__ skb_iif; int dev; int pfmemalloc; } ;
struct napi_struct {struct sk_buff* skb; int dev; } ;
struct TYPE_2__ {scalar_t__ gso_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 TYPE_1__* FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct napi_struct *VAR_3, struct sk_buff *VAR_4)
{
 if (FUNC_10(VAR_4->pfmemalloc)) {
  FUNC_3(VAR_4);
  return;
 }
 FUNC_1(VAR_4, FUNC_6(VAR_4));

 FUNC_8(VAR_4, VAR_1 + VAR_0 - FUNC_7(VAR_4));
 FUNC_2(VAR_4);
 VAR_4->dev = VAR_3->dev;
 VAR_4->skb_iif = 0;


 VAR_4->pkt_type = VAR_2;

 VAR_4->encapsulation = 0;
 FUNC_9(VAR_4)->gso_type = 0;
 VAR_4->truesize = FUNC_0(FUNC_4(VAR_4));
 FUNC_5(VAR_4);

 VAR_3->skb = VAR_4;
}
