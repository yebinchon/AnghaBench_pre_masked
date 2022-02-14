
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smp_dev {scalar_t__ method; struct smp_cmd_pairing_confirm* prnd; scalar_t__ remote_pk; scalar_t__ local_pk; int tfm_cmac; int flags; scalar_t__ passkey_round; scalar_t__ dhkey; struct crypto_kpp* tfm_ecdh; scalar_t__ pcnf; struct smp_cmd_pairing_confirm* rr; } ;
struct smp_cmd_public_key {int dummy; } ;
struct smp_cmd_pairing_confirm {int confirm_val; } ;
struct smp_chan {scalar_t__ method; struct smp_cmd_pairing_confirm* prnd; scalar_t__ remote_pk; scalar_t__ local_pk; int tfm_cmac; int flags; scalar_t__ passkey_round; scalar_t__ dhkey; struct crypto_kpp* tfm_ecdh; scalar_t__ pcnf; struct smp_cmd_pairing_confirm* rr; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct l2cap_conn {struct hci_conn* hcon; struct l2cap_chan* smp; } ;
struct l2cap_chan {struct smp_dev* data; } ;
struct hci_dev {int name; struct l2cap_chan* smp_data; } ;
struct hci_conn {int passkey_notify; scalar_t__ out; int dst_type; int type; int dst; scalar_t__ passkey_entered; int pending_sec_level; struct hci_dev* hdev; } ;
struct crypto_kpp {int dummy; } ;
typedef int cfm ;


 int FUNC_0 (char*,struct l2cap_conn*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct smp_dev*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*,scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_3 (struct crypto_kpp*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int) ;
 int VAR_18 ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (scalar_t__,struct smp_cmd_public_key*,int) ;
 scalar_t__ FUNC_7 (struct hci_dev*,int *,int ,int ,int,scalar_t__) ;
 scalar_t__ FUNC_8 (struct hci_dev*,int *,int ,int ) ;
 int FUNC_9 (struct smp_dev*,int ) ;
 scalar_t__ FUNC_10 (struct smp_dev*) ;
 int FUNC_11 (struct smp_dev*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,scalar_t__,scalar_t__,struct smp_cmd_pairing_confirm*,int ,int ) ;
 int FUNC_14 (struct l2cap_conn*,int ,int,struct smp_cmd_pairing_confirm*) ;
 scalar_t__ FUNC_15 (int ,int *) ;

__attribute__((used)) static int FUNC_16(struct l2cap_conn *VAR_19, struct sk_buff *VAR_20)
{
 struct smp_cmd_public_key *VAR_21 = (void *) VAR_20->data;
 struct hci_conn *VAR_22 = VAR_19->hcon;
 struct l2cap_chan *VAR_23 = VAR_19->smp;
 struct smp_chan *VAR_24 = VAR_23->data;
 struct hci_dev *VAR_25 = VAR_22->hdev;
 struct crypto_kpp *VAR_26;
 struct smp_cmd_pairing_confirm VAR_27;
 int VAR_28;

 FUNC_0("conn %p", VAR_19);

 if (VAR_20->len < sizeof(*VAR_21))
  return VAR_16;

 FUNC_6(VAR_24->remote_pk, VAR_21, 64);

 if (FUNC_15(VAR_13, &VAR_24->flags)) {
  VAR_28 = FUNC_13(VAR_24->tfm_cmac, VAR_24->remote_pk, VAR_24->remote_pk,
        VAR_24->rr, 0, VAR_27.confirm_val);
  if (VAR_28)
   return VAR_17;

  if (FUNC_4(VAR_27.confirm_val, VAR_24->pcnf, 16))
   return VAR_10;
 }




 if (!VAR_22->out) {
  VAR_28 = FUNC_11(VAR_24);
  if (VAR_28)
   return VAR_28;
 }

 FUNC_2("Remote Public Key X: %32phN", VAR_24->remote_pk);
 FUNC_2("Remote Public Key Y: %32phN", VAR_24->remote_pk + 32);




 if (FUNC_15(VAR_12, &VAR_24->flags)) {
  struct l2cap_chan *VAR_29 = VAR_25->smp_data;
  struct smp_dev *VAR_30;

  if (!VAR_29 || !VAR_29->data)
   return VAR_17;

  VAR_30 = VAR_29->data;

  VAR_26 = VAR_30->tfm_ecdh;
 } else {
  VAR_26 = VAR_24->tfm_ecdh;
 }

 if (FUNC_3(VAR_26, VAR_24->remote_pk, VAR_24->dhkey))
  return VAR_17;

 FUNC_2("DHKey %32phN", VAR_24->dhkey);

 FUNC_12(VAR_14, &VAR_24->flags);

 VAR_24->method = FUNC_10(VAR_24);

 FUNC_0("%s selected method 0x%02x", VAR_25->name, VAR_24->method);


 if (VAR_24->method == VAR_4 || VAR_24->method == VAR_3)
  VAR_22->pending_sec_level = VAR_1;
 else
  VAR_22->pending_sec_level = VAR_0;

 if (!FUNC_4(VAR_18, VAR_24->remote_pk, 64))
  FUNC_12(VAR_11, &VAR_24->flags);

 if (VAR_24->method == VAR_2) {
  FUNC_5(&VAR_22->passkey_notify,
     sizeof(VAR_22->passkey_notify));
  VAR_22->passkey_notify %= 1000000;
  VAR_22->passkey_entered = 0;
  VAR_24->passkey_round = 0;
  if (FUNC_7(VAR_25, &VAR_22->dst, VAR_22->type,
          VAR_22->dst_type,
          VAR_22->passkey_notify,
          VAR_22->passkey_entered))
   return VAR_17;
  FUNC_1(VAR_24, VAR_7);
  return FUNC_9(VAR_24, VAR_9);
 }

 if (VAR_24->method == VAR_5) {
  if (VAR_22->out)
   FUNC_14(VAR_19, VAR_8,
         sizeof(VAR_24->prnd), VAR_24->prnd);

  FUNC_1(VAR_24, VAR_8);

  return 0;
 }

 if (VAR_22->out)
  FUNC_1(VAR_24, VAR_7);

 if (VAR_24->method == VAR_6) {
  if (FUNC_8(VAR_25, &VAR_22->dst, VAR_22->type,
           VAR_22->dst_type))
   return VAR_17;
  FUNC_1(VAR_24, VAR_7);
  FUNC_12(VAR_15, &VAR_24->flags);
  return 0;
 }




 if (VAR_19->hcon->out)
  return 0;

 VAR_28 = FUNC_13(VAR_24->tfm_cmac, VAR_24->local_pk, VAR_24->remote_pk, VAR_24->prnd,
       0, VAR_27.confirm_val);
 if (VAR_28)
  return VAR_17;

 FUNC_14(VAR_19, VAR_7, sizeof(VAR_27), &VAR_27);
 FUNC_1(VAR_24, VAR_8);

 return 0;
}
