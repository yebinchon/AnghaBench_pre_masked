
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct nfc_target {int idx; } ;
struct nfc_digital_dev {int (* skb_check_crc ) (struct sk_buff*) ;int protocols; scalar_t__ curr_rf_tech; scalar_t__ curr_protocol; scalar_t__ curr_nfc_dep_pni; int nfc_dev; int remote_payload_max; int dep_rwt; } ;
struct digital_atr_res {int gb; int pp; int to; } ;


 size_t FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct nfc_digital_dev*,struct nfc_target*) ;
 int FUNC_7 (size_t) ;
 int * VAR_7 ;
 int FUNC_8 (struct nfc_digital_dev*,struct sk_buff*) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,size_t) ;
 int FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_12(struct nfc_digital_dev *VAR_8, void *VAR_9,
     struct sk_buff *VAR_10)
{
 struct nfc_target *VAR_11 = VAR_9;
 struct digital_atr_res *VAR_12;
 u8 VAR_13, VAR_14;
 u8 VAR_15;
 int VAR_16;

 if (FUNC_2(VAR_10)) {
  VAR_16 = FUNC_4(VAR_10);
  VAR_10 = ((void*)0);
  goto exit;
 }

 VAR_16 = VAR_8->skb_check_crc(VAR_10);
 if (VAR_16) {
  FUNC_3("14.4.1.6");
  goto exit;
 }

 VAR_16 = FUNC_8(VAR_8, VAR_10);
 if (VAR_16) {
  FUNC_3("14.4.1.2");
  goto exit;
 }

 if (VAR_10->len < sizeof(struct digital_atr_res)) {
  VAR_16 = -VAR_2;
  goto exit;
 }

 VAR_13 = VAR_10->len - sizeof(struct digital_atr_res);

 VAR_12 = (struct digital_atr_res *)VAR_10->data;

 VAR_15 = FUNC_0(VAR_12->to);
 if (VAR_15 > VAR_0)
  VAR_15 = VAR_0;
 VAR_8->dep_rwt = VAR_7[VAR_15];

 VAR_14 = FUNC_1(VAR_12->pp);
 VAR_8->remote_payload_max = FUNC_7(VAR_14);

 if (!VAR_8->remote_payload_max) {
  VAR_16 = -VAR_1;
  goto exit;
 }

 VAR_16 = FUNC_10(VAR_8->nfc_dev, VAR_12->gb, VAR_13);
 if (VAR_16)
  goto exit;

 if ((VAR_8->protocols & VAR_5) &&
     (VAR_8->curr_rf_tech != VAR_4)) {
  VAR_16 = FUNC_6(VAR_8, VAR_11);
  if (!VAR_16)
   goto exit;
 }

 VAR_16 = FUNC_9(VAR_8->nfc_dev, VAR_11->idx, VAR_3,
    VAR_6);

 VAR_8->curr_nfc_dep_pni = 0;

exit:
 FUNC_5(VAR_10);

 if (VAR_16)
  VAR_8->curr_protocol = 0;
}
