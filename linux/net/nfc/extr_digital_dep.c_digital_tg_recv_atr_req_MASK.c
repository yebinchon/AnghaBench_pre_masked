
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {size_t len; scalar_t__* data; } ;
struct nfc_digital_dev {int (* skb_check_crc ) (struct sk_buff*) ;scalar_t__ did; int poll_tech_count; int nfc_dev; int remote_payload_max; int curr_protocol; } ;
struct digital_atr_req {scalar_t__ dir; scalar_t__ cmd; scalar_t__ did; int gb; int pp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct nfc_digital_dev*) ;
 int FUNC_7 (struct nfc_digital_dev*,struct sk_buff*) ;
 int FUNC_8 (struct nfc_digital_dev*,int ,int ) ;
 int FUNC_9 (struct nfc_digital_dev*,struct digital_atr_req*) ;
 int FUNC_10 (struct nfc_digital_dev*,int ) ;
 int FUNC_11 (int ,int ,int ,int ,size_t) ;
 int FUNC_12 (struct sk_buff*) ;

void FUNC_13(struct nfc_digital_dev *VAR_13, void *VAR_14,
        struct sk_buff *VAR_15)
{
 int VAR_16;
 struct digital_atr_req *VAR_17;
 size_t VAR_18, VAR_19;
 u8 VAR_20, VAR_21;

 if (FUNC_1(VAR_15)) {
  VAR_16 = FUNC_3(VAR_15);
  VAR_15 = ((void*)0);
  goto exit;
 }

 if (!VAR_15->len) {
  VAR_16 = -VAR_6;
  goto exit;
 }

 if (VAR_15->data[0] == VAR_4) {
  VAR_19 = VAR_0 + 2;
  FUNC_10(VAR_13, VAR_10);
 } else {
  VAR_19 = VAR_0 + 1;
  FUNC_10(VAR_13, VAR_11);
 }

 if (VAR_15->len < VAR_19) {
  VAR_16 = -VAR_6;
  goto exit;
 }

 VAR_13->curr_protocol = VAR_12;

 VAR_16 = VAR_13->skb_check_crc(VAR_15);
 if (VAR_16) {
  FUNC_2("14.4.1.6");
  goto exit;
 }

 VAR_16 = FUNC_7(VAR_13, VAR_15);
 if (VAR_16) {
  FUNC_2("14.4.1.2");
  goto exit;
 }

 VAR_17 = (struct digital_atr_req *)VAR_15->data;

 if (VAR_17->dir != VAR_3 ||
     VAR_17->cmd != VAR_1 ||
     VAR_17->did > VAR_2) {
  VAR_16 = -VAR_5;
  goto exit;
 }

 VAR_21 = FUNC_0(VAR_17->pp);
 VAR_13->remote_payload_max = FUNC_5(VAR_21);

 if (!VAR_13->remote_payload_max) {
  VAR_16 = -VAR_5;
  goto exit;
 }

 VAR_13->did = VAR_17->did;

 VAR_16 = FUNC_8(VAR_13, VAR_8,
         VAR_9);
 if (VAR_16)
  goto exit;

 VAR_16 = FUNC_9(VAR_13, VAR_17);
 if (VAR_16)
  goto exit;

 VAR_18 = VAR_15->len - sizeof(struct digital_atr_req);

 VAR_20 = VAR_13->poll_tech_count;
 VAR_13->poll_tech_count = 0;

 VAR_16 = FUNC_11(VAR_13->nfc_dev, VAR_12,
         VAR_7, VAR_17->gb, VAR_18);
 if (VAR_16) {
  VAR_13->poll_tech_count = VAR_20;
  goto exit;
 }

 VAR_16 = 0;
exit:
 if (VAR_16)
  FUNC_6(VAR_13);

 FUNC_4(VAR_15);
}
