
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int dev_class; } ;
struct inquiry_entry {TYPE_1__ data; } ;
struct hci_ev_conn_request {scalar_t__ link_type; int bdaddr; int dev_class; } ;
struct hci_dev {int link_mode; int voice_setting; int whitelist; int blacklist; int name; } ;
struct hci_cp_accept_sync_conn_req {int role; int retrans_effort; void* content_format; void* max_latency; void* rx_bandwidth; void* tx_bandwidth; void* pkt_type; int bdaddr; } ;
struct hci_cp_accept_conn_req {int role; int retrans_effort; void* content_format; void* max_latency; void* rx_bandwidth; void* tx_bandwidth; void* pkt_type; int bdaddr; } ;
struct hci_conn {int pkt_type; void* state; int dev_class; } ;
typedef int cp ;
typedef int __u8 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (char*,int ,int *,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct hci_dev*,char*) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *,int *,int ) ;
 struct hci_conn* FUNC_6 (struct hci_dev*,scalar_t__,int *,int ) ;
 struct hci_conn* FUNC_7 (struct hci_dev*,scalar_t__,int *) ;
 int FUNC_8 (struct hci_conn*,int ) ;
 int FUNC_9 (struct hci_dev*) ;
 scalar_t__ FUNC_10 (struct hci_dev*,int ) ;
 int FUNC_11 (struct hci_dev*) ;
 struct inquiry_entry* FUNC_12 (struct hci_dev*,int *) ;
 int FUNC_13 (struct hci_dev*,int *,scalar_t__,int*) ;
 int FUNC_14 (struct hci_dev*,int *) ;
 int FUNC_15 (struct hci_dev*,int ,int,struct hci_cp_accept_sync_conn_req*) ;
 int FUNC_16 (struct hci_dev*) ;
 scalar_t__ FUNC_17 (struct hci_dev*) ;
 int FUNC_18 (int ,int ,int) ;

__attribute__((used)) static void FUNC_19(struct hci_dev *VAR_12, struct sk_buff *VAR_13)
{
 struct hci_ev_conn_request *VAR_14 = (void *) VAR_13->data;
 int VAR_15 = VAR_12->link_mode;
 struct inquiry_entry *VAR_16;
 struct hci_conn *VAR_17;
 __u8 VAR_18 = 0;

 FUNC_0("%s bdaddr %pMR type 0x%x", VAR_12->name, &VAR_14->bdaddr,
        VAR_14->link_type);

 VAR_15 |= FUNC_13(VAR_12, &VAR_14->bdaddr, VAR_14->link_type,
          &VAR_18);

 if (!(VAR_15 & VAR_5)) {
  FUNC_14(VAR_12, &VAR_14->bdaddr);
  return;
 }

 if (FUNC_5(&VAR_12->blacklist, &VAR_14->bdaddr,
       VAR_1)) {
  FUNC_14(VAR_12, &VAR_14->bdaddr);
  return;
 }





 if (FUNC_10(VAR_12, VAR_7) &&
     !FUNC_10(VAR_12, VAR_4) &&
     !FUNC_5(&VAR_12->whitelist, &VAR_14->bdaddr,
        VAR_1)) {
      FUNC_14(VAR_12, &VAR_14->bdaddr);
      return;
 }



 FUNC_9(VAR_12);

 VAR_16 = FUNC_12(VAR_12, &VAR_14->bdaddr);
 if (VAR_16)
  FUNC_18(VAR_16->data.dev_class, VAR_14->dev_class, 3);

 VAR_17 = FUNC_7(VAR_12, VAR_14->link_type,
   &VAR_14->bdaddr);
 if (!VAR_17) {
  VAR_17 = FUNC_6(VAR_12, VAR_14->link_type, &VAR_14->bdaddr,
        VAR_11);
  if (!VAR_17) {
   FUNC_2(VAR_12, "no memory for new connection");
   FUNC_11(VAR_12);
   return;
  }
 }

 FUNC_18(VAR_17->dev_class, VAR_14->dev_class, 3);

 FUNC_11(VAR_12);

 if (VAR_14->link_type == VAR_0 ||
     (!(VAR_18 & VAR_10) && !FUNC_16(VAR_12))) {
  struct hci_cp_accept_conn_req VAR_19;
  VAR_17->state = VAR_2;

  FUNC_1(&VAR_19.bdaddr, &VAR_14->bdaddr);

  if (FUNC_17(VAR_12) && (VAR_15 & VAR_6))
   VAR_19.role = 0x00;
  else
   VAR_19.role = 0x01;

  FUNC_15(VAR_12, VAR_8, sizeof(VAR_19), &VAR_19);
 } else if (!(VAR_18 & VAR_10)) {
  struct hci_cp_accept_sync_conn_req VAR_20;
  VAR_17->state = VAR_2;

  FUNC_1(&VAR_20.bdaddr, &VAR_14->bdaddr);
  VAR_20.pkt_type = FUNC_3(VAR_17->pkt_type);

  VAR_20.tx_bandwidth = FUNC_4(0x00001f40);
  VAR_20.rx_bandwidth = FUNC_4(0x00001f40);
  VAR_20.max_latency = FUNC_3(0xffff);
  VAR_20.content_format = FUNC_3(VAR_12->voice_setting);
  VAR_20.retrans_effort = 0xff;

  FUNC_15(VAR_12, VAR_9, sizeof(VAR_20),
        &VAR_20);
 } else {
  VAR_17->state = VAR_3;
  FUNC_8(VAR_17, 0);
 }
}
