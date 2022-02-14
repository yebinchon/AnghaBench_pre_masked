
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct nfc_digital_dev {scalar_t__ curr_nfc_dep_pni; int (* skb_add_crc ) (struct sk_buff*) ;int local_payload_max; int nfc_dev; } ;
struct digital_atr_res {int gb; int pp; int to; int nfcid3; int cmd; int dir; } ;
struct digital_atr_req {int * nfcid3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (struct nfc_digital_dev*,int) ;
 int FUNC_3 (struct nfc_digital_dev*,struct sk_buff*) ;
 int VAR_6 ;
 int FUNC_4 (struct nfc_digital_dev*,struct sk_buff*,int,int ,int *) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int *,size_t) ;
 int FUNC_7 (struct digital_atr_res*,int ,int) ;
 int * FUNC_8 (int ,size_t*) ;
 int FUNC_9 (struct sk_buff*,size_t) ;
 int FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_11(struct nfc_digital_dev *VAR_7,
       struct digital_atr_req *VAR_8)
{
 struct digital_atr_res *VAR_9;
 struct sk_buff *VAR_10;
 u8 *VAR_11, VAR_12;
 size_t VAR_13;
 int VAR_14;

 VAR_11 = FUNC_8(VAR_7->nfc_dev, &VAR_13);
 if (!VAR_11)
  VAR_13 = 0;

 VAR_10 = FUNC_2(VAR_7, sizeof(struct digital_atr_res) + VAR_13);
 if (!VAR_10)
  return -VAR_5;

 FUNC_9(VAR_10, sizeof(struct digital_atr_res));
 VAR_9 = (struct digital_atr_res *)VAR_10->data;

 FUNC_7(VAR_9, 0, sizeof(struct digital_atr_res));

 VAR_9->dir = VAR_2;
 VAR_9->cmd = VAR_0;
 FUNC_6(VAR_9->nfcid3, VAR_8->nfcid3, sizeof(VAR_8->nfcid3));
 VAR_9->to = VAR_3;

 VAR_7->local_payload_max = VAR_4;
 VAR_12 = FUNC_1(VAR_7->local_payload_max);
 VAR_9->pp = FUNC_0(VAR_12);

 if (VAR_13) {
  FUNC_9(VAR_10, VAR_13);

  VAR_9->pp |= VAR_1;
  FUNC_6(VAR_9->gb, VAR_11, VAR_13);
 }

 FUNC_3(VAR_7, VAR_10);

 VAR_7->skb_add_crc(VAR_10);

 VAR_7->curr_nfc_dep_pni = 0;

 VAR_14 = FUNC_4(VAR_7, VAR_10, 999,
     VAR_6, ((void*)0));
 if (VAR_14)
  FUNC_5(VAR_10);

 return VAR_14;
}
