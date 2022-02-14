
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ len; int data; } ;
struct nfc_digital_dev {int local_payload_max; struct sk_buff* chaining_skb; } ;
struct digital_data_exch {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 struct sk_buff* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int,int ) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ,int,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *
FUNC_8(struct nfc_digital_dev *VAR_2, u8 VAR_3,
        struct sk_buff *VAR_4,
        int (*VAR_5)(struct nfc_digital_dev *VAR_6,
          struct digital_data_exch
            *VAR_7),
        struct digital_data_exch *VAR_8)
{
 struct sk_buff *VAR_9;
 int VAR_10;

 if (FUNC_0(VAR_3) && (!VAR_2->chaining_skb)) {
  VAR_2->chaining_skb =
   FUNC_3(8 * VAR_2->local_payload_max,
        VAR_1);
  if (!VAR_2->chaining_skb) {
   VAR_10 = -VAR_0;
   goto error;
  }
 }

 if (VAR_2->chaining_skb) {
  if (VAR_4->len > FUNC_7(VAR_2->chaining_skb)) {
   VAR_9 = FUNC_4(VAR_2->chaining_skb,
        FUNC_5(
         VAR_2->chaining_skb),
        8 * VAR_2->local_payload_max,
        VAR_1);
   if (!VAR_9) {
    VAR_10 = -VAR_0;
    goto error;
   }

   FUNC_2(VAR_2->chaining_skb);
   VAR_2->chaining_skb = VAR_9;
  }

  FUNC_6(VAR_2->chaining_skb, VAR_4->data, VAR_4->len);

  FUNC_2(VAR_4);
  VAR_4 = ((void*)0);

  if (FUNC_0(VAR_3)) {
   VAR_10 = VAR_5(VAR_2, VAR_8);
   if (VAR_10)
    goto error;

   return ((void*)0);
  }

  VAR_4 = VAR_2->chaining_skb;
  VAR_2->chaining_skb = ((void*)0);
 }

 return VAR_4;

error:
 FUNC_2(VAR_4);

 FUNC_2(VAR_2->chaining_skb);
 VAR_2->chaining_skb = ((void*)0);

 return FUNC_1(VAR_10);
}
