
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hci_dev {int dummy; } ;
struct hci_cp_accept_sync_conn_req {int role; int retrans_effort; void* max_latency; void* content_format; void* rx_bandwidth; void* tx_bandwidth; void* pkt_type; int bdaddr; } ;
struct hci_cp_accept_conn_req {int role; int retrans_effort; void* max_latency; void* content_format; void* rx_bandwidth; void* tx_bandwidth; void* pkt_type; int bdaddr; } ;
struct hci_conn {int pkt_type; int dst; int state; struct hci_dev* hdev; } ;
typedef int cp ;


 int VAR_0 ;
 int FUNC_0 (char*,struct hci_conn*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int FUNC_1 (int *,int *) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct hci_dev*,int ,int,struct hci_cp_accept_sync_conn_req*) ;
 int FUNC_5 (struct hci_dev*) ;

__attribute__((used)) static void FUNC_6(struct hci_conn *VAR_5, u16 VAR_6)
{
 struct hci_dev *VAR_7 = VAR_5->hdev;

 FUNC_0("conn %p", VAR_5);

 VAR_5->state = VAR_0;

 if (!FUNC_5(VAR_7)) {
  struct hci_cp_accept_conn_req VAR_8;

  FUNC_1(&VAR_8.bdaddr, &VAR_5->dst);
  VAR_8.role = 0x00;

  FUNC_4(VAR_7, VAR_2, sizeof(VAR_8), &VAR_8);
 } else {
  struct hci_cp_accept_sync_conn_req VAR_9;

  FUNC_1(&VAR_9.bdaddr, &VAR_5->dst);
  VAR_9.pkt_type = FUNC_2(VAR_5->pkt_type);

  VAR_9.tx_bandwidth = FUNC_3(0x00001f40);
  VAR_9.rx_bandwidth = FUNC_3(0x00001f40);
  VAR_9.content_format = FUNC_2(VAR_6);

  switch (VAR_6 & VAR_4) {
  case 128:
   if (VAR_5->pkt_type & VAR_1)
    VAR_9.max_latency = FUNC_2(0x0008);
   else
    VAR_9.max_latency = FUNC_2(0x000D);
   VAR_9.retrans_effort = 0x02;
   break;
  case 129:
   VAR_9.max_latency = FUNC_2(0xffff);
   VAR_9.retrans_effort = 0xff;
   break;
  }

  FUNC_4(VAR_7, VAR_3,
        sizeof(VAR_9), &VAR_9);
 }
}
