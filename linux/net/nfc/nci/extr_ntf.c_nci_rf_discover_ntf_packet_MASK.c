
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int * data; } ;
struct TYPE_2__ {int nfcv_poll; int nfcf_poll; int nfcb_poll; int nfca_poll; } ;
struct nci_rf_discover_ntf {scalar_t__ rf_discovery_id; scalar_t__ rf_protocol; scalar_t__ rf_tech_and_mode; scalar_t__ rf_tech_specific_params_len; scalar_t__ ntf_type; TYPE_1__ rf_tech_specific_params; } ;
struct nci_dev {int n_targets; int targets; int nfc_dev; int state; } ;
typedef int __u8 ;


 scalar_t__ VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct nci_dev*,struct nci_rf_discover_ntf*) ;
 int * FUNC_2 (struct nci_dev*,int *,int *) ;
 int * FUNC_3 (struct nci_dev*,int *,int *) ;
 int * FUNC_4 (struct nci_dev*,int *,int *) ;
 int * FUNC_5 (struct nci_dev*,int *,int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (char*,scalar_t__) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static void FUNC_9(struct nci_dev *VAR_3,
           struct sk_buff *VAR_4)
{
 struct nci_rf_discover_ntf VAR_5;
 __u8 *VAR_6 = VAR_4->data;
 bool VAR_7 = 1;

 VAR_5.rf_discovery_id = *VAR_6++;
 VAR_5.rf_protocol = *VAR_6++;
 VAR_5.rf_tech_and_mode = *VAR_6++;
 VAR_5.rf_tech_specific_params_len = *VAR_6++;

 FUNC_7("rf_discovery_id %d\n", VAR_5.rf_discovery_id);
 FUNC_7("rf_protocol 0x%x\n", VAR_5.rf_protocol);
 FUNC_7("rf_tech_and_mode 0x%x\n", VAR_5.rf_tech_and_mode);
 FUNC_7("rf_tech_specific_params_len %d\n",
   VAR_5.rf_tech_specific_params_len);

 if (VAR_5.rf_tech_specific_params_len > 0) {
  switch (VAR_5.rf_tech_and_mode) {
  case 131:
   VAR_6 = FUNC_2(VAR_3,
    &(VAR_5.rf_tech_specific_params.nfca_poll), VAR_6);
   break;

  case 130:
   VAR_6 = FUNC_3(VAR_3,
    &(VAR_5.rf_tech_specific_params.nfcb_poll), VAR_6);
   break;

  case 129:
   VAR_6 = FUNC_4(VAR_3,
    &(VAR_5.rf_tech_specific_params.nfcf_poll), VAR_6);
   break;

  case 128:
   VAR_6 = FUNC_5(VAR_3,
    &(VAR_5.rf_tech_specific_params.nfcv_poll), VAR_6);
   break;

  default:
   FUNC_8("unsupported rf_tech_and_mode 0x%x\n",
          VAR_5.rf_tech_and_mode);
   VAR_6 += VAR_5.rf_tech_specific_params_len;
   VAR_7 = 0;
  }
 }

 VAR_5.ntf_type = *VAR_6++;
 FUNC_7("ntf_type %d\n", VAR_5.ntf_type);

 if (VAR_7 == 1)
  FUNC_1(VAR_3, &VAR_5);

 if (VAR_5.ntf_type == VAR_0) {
  FUNC_0(&VAR_3->state, VAR_1);
 } else {
  FUNC_0(&VAR_3->state, VAR_2);
  FUNC_6(VAR_3->nfc_dev, VAR_3->targets,
      VAR_3->n_targets);
 }
}
