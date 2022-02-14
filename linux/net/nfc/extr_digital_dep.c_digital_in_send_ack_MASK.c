
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct nfc_digital_dev {int curr_nfc_dep_pni; struct sk_buff* saved_skb; int dep_rwt; int (* skb_add_crc ) (struct sk_buff*) ;} ;
struct digital_dep_req_res {int pfb; int cmd; int dir; } ;
struct digital_data_exch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nfc_digital_dev*,struct sk_buff*,int ,int ,struct digital_data_exch*) ;
 struct sk_buff* FUNC_1 (struct nfc_digital_dev*,int) ;
 int FUNC_2 (struct nfc_digital_dev*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct nfc_digital_dev *VAR_6,
          struct digital_data_exch *VAR_7)
{
 struct digital_dep_req_res *VAR_8;
 struct sk_buff *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_6, 1);
 if (!VAR_9)
  return -VAR_3;

 FUNC_5(VAR_9, sizeof(struct digital_dep_req_res));

 VAR_8 = (struct digital_dep_req_res *)VAR_9->data;

 VAR_8->dir = VAR_1;
 VAR_8->cmd = VAR_0;
 VAR_8->pfb = VAR_2 |
         VAR_6->curr_nfc_dep_pni;

 FUNC_2(VAR_6, VAR_9);

 VAR_6->skb_add_crc(VAR_9);

 VAR_6->saved_skb = FUNC_4(VAR_9, VAR_4);

 VAR_10 = FUNC_0(VAR_6, VAR_9, VAR_6->dep_rwt,
     VAR_5, VAR_7);
 if (VAR_10) {
  FUNC_3(VAR_9);
  FUNC_3(VAR_6->saved_skb);
  VAR_6->saved_skb = ((void*)0);
 }

 return VAR_10;
}
