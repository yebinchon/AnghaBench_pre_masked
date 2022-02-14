
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct nfc_target {int idx; } ;
struct nfc_digital_dev {int (* skb_check_crc ) (struct sk_buff*) ;scalar_t__ curr_rf_tech; scalar_t__ curr_protocol; scalar_t__ curr_nfc_dep_pni; int nfc_dev; int skb_add_crc; } ;
struct digital_psl_res {scalar_t__ dir; scalar_t__ cmd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nfc_digital_dev*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct nfc_digital_dev*,int ,scalar_t__) ;
 int VAR_10 ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct nfc_digital_dev*,struct sk_buff*) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_10(struct nfc_digital_dev *VAR_11, void *VAR_12,
        struct sk_buff *VAR_13)
{
 struct nfc_target *VAR_14 = VAR_12;
 struct digital_psl_res *VAR_15;
 int VAR_16;

 if (FUNC_1(VAR_13)) {
  VAR_16 = FUNC_3(VAR_13);
  VAR_13 = ((void*)0);
  goto exit;
 }

 VAR_16 = VAR_11->skb_check_crc(VAR_13);
 if (VAR_16) {
  FUNC_2("14.4.1.6");
  goto exit;
 }

 VAR_16 = FUNC_7(VAR_11, VAR_13);
 if (VAR_16) {
  FUNC_2("14.4.1.2");
  goto exit;
 }

 VAR_15 = (struct digital_psl_res *)VAR_13->data;

 if ((VAR_13->len != sizeof(*VAR_15)) ||
     (VAR_15->dir != VAR_1) ||
     (VAR_15->cmd != VAR_0)) {
  VAR_16 = -VAR_2;
  goto exit;
 }

 VAR_16 = FUNC_5(VAR_11, VAR_5,
         VAR_8);
 if (VAR_16)
  goto exit;

 VAR_16 = FUNC_5(VAR_11, VAR_4,
         VAR_6);
 if (VAR_16)
  goto exit;

 if (!FUNC_0(VAR_11) &&
     (VAR_11->curr_rf_tech == VAR_7)) {
  VAR_11->skb_add_crc = VAR_10;
  VAR_11->skb_check_crc = FUNC_6;
 }

 VAR_11->curr_rf_tech = VAR_8;

 FUNC_8(VAR_11->nfc_dev, VAR_14->idx, VAR_3,
      VAR_9);

 VAR_11->curr_nfc_dep_pni = 0;

exit:
 FUNC_4(VAR_13);

 if (VAR_16)
  VAR_11->curr_protocol = 0;
}
