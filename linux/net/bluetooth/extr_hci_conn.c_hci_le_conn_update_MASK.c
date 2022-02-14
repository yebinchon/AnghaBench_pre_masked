
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hci_dev {int dummy; } ;
struct hci_cp_le_conn_update {void* max_ce_len; void* min_ce_len; void* supervision_timeout; void* conn_latency; void* conn_interval_max; void* conn_interval_min; void* handle; } ;
struct hci_conn_params {int conn_min_interval; int conn_max_interval; int conn_latency; int supervision_timeout; } ;
struct hci_conn {int handle; int dst_type; int dst; struct hci_dev* hdev; } ;
typedef int cp ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 struct hci_conn_params* FUNC_1 (struct hci_dev*,int *,int ) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*,int ,int,struct hci_cp_le_conn_update*) ;
 int FUNC_5 (struct hci_cp_le_conn_update*,int ,int) ;

u8 FUNC_6(struct hci_conn *VAR_1, u16 VAR_2, u16 VAR_3, u16 VAR_4,
        u16 VAR_5)
{
 struct hci_dev *VAR_6 = VAR_1->hdev;
 struct hci_conn_params *VAR_7;
 struct hci_cp_le_conn_update VAR_8;

 FUNC_2(VAR_6);

 VAR_7 = FUNC_1(VAR_6, &VAR_1->dst, VAR_1->dst_type);
 if (VAR_7) {
  VAR_7->conn_min_interval = VAR_2;
  VAR_7->conn_max_interval = VAR_3;
  VAR_7->conn_latency = VAR_4;
  VAR_7->supervision_timeout = VAR_5;
 }

 FUNC_3(VAR_6);

 FUNC_5(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.handle = FUNC_0(VAR_1->handle);
 VAR_8.conn_interval_min = FUNC_0(VAR_2);
 VAR_8.conn_interval_max = FUNC_0(VAR_3);
 VAR_8.conn_latency = FUNC_0(VAR_4);
 VAR_8.supervision_timeout = FUNC_0(VAR_5);
 VAR_8.min_ce_len = FUNC_0(0x0000);
 VAR_8.max_ce_len = FUNC_0(0x0000);

 FUNC_4(VAR_6, VAR_0, sizeof(VAR_8), &VAR_8);

 if (VAR_7)
  return 0x01;

 return 0x00;
}
