
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct nfc_target {int nfcid2; scalar_t__ nfcid2_len; } ;
struct nfc_digital_dev {int (* skb_add_crc ) (struct sk_buff*) ;int local_payload_max; } ;
struct digital_atr_req {int pp; scalar_t__ br; scalar_t__ bs; scalar_t__ did; int nfcid3; int cmd; int dir; } ;
typedef int __u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*) ;
 int VAR_11 ;
 int FUNC_2 (struct nfc_digital_dev*,struct sk_buff*,int ,int ,struct nfc_target*) ;
 int FUNC_3 (int ) ;
 struct sk_buff* FUNC_4 (struct nfc_digital_dev*,scalar_t__) ;
 int FUNC_5 (struct nfc_digital_dev*,struct sk_buff*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct digital_atr_req*,int ,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,int *,size_t) ;
 int FUNC_12 (struct sk_buff*) ;

int FUNC_13(struct nfc_digital_dev *VAR_12,
       struct nfc_target *VAR_13, __u8 VAR_14, __u8 *VAR_15,
       size_t VAR_16)
{
 struct sk_buff *VAR_17;
 struct digital_atr_req *VAR_18;
 uint VAR_19;
 int VAR_20;
 u8 VAR_21;

 VAR_19 = VAR_1 + VAR_16;

 if (VAR_19 > VAR_0) {
  FUNC_1("14.6.1.1");
  return -VAR_7;
 }

 VAR_17 = FUNC_4(VAR_12, VAR_19);
 if (!VAR_17)
  return -VAR_8;

 FUNC_10(VAR_17, sizeof(struct digital_atr_req));

 VAR_18 = (struct digital_atr_req *)VAR_17->data;
 FUNC_9(VAR_18, 0, sizeof(struct digital_atr_req));

 VAR_18->dir = VAR_5;
 VAR_18->cmd = VAR_3;
 if (VAR_13->nfcid2_len)
  FUNC_8(VAR_18->nfcid3, VAR_13->nfcid2, VAR_9);
 else
  FUNC_6(VAR_18->nfcid3, VAR_10);

 VAR_18->did = 0;
 VAR_18->bs = 0;
 VAR_18->br = 0;

 VAR_12->local_payload_max = VAR_6;
 VAR_21 = FUNC_3(VAR_12->local_payload_max);
 VAR_18->pp = FUNC_0(VAR_21);

 if (VAR_16) {
  VAR_18->pp |= VAR_4;
  FUNC_11(VAR_17, VAR_15, VAR_16);
 }

 FUNC_5(VAR_12, VAR_17);

 VAR_12->skb_add_crc(VAR_17);

 VAR_20 = FUNC_2(VAR_12, VAR_17, VAR_2,
     VAR_11, VAR_13);
 if (VAR_20)
  FUNC_7(VAR_17);

 return VAR_20;
}
