
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct nfc_digital_dev {struct sk_buff* saved_skb; struct sk_buff* chaining_skb; int (* skb_add_crc ) (struct sk_buff*) ;scalar_t__ curr_nfc_dep_pni; scalar_t__ did; } ;
struct digital_dep_req_res {scalar_t__ pfb; int cmd; int dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct nfc_digital_dev*,struct sk_buff*,struct digital_dep_req_res*,int *) ;
 int FUNC_4 (struct nfc_digital_dev*,struct sk_buff*) ;
 int VAR_4 ;
 int FUNC_5 (struct nfc_digital_dev*,struct sk_buff*,int,int ,int *) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,scalar_t__*,int) ;
 int FUNC_10 (struct sk_buff*) ;

int FUNC_11(struct nfc_digital_dev *VAR_5, struct sk_buff *VAR_6)
{
 struct digital_dep_req_res *VAR_7;
 struct sk_buff *VAR_8, *VAR_9;
 int VAR_10;

 FUNC_8(VAR_6, sizeof(struct digital_dep_req_res));

 VAR_7 = (struct digital_dep_req_res *)VAR_6->data;

 VAR_7->dir = VAR_1;
 VAR_7->cmd = VAR_0;
 VAR_7->pfb = VAR_5->curr_nfc_dep_pni;

 if (VAR_5->did) {
  VAR_7->pfb |= VAR_2;

  FUNC_9(VAR_6, &VAR_5->did, sizeof(VAR_5->did));
 }

 VAR_5->curr_nfc_dep_pni =
  FUNC_0(VAR_5->curr_nfc_dep_pni + 1);

 VAR_8 = VAR_5->chaining_skb;

 VAR_9 = FUNC_3(VAR_5, VAR_6, VAR_7, ((void*)0));
 if (FUNC_1(VAR_9))
  return FUNC_2(VAR_9);

 FUNC_4(VAR_5, VAR_9);

 VAR_5->skb_add_crc(VAR_9);

 VAR_5->saved_skb = FUNC_7(VAR_9, VAR_3);

 VAR_10 = FUNC_5(VAR_5, VAR_9, 1500, VAR_4,
     ((void*)0));
 if (VAR_10) {
  if (VAR_9 != VAR_6)
   FUNC_6(VAR_9);

  FUNC_6(VAR_8);
  VAR_5->chaining_skb = ((void*)0);

  FUNC_6(VAR_5->saved_skb);
  VAR_5->saved_skb = ((void*)0);
 }

 return VAR_10;
}
