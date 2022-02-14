
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct nfc_target {int is_iso15693; int iso15693_uid; int iso15693_dsfid; } ;
struct nfc_digital_dev {int dummy; } ;
struct digital_iso15693_inv_res {int uid; int dsfid; int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct nfc_digital_dev*) ;
 int FUNC_6 (struct nfc_digital_dev*,struct nfc_target*,int ) ;
 int FUNC_7 (struct nfc_target*) ;
 struct nfc_target* FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int *,int) ;

__attribute__((used)) static void FUNC_10(struct nfc_digital_dev *VAR_5,
  void *VAR_6, struct sk_buff *VAR_7)
{
 struct digital_iso15693_inv_res *VAR_8;
 struct nfc_target *VAR_9 = ((void*)0);
 int VAR_10;

 if (FUNC_1(VAR_7)) {
  VAR_10 = FUNC_3(VAR_7);
  VAR_7 = ((void*)0);
  goto out_free_skb;
 }

 if (VAR_7->len != sizeof(*VAR_8)) {
  VAR_10 = -VAR_1;
  goto out_free_skb;
 }

 VAR_8 = (struct digital_iso15693_inv_res *)VAR_7->data;

 if (!FUNC_0(VAR_8->flags)) {
  FUNC_2("ISO15693 - 10.3.1");
  VAR_10 = -VAR_0;
  goto out_free_skb;
 }

 VAR_9 = FUNC_8(sizeof(*VAR_9), VAR_3);
 if (!VAR_9) {
  VAR_10 = -VAR_2;
  goto out_free_skb;
 }

 VAR_9->is_iso15693 = 1;
 VAR_9->iso15693_dsfid = VAR_8->dsfid;
 FUNC_9(VAR_9->iso15693_uid, &VAR_8->uid, sizeof(VAR_9->iso15693_uid));

 VAR_10 = FUNC_6(VAR_5, VAR_9, VAR_4);

 FUNC_7(VAR_9);

out_free_skb:
 FUNC_4(VAR_7);

 if (VAR_10)
  FUNC_5(VAR_5);
}
