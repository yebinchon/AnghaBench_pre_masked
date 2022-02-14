
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mgmt_rp_get_conn_info {void* max_tx_power; void* tx_power; int rssi; int addr; } ;
struct mgmt_pending_cmd {int index; int sk; int param; struct hci_conn* user_data; } ;
struct hci_conn {void* max_tx_power; void* tx_power; int rssi; } ;
typedef int rp ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct hci_conn*) ;
 int FUNC_1 (struct hci_conn*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,int ,int ,scalar_t__,struct mgmt_rp_get_conn_info*,int) ;

__attribute__((used)) static int FUNC_4(struct mgmt_pending_cmd *VAR_4, u8 VAR_5)
{
 struct hci_conn *VAR_6 = VAR_4->user_data;
 struct mgmt_rp_get_conn_info VAR_7;
 int VAR_8;

 FUNC_2(&VAR_7.addr, VAR_4->param, sizeof(VAR_7.addr));

 if (VAR_5 == VAR_3) {
  VAR_7.rssi = VAR_6->rssi;
  VAR_7.tx_power = VAR_6->tx_power;
  VAR_7.max_tx_power = VAR_6->max_tx_power;
 } else {
  VAR_7.rssi = VAR_0;
  VAR_7.tx_power = VAR_1;
  VAR_7.max_tx_power = VAR_1;
 }

 VAR_8 = FUNC_3(VAR_4->sk, VAR_4->index, VAR_2,
    VAR_5, &VAR_7, sizeof(VAR_7));

 FUNC_0(VAR_6);
 FUNC_1(VAR_6);

 return VAR_8;
}
