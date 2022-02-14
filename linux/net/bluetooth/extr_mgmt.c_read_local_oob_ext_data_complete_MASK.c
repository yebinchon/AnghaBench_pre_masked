
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct mgmt_rp_read_local_oob_ext_data {int eir_len; int type; int eir; } ;
struct mgmt_pending_cmd {int sk; struct mgmt_cp_read_local_oob_ext_data* param; } ;
struct mgmt_cp_read_local_oob_ext_data {int type; } ;
struct hci_rp_read_local_oob_ext_data {scalar_t__* rand256; scalar_t__* hash256; scalar_t__* rand192; scalar_t__* hash192; } ;
struct hci_rp_read_local_oob_data {scalar_t__* rand; scalar_t__* hash; } ;
struct hci_dev {int id; scalar_t__* dev_class; int name; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct mgmt_rp_read_local_oob_ext_data*) ;
 struct mgmt_rp_read_local_oob_ext_data* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int ,int ,scalar_t__,struct mgmt_rp_read_local_oob_ext_data*,int) ;
 int FUNC_8 (int ,struct hci_dev*,struct mgmt_rp_read_local_oob_ext_data*,int,int ,int ) ;
 int FUNC_9 (struct mgmt_pending_cmd*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 struct mgmt_pending_cmd* FUNC_11 (int ,struct hci_dev*) ;

__attribute__((used)) static void FUNC_12(struct hci_dev *VAR_13, u8 VAR_14,
          u16 VAR_15, struct sk_buff *VAR_16)
{
 const struct mgmt_cp_read_local_oob_ext_data *VAR_17;
 struct mgmt_rp_read_local_oob_ext_data *VAR_18;
 u8 *VAR_19, *VAR_20, *VAR_21, *VAR_22;
 struct mgmt_pending_cmd *VAR_23;
 u16 VAR_24;
 int VAR_25;

 FUNC_0("%s status %u", VAR_13->name, VAR_14);

 VAR_23 = FUNC_11(VAR_10, VAR_13);
 if (!VAR_23)
  return;

 VAR_17 = VAR_23->param;

 if (VAR_14) {
  VAR_14 = FUNC_10(VAR_14);
  VAR_24 = 0;

  VAR_19 = ((void*)0);
  VAR_20 = ((void*)0);
  VAR_21 = ((void*)0);
  VAR_22 = ((void*)0);
 } else if (VAR_15 == VAR_7) {
  struct hci_rp_read_local_oob_data *VAR_26;

  if (VAR_16->len != sizeof(*VAR_26)) {
   VAR_14 = VAR_11;
   VAR_24 = 0;
  } else {
   VAR_14 = VAR_12;
   VAR_26 = (void *)VAR_16->data;

   VAR_24 = 5 + 18 + 18;
   VAR_19 = VAR_26->hash;
   VAR_20 = VAR_26->rand;
   VAR_21 = ((void*)0);
   VAR_22 = ((void*)0);
  }
 } else {
  struct hci_rp_read_local_oob_ext_data *VAR_27;

  if (VAR_16->len != sizeof(*VAR_27)) {
   VAR_14 = VAR_11;
   VAR_24 = 0;
  } else {
   VAR_14 = VAR_12;
   VAR_27 = (void *)VAR_16->data;

   if (FUNC_3(VAR_13, VAR_8)) {
    VAR_24 = 5 + 18 + 18;
    VAR_19 = ((void*)0);
    VAR_20 = ((void*)0);
   } else {
    VAR_24 = 5 + 18 + 18 + 18 + 18;
    VAR_19 = VAR_27->hash192;
    VAR_20 = VAR_27->rand192;
   }

   VAR_21 = VAR_27->hash256;
   VAR_22 = VAR_27->rand256;
  }
 }

 VAR_18 = FUNC_6(sizeof(*VAR_18) + VAR_24, VAR_5);
 if (!VAR_18)
  goto done;

 if (VAR_14)
  goto send_rsp;

 VAR_24 = FUNC_2(VAR_18->eir, 0, VAR_0,
      VAR_13->dev_class, 3);

 if (VAR_19 && VAR_20) {
  VAR_24 = FUNC_2(VAR_18->eir, VAR_24,
       VAR_1, VAR_19, 16);
  VAR_24 = FUNC_2(VAR_18->eir, VAR_24,
       VAR_3, VAR_20, 16);
 }

 if (VAR_21 && VAR_22) {
  VAR_24 = FUNC_2(VAR_18->eir, VAR_24,
       VAR_2, VAR_21, 16);
  VAR_24 = FUNC_2(VAR_18->eir, VAR_24,
       VAR_4, VAR_22, 16);
 }

send_rsp:
 VAR_18->type = VAR_17->type;
 VAR_18->eir_len = FUNC_1(VAR_24);

 VAR_25 = FUNC_7(VAR_23->sk, VAR_13->id,
    VAR_10, VAR_14,
    VAR_18, sizeof(*VAR_18) + VAR_24);
 if (VAR_25 < 0 || VAR_14)
  goto done;

 FUNC_4(VAR_23->sk, VAR_6);

 VAR_25 = FUNC_8(VAR_9, VAR_13,
     VAR_18, sizeof(*VAR_18) + VAR_24,
     VAR_6, VAR_23->sk);
done:
 FUNC_5(VAR_18);
 FUNC_9(VAR_23);
}
