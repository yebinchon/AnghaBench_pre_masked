
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int * data; } ;
struct TYPE_2__ {int nfcf_listen; int nfcv_poll; int nfcf_poll; int nfcb_poll; int nfca_poll; } ;
struct nci_rf_intf_activated_ntf {scalar_t__ rf_discovery_id; scalar_t__ rf_interface; scalar_t__ rf_protocol; scalar_t__ activation_rf_tech_and_mode; scalar_t__ max_data_pkt_payload_size; scalar_t__ initial_num_credits; scalar_t__ rf_tech_specific_params_len; scalar_t__ data_exch_rf_tech_and_mode; scalar_t__ data_exch_tx_bit_rate; scalar_t__ data_exch_rx_bit_rate; scalar_t__ activation_params_len; TYPE_1__ rf_tech_specific_params; } ;
struct nci_dev {int remote_gb_len; int remote_gb; int nfc_dev; int state; struct nci_conn_info* rf_conn_info; } ;
struct nci_conn_info {scalar_t__ max_pkt_payload_len; scalar_t__ initial_num_credits; int credits_cnt; } ;
typedef int __u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;






 scalar_t__ VAR_2 ;


 scalar_t__ VAR_3 ;

 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct nci_dev*,struct nci_rf_intf_activated_ntf*,int *) ;
 int FUNC_3 (struct nci_dev*,struct nci_rf_intf_activated_ntf*,int *) ;
 int * FUNC_4 (struct nci_dev*,int *,int *) ;
 int * FUNC_5 (struct nci_dev*,int *,int *) ;
 int * FUNC_6 (struct nci_dev*,int *,int *) ;
 int * FUNC_7 (struct nci_dev*,int *,int *) ;
 int * FUNC_8 (struct nci_dev*,int *,int *) ;
 int FUNC_9 (struct nci_dev*,int) ;
 int FUNC_10 (struct nci_dev*,struct nci_rf_intf_activated_ntf*) ;
 int FUNC_11 (struct nci_dev*,struct nci_rf_intf_activated_ntf*) ;
 int FUNC_12 (int ,int ,int ,int ,int ) ;
 int FUNC_13 (char*,scalar_t__) ;
 int FUNC_14 (char*,...) ;

__attribute__((used)) static void FUNC_15(struct nci_dev *VAR_10,
          struct sk_buff *VAR_11)
{
 struct nci_conn_info *VAR_12;
 struct nci_rf_intf_activated_ntf VAR_13;
 __u8 *VAR_14 = VAR_11->data;
 int VAR_15 = VAR_6;

 VAR_13.rf_discovery_id = *VAR_14++;
 VAR_13.rf_interface = *VAR_14++;
 VAR_13.rf_protocol = *VAR_14++;
 VAR_13.activation_rf_tech_and_mode = *VAR_14++;
 VAR_13.max_data_pkt_payload_size = *VAR_14++;
 VAR_13.initial_num_credits = *VAR_14++;
 VAR_13.rf_tech_specific_params_len = *VAR_14++;

 FUNC_13("rf_discovery_id %d\n", VAR_13.rf_discovery_id);
 FUNC_13("rf_interface 0x%x\n", VAR_13.rf_interface);
 FUNC_13("rf_protocol 0x%x\n", VAR_13.rf_protocol);
 FUNC_13("activation_rf_tech_and_mode 0x%x\n",
   VAR_13.activation_rf_tech_and_mode);
 FUNC_13("max_data_pkt_payload_size 0x%x\n",
   VAR_13.max_data_pkt_payload_size);
 FUNC_13("initial_num_credits 0x%x\n",
   VAR_13.initial_num_credits);
 FUNC_13("rf_tech_specific_params_len %d\n",
   VAR_13.rf_tech_specific_params_len);





 if (VAR_13.rf_interface == VAR_3)
  goto listen;

