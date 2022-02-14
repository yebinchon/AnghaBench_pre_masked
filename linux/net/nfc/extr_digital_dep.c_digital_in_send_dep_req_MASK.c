
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct nfc_target {int dummy; } ;
struct nfc_digital_dev {struct sk_buff* saved_skb; struct sk_buff* chaining_skb; int dep_rwt; int (* skb_add_crc ) (struct sk_buff*) ;scalar_t__ nack_count; scalar_t__ atn_count; int curr_nfc_dep_pni; } ;
struct digital_dep_req_res {int pfb; int cmd; int dir; } ;
struct digital_data_exch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_2 (struct nfc_digital_dev*,struct sk_buff*,int ,int ,struct digital_data_exch*) ;
 struct sk_buff* FUNC_3 (struct nfc_digital_dev*,struct sk_buff*,struct digital_dep_req_res*,struct digital_data_exch*) ;
 int FUNC_4 (struct nfc_digital_dev*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*) ;

int FUNC_9(struct nfc_digital_dev *VAR_4,
       struct nfc_target *VAR_5, struct sk_buff *VAR_6,
       struct digital_data_exch *VAR_7)
{
 struct digital_dep_req_res *VAR_8;
 struct sk_buff *VAR_9, *VAR_10;
 int VAR_11;

 FUNC_7(VAR_6, sizeof(struct digital_dep_req_res));

 VAR_8 = (struct digital_dep_req_res *)VAR_6->data;

 VAR_8->dir = VAR_1;
 VAR_8->cmd = VAR_0;
 VAR_8->pfb = VAR_4->curr_nfc_dep_pni;

 VAR_4->atn_count = 0;
 VAR_4->nack_count = 0;

 VAR_9 = VAR_4->chaining_skb;

 VAR_10 = FUNC_3(VAR_4, VAR_6, VAR_8, VAR_7);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 FUNC_4(VAR_4, VAR_10);

 VAR_4->skb_add_crc(VAR_10);

 VAR_4->saved_skb = FUNC_6(VAR_10, VAR_2);

 VAR_11 = FUNC_2(VAR_4, VAR_10, VAR_4->dep_rwt,
     VAR_3, VAR_7);
 if (VAR_11) {
  if (VAR_10 != VAR_6)
   FUNC_5(VAR_10);

  FUNC_5(VAR_9);
  VAR_4->chaining_skb = ((void*)0);

  FUNC_5(VAR_4->saved_skb);
  VAR_4->saved_skb = ((void*)0);
 }

 return VAR_11;
}
