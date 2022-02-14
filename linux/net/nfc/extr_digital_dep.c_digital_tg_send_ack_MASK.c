
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct nfc_digital_dev {int curr_nfc_dep_pni; struct sk_buff* saved_skb; int (* skb_add_crc ) (struct sk_buff*) ;int did; } ;
struct digital_dep_req_res {int pfb; int cmd; int dir; } ;
struct digital_data_exch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_1 (struct nfc_digital_dev*,int) ;
 int FUNC_2 (struct nfc_digital_dev*,struct sk_buff*) ;
 int VAR_6 ;
 int FUNC_3 (struct nfc_digital_dev*,struct sk_buff*,int,int ,struct digital_data_exch*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int *,int) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct nfc_digital_dev *VAR_7,
          struct digital_data_exch *VAR_8)
{
 struct digital_dep_req_res *VAR_9;
 struct sk_buff *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_1(VAR_7, 1);
 if (!VAR_10)
  return -VAR_4;

 FUNC_6(VAR_10, sizeof(struct digital_dep_req_res));

 VAR_9 = (struct digital_dep_req_res *)VAR_10->data;

 VAR_9->dir = VAR_1;
 VAR_9->cmd = VAR_0;
 VAR_9->pfb = VAR_2 |
         VAR_7->curr_nfc_dep_pni;

 if (VAR_7->did) {
  VAR_9->pfb |= VAR_3;

  FUNC_7(VAR_10, &VAR_7->did, sizeof(VAR_7->did));
 }

 VAR_7->curr_nfc_dep_pni =
  FUNC_0(VAR_7->curr_nfc_dep_pni + 1);

 FUNC_2(VAR_7, VAR_10);

 VAR_7->skb_add_crc(VAR_10);

 VAR_7->saved_skb = FUNC_5(VAR_10, VAR_5);

 VAR_11 = FUNC_3(VAR_7, VAR_10, 1500, VAR_6,
     VAR_8);
 if (VAR_11) {
  FUNC_4(VAR_10);
  FUNC_4(VAR_7->saved_skb);
  VAR_7->saved_skb = ((void*)0);
 }

 return VAR_11;
}
