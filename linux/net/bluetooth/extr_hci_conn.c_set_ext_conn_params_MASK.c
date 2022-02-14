
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int le_scan_interval; } ;
struct hci_cp_le_ext_conn_param {void* max_ce_len; void* min_ce_len; void* supervision_timeout; void* conn_latency; void* conn_interval_max; void* conn_interval_min; void* scan_interval; void* scan_window; } ;
struct hci_conn {int le_conn_min_interval; int le_conn_max_interval; int le_conn_latency; int le_supv_timeout; struct hci_dev* hdev; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (struct hci_cp_le_ext_conn_param*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hci_conn *VAR_0,
    struct hci_cp_le_ext_conn_param *VAR_1)
{
 struct hci_dev *VAR_2 = VAR_0->hdev;

 FUNC_1(VAR_1, 0, sizeof(*VAR_1));




 VAR_1->scan_interval = FUNC_0(VAR_2->le_scan_interval);
 VAR_1->scan_window = VAR_1->scan_interval;
 VAR_1->conn_interval_min = FUNC_0(VAR_0->le_conn_min_interval);
 VAR_1->conn_interval_max = FUNC_0(VAR_0->le_conn_max_interval);
 VAR_1->conn_latency = FUNC_0(VAR_0->le_conn_latency);
 VAR_1->supervision_timeout = FUNC_0(VAR_0->le_supv_timeout);
 VAR_1->min_ce_len = FUNC_0(0x0000);
 VAR_1->max_ce_len = FUNC_0(0x0000);
}
