
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; } ;
struct hci_dev {int pkt_type; int num_iac; int io_capability; int manufacturer; int cur_adv_instance; int sniff_max_interval; int sniff_min_interval; int le_adv_channel_map; int le_adv_min_interval; int le_adv_max_interval; int le_scan_interval; int le_scan_window; int le_conn_min_interval; int le_conn_max_interval; int le_conn_latency; int le_supv_timeout; int le_def_tx_len; int le_def_tx_time; int le_max_tx_len; int le_max_tx_time; int le_max_rx_len; int le_max_rx_time; int cmd_timer; int req_wait_q; int raw_q; int cmd_q; int rx_q; int power_off; int error_reset; int power_on; int tx_work; int cmd_work; int rx_work; int adv_instances; TYPE_1__ conn_hash; int pend_le_reports; int pend_le_conns; int le_conn_params; int le_resolv_list; int le_white_list; int remote_oob_data; int identity_resolving_keys; int long_term_keys; int link_keys; int uuids; int whitelist; int blacklist; int mgmt_pending; int req_lock; int lock; int min_enc_key_size; int auth_payload_timeout; int conn_info_max_age; int conn_info_min_age; int discov_interleaved_timeout; int rpa_timeout; int le_num_of_adv_sets; void* le_rx_def_phys; void* le_tx_def_phys; int le_min_key_size; int le_max_key_size; scalar_t__ adv_instance_timeout; scalar_t__ adv_instance_cnt; void* adv_tx_power; void* inq_tx_power; int link_mode; int esco_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct hci_dev*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (struct hci_dev*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_5 (struct hci_dev*) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_6 (int *) ;
 struct hci_dev* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

struct hci_dev *FUNC_10(void)
{
 struct hci_dev *VAR_24;

 VAR_24 = FUNC_7(sizeof(*VAR_24), VAR_5);
 if (!VAR_24)
  return ((void*)0);

 VAR_24->pkt_type = (VAR_8 | VAR_7 | VAR_9);
 VAR_24->esco_type = (VAR_4);
 VAR_24->link_mode = (VAR_11);
 VAR_24->num_iac = 0x01;
 VAR_24->io_capability = 0x03;
 VAR_24->manufacturer = 0xffff;
 VAR_24->inq_tx_power = VAR_14;
 VAR_24->adv_tx_power = VAR_14;
 VAR_24->adv_instance_cnt = 0;
 VAR_24->cur_adv_instance = 0x00;
 VAR_24->adv_instance_timeout = 0;

 VAR_24->sniff_max_interval = 800;
 VAR_24->sniff_min_interval = 80;

 VAR_24->le_adv_channel_map = 0x07;
 VAR_24->le_adv_min_interval = 0x0800;
 VAR_24->le_adv_max_interval = 0x0800;
 VAR_24->le_scan_interval = 0x0060;
 VAR_24->le_scan_window = 0x0030;
 VAR_24->le_conn_min_interval = 0x0018;
 VAR_24->le_conn_max_interval = 0x0028;
 VAR_24->le_conn_latency = 0x0000;
 VAR_24->le_supv_timeout = 0x002a;
 VAR_24->le_def_tx_len = 0x001b;
 VAR_24->le_def_tx_time = 0x0148;
 VAR_24->le_max_tx_len = 0x001b;
 VAR_24->le_max_tx_time = 0x0148;
 VAR_24->le_max_rx_len = 0x001b;
 VAR_24->le_max_rx_time = 0x0148;
 VAR_24->le_max_key_size = VAR_15;
 VAR_24->le_min_key_size = VAR_16;
 VAR_24->le_tx_def_phys = VAR_10;
 VAR_24->le_rx_def_phys = VAR_10;
 VAR_24->le_num_of_adv_sets = VAR_12;

 VAR_24->rpa_timeout = VAR_6;
 VAR_24->discov_interleaved_timeout = VAR_3;
 VAR_24->conn_info_min_age = VAR_2;
 VAR_24->conn_info_max_age = VAR_1;
 VAR_24->auth_payload_timeout = VAR_0;
 VAR_24->min_enc_key_size = VAR_13;

 FUNC_8(&VAR_24->lock);
 FUNC_8(&VAR_24->req_lock);

 FUNC_1(&VAR_24->mgmt_pending);
 FUNC_1(&VAR_24->blacklist);
 FUNC_1(&VAR_24->whitelist);
 FUNC_1(&VAR_24->uuids);
 FUNC_1(&VAR_24->link_keys);
 FUNC_1(&VAR_24->long_term_keys);
 FUNC_1(&VAR_24->identity_resolving_keys);
 FUNC_1(&VAR_24->remote_oob_data);
 FUNC_1(&VAR_24->le_white_list);
 FUNC_1(&VAR_24->le_resolv_list);
 FUNC_1(&VAR_24->le_conn_params);
 FUNC_1(&VAR_24->pend_le_conns);
 FUNC_1(&VAR_24->pend_le_reports);
 FUNC_1(&VAR_24->conn_hash.list);
 FUNC_1(&VAR_24->adv_instances);

 FUNC_2(&VAR_24->rx_work, VAR_22);
 FUNC_2(&VAR_24->cmd_work, VAR_18);
 FUNC_2(&VAR_24->tx_work, VAR_23);
 FUNC_2(&VAR_24->power_on, VAR_21);
 FUNC_2(&VAR_24->error_reset, VAR_19);

 FUNC_0(&VAR_24->power_off, VAR_20);

 FUNC_9(&VAR_24->rx_q);
 FUNC_9(&VAR_24->cmd_q);
 FUNC_9(&VAR_24->raw_q);

 FUNC_6(&VAR_24->req_wait_q);

 FUNC_0(&VAR_24->cmd_timer, VAR_17);

 FUNC_5(VAR_24);

 FUNC_4(VAR_24);
 FUNC_3(VAR_24);

 return VAR_24;
}
