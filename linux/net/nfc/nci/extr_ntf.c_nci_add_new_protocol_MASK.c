
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rf_tech_specific_params_nfcv_poll {int uid; int dsfid; } ;
struct rf_tech_specific_params_nfcf_poll {int sensf_res; int sensf_res_len; } ;
struct rf_tech_specific_params_nfcb_poll {int sensb_res; int sensb_res_len; } ;
struct rf_tech_specific_params_nfca_poll {int nfcid1; int nfcid1_len; int sel_res; int sens_res; } ;
struct nfc_target {int is_iso15693; int supported_protocols; int iso15693_uid; int iso15693_dsfid; int sensf_res_len; int sensf_res; int sensb_res_len; int sensb_res; int nfcid1_len; int nfcid1; int sel_res; int sens_res; } ;
struct nci_dev {int poll_prots; } ;
typedef scalar_t__ __u8 ;
typedef int __u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct nci_dev*,scalar_t__) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(struct nci_dev *VAR_19,
    struct nfc_target *VAR_20,
    __u8 VAR_21,
    __u8 VAR_22,
    void *VAR_23)
{
 struct rf_tech_specific_params_nfca_poll *VAR_24;
 struct rf_tech_specific_params_nfcb_poll *VAR_25;
 struct rf_tech_specific_params_nfcf_poll *VAR_26;
 struct rf_tech_specific_params_nfcv_poll *VAR_27;
 __u32 VAR_28;

 if (VAR_21 == VAR_7)
  VAR_28 = VAR_16;
 else if (VAR_21 == VAR_8)
  VAR_28 = VAR_17;
 else if (VAR_21 == VAR_5)
  if (VAR_22 == VAR_1)
   VAR_28 = VAR_14;
  else
   VAR_28 = VAR_13;
 else if (VAR_21 == VAR_9)
  VAR_28 = VAR_12;
 else if (VAR_21 == VAR_6)
  VAR_28 = VAR_18;
 else if (VAR_21 == VAR_10)
  VAR_28 = VAR_15;
 else
  VAR_28 = FUNC_1(VAR_19, VAR_21);

 if (!(VAR_28 & VAR_19->poll_prots)) {
  FUNC_3("the target found does not have the desired protocol\n");
  return -VAR_0;
 }

 if (VAR_22 == VAR_1) {
  VAR_24 = (struct rf_tech_specific_params_nfca_poll *)VAR_23;

  VAR_20->sens_res = VAR_24->sens_res;
  VAR_20->sel_res = VAR_24->sel_res;
  VAR_20->nfcid1_len = VAR_24->nfcid1_len;
  if (VAR_20->nfcid1_len > 0) {
   FUNC_0(VAR_20->nfcid1, VAR_24->nfcid1,
          VAR_20->nfcid1_len);
  }
 } else if (VAR_22 == VAR_2) {
  VAR_25 = (struct rf_tech_specific_params_nfcb_poll *)VAR_23;

  VAR_20->sensb_res_len = VAR_25->sensb_res_len;
  if (VAR_20->sensb_res_len > 0) {
   FUNC_0(VAR_20->sensb_res, VAR_25->sensb_res,
          VAR_20->sensb_res_len);
  }
 } else if (VAR_22 == VAR_3) {
  VAR_26 = (struct rf_tech_specific_params_nfcf_poll *)VAR_23;

  VAR_20->sensf_res_len = VAR_26->sensf_res_len;
  if (VAR_20->sensf_res_len > 0) {
   FUNC_0(VAR_20->sensf_res, VAR_26->sensf_res,
          VAR_20->sensf_res_len);
  }
 } else if (VAR_22 == VAR_4) {
  VAR_27 = (struct rf_tech_specific_params_nfcv_poll *)VAR_23;

  VAR_20->is_iso15693 = 1;
  VAR_20->iso15693_dsfid = VAR_27->dsfid;
  FUNC_0(VAR_20->iso15693_uid, VAR_27->uid, VAR_11);
 } else {
  FUNC_3("unsupported rf_tech_and_mode 0x%x\n", VAR_22);
  return -VAR_0;
 }

 VAR_20->supported_protocols |= VAR_28;

 FUNC_2("protocol 0x%x\n", VAR_28);

 return 0;
}
