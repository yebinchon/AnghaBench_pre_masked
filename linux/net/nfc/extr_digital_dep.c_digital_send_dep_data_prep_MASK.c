
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; int len; } ;
struct nfc_digital_dev {struct sk_buff* chaining_skb; struct digital_data_exch* data_exch; int remote_payload_max; } ;
struct digital_dep_req_res {int pfb; } ;
struct digital_data_exch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (struct nfc_digital_dev*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_5(struct nfc_digital_dev *VAR_2, struct sk_buff *VAR_3,
      struct digital_dep_req_res *VAR_4,
      struct digital_data_exch *VAR_5)
{
 struct sk_buff *VAR_6;

 if (VAR_3->len > VAR_2->remote_payload_max) {
  VAR_4->pfb |= VAR_0;

  VAR_6 = FUNC_1(VAR_2, VAR_2->remote_payload_max);
  if (!VAR_6) {
   FUNC_2(VAR_2->chaining_skb);
   VAR_2->chaining_skb = ((void*)0);

   return FUNC_0(-VAR_1);
  }

  FUNC_4(VAR_6, VAR_3->data, VAR_2->remote_payload_max);
  FUNC_3(VAR_3, VAR_2->remote_payload_max);

  VAR_2->chaining_skb = VAR_3;
  VAR_2->data_exch = VAR_5;
 } else {
  VAR_2->chaining_skb = ((void*)0);
  VAR_6 = VAR_3;
 }

 return VAR_6;
}