 if (VAR_13.rf_tech_specific_params_len > 0) {
  switch (VAR_13.activation_rf_tech_and_mode) {
  case 135:
   VAR_14 = FUNC_4(VAR_10,
    &(VAR_13.rf_tech_specific_params.nfca_poll), VAR_14);
   break;

  case 134:
   VAR_14 = FUNC_5(VAR_10,
    &(VAR_13.rf_tech_specific_params.nfcb_poll), VAR_14);
   break;

  case 132:
   VAR_14 = FUNC_7(VAR_10,
    &(VAR_13.rf_tech_specific_params.nfcf_poll), VAR_14);
   break;

  case 131:
   VAR_14 = FUNC_8(VAR_10,
    &(VAR_13.rf_tech_specific_params.nfcv_poll), VAR_14);
   break;

  case 136:

   break;

  case 133:
   VAR_14 = FUNC_6(VAR_10,
    &(VAR_13.rf_tech_specific_params.nfcf_listen),
    VAR_14);
   break;

  default:
   FUNC_14("unsupported activation_rf_tech_and_mode 0x%x\n",
          VAR_13.activation_rf_tech_and_mode);
   VAR_15 = VAR_7;
   goto exit;
  }
 }

 VAR_13.data_exch_rf_tech_and_mode = *VAR_14++;
 VAR_13.data_exch_tx_bit_rate = *VAR_14++;
 VAR_13.data_exch_rx_bit_rate = *VAR_14++;
 VAR_13.activation_params_len = *VAR_14++;

 FUNC_13("data_exch_rf_tech_and_mode 0x%x\n",
   VAR_13.data_exch_rf_tech_and_mode);
 FUNC_13("data_exch_tx_bit_rate 0x%x\n", VAR_13.data_exch_tx_bit_rate);
 FUNC_13("data_exch_rx_bit_rate 0x%x\n", VAR_13.data_exch_rx_bit_rate);
 FUNC_13("activation_params_len %d\n", VAR_13.activation_params_len);

 if (VAR_13.activation_params_len > 0) {
  switch (VAR_13.rf_interface) {
  case 129:
   VAR_15 = FUNC_2(VAR_10,
            &VAR_13, VAR_14);
   break;

  case 128:
   VAR_15 = FUNC_3(VAR_10,
            &VAR_13, VAR_14);
   break;

  case 130:

   break;

  default:
   FUNC_14("unsupported rf_interface 0x%x\n",
          VAR_13.rf_interface);
   VAR_15 = VAR_7;
   break;
  }
 }

exit:
 if (VAR_15 == VAR_6) {
  VAR_12 = VAR_10->rf_conn_info;
  if (!VAR_12)
   return;

  VAR_12->max_pkt_payload_len = VAR_13.max_data_pkt_payload_size;
  VAR_12->initial_num_credits = VAR_13.initial_num_credits;


  FUNC_1(&VAR_12->credits_cnt,
      VAR_12->initial_num_credits);


  if (VAR_13.rf_interface == 128) {
   VAR_15 = FUNC_10(VAR_10, &VAR_13);
   if (VAR_15 != VAR_6)
    FUNC_14("unable to store general bytes\n");
  }
 }

 if (!(VAR_13.activation_rf_tech_and_mode & VAR_5)) {

  if (FUNC_0(&VAR_10->state) == VAR_0) {


   FUNC_1(&VAR_10->state, VAR_2);
   if (VAR_15 == VAR_6)
    FUNC_11(VAR_10, &VAR_13);
  } else {


   FUNC_1(&VAR_10->state, VAR_2);
   FUNC_9(VAR_10, VAR_15);
  }
 } else {
listen:

  FUNC_1(&VAR_10->state, VAR_1);
  if (VAR_15 == VAR_6 &&
      VAR_13.rf_protocol == VAR_4) {
   VAR_15 = FUNC_12(VAR_10->nfc_dev,
            VAR_9,
            VAR_8,
            VAR_10->remote_gb,
            VAR_10->remote_gb_len);
   if (VAR_15 != VAR_6)
    FUNC_14("error when signaling tm activation\n");
  }
 }
}
