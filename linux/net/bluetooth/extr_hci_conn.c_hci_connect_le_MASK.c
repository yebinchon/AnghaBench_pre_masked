
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct smp_irk {int rpa; } ;
struct hci_request {int dummy; } ;
struct hci_dev {scalar_t__ le_scan_type; int le_supv_timeout; int le_conn_latency; int le_conn_max_interval; int le_conn_min_interval; } ;
struct hci_conn_params {int supervision_timeout; int conn_latency; int conn_max_interval; int conn_min_interval; } ;
struct hci_conn {scalar_t__ role; int le_supv_timeout; int le_conn_latency; int le_conn_max_interval; int le_conn_min_interval; void* dst_type; int dst; int conn_timeout; int sec_level; void* pending_sec_level; int flags; } ;
typedef int enable ;
typedef int bdaddr_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct hci_conn* FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_16 ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ,int *,void*) ;
 int FUNC_4 (struct hci_conn*) ;
 struct hci_conn* FUNC_5 (struct hci_dev*,int *,void*) ;
 int FUNC_6 (struct hci_conn*) ;
 struct hci_conn_params* FUNC_7 (struct hci_dev*,int *,void*) ;
 int FUNC_8 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_9 (struct hci_dev*,int ) ;
 struct smp_irk* FUNC_10 (struct hci_dev*,int *,void*) ;
 scalar_t__ FUNC_11 (struct hci_dev*) ;
 int FUNC_12 (struct hci_request*,int ,int,void**) ;
 int FUNC_13 (struct hci_request*,struct hci_conn*,int *) ;
 int FUNC_14 (struct hci_request*) ;
 int FUNC_15 (struct hci_request*,struct hci_conn*) ;
 int FUNC_16 (struct hci_request*,struct hci_dev*) ;
 int FUNC_17 (struct hci_request*) ;
 int FUNC_18 (struct hci_request*,int ) ;
 scalar_t__ FUNC_19 (struct hci_dev*) ;
 int FUNC_20 (int ,int *) ;

struct hci_conn *FUNC_21(struct hci_dev *VAR_17, bdaddr_t *VAR_18,
    u8 VAR_19, u8 VAR_20, u16 VAR_21,
    u8 VAR_22, bdaddr_t *VAR_23)
{
 struct hci_conn_params *VAR_24;
 struct hci_conn *VAR_25;
 struct smp_irk *VAR_26;
 struct hci_request VAR_27;
 int VAR_28;


 if (!FUNC_9(VAR_17, VAR_9)) {
  if (FUNC_19(VAR_17))
   return FUNC_0(-VAR_4);

  return FUNC_0(-VAR_6);
 }




 if (FUNC_11(VAR_17))
  return FUNC_0(-VAR_3);






 VAR_25 = FUNC_5(VAR_17, VAR_18, VAR_19);
 if (VAR_25 && !FUNC_20(VAR_7, &VAR_25->flags)) {
  return FUNC_0(-VAR_3);
 }
 VAR_26 = FUNC_10(VAR_17, VAR_18, VAR_19);
 if (VAR_26 && FUNC_1(&VAR_26->rpa, VAR_1)) {
  VAR_18 = &VAR_26->rpa;
  VAR_19 = VAR_0;
 }

 if (VAR_25) {
  FUNC_2(&VAR_25->dst, VAR_18);
 } else {
  VAR_25 = FUNC_3(VAR_17, VAR_14, VAR_18, VAR_22);
  if (!VAR_25)
   return FUNC_0(-VAR_5);
  FUNC_6(VAR_25);
  VAR_25->pending_sec_level = VAR_20;
 }

 VAR_25->dst_type = VAR_19;
 VAR_25->sec_level = VAR_2;
 VAR_25->conn_timeout = VAR_21;

 FUNC_16(&VAR_27, VAR_17);







 if (FUNC_9(VAR_17, VAR_8)) {
  u8 VAR_29 = 0x00;
  FUNC_12(&VAR_27, VAR_12, sizeof(VAR_29),
       &VAR_29);
 }


 if (VAR_25->role == VAR_13) {



  if (FUNC_9(VAR_17, VAR_10) &&
      VAR_17->le_scan_type == VAR_15) {
   FUNC_17(&VAR_27);
   FUNC_4(VAR_25);
   return FUNC_0(-VAR_3);
  }

  FUNC_15(&VAR_27, VAR_25);
  goto create_conn;
 }

 VAR_24 = FUNC_7(VAR_17, &VAR_25->dst, VAR_25->dst_type);
 if (VAR_24) {
  VAR_25->le_conn_min_interval = VAR_24->conn_min_interval;
  VAR_25->le_conn_max_interval = VAR_24->conn_max_interval;
  VAR_25->le_conn_latency = VAR_24->conn_latency;
  VAR_25->le_supv_timeout = VAR_24->supervision_timeout;
 } else {
  VAR_25->le_conn_min_interval = VAR_17->le_conn_min_interval;
  VAR_25->le_conn_max_interval = VAR_17->le_conn_max_interval;
  VAR_25->le_conn_latency = VAR_17->le_conn_latency;
  VAR_25->le_supv_timeout = VAR_17->le_supv_timeout;
 }







 if (FUNC_9(VAR_17, VAR_10)) {
  FUNC_14(&VAR_27);
  FUNC_8(VAR_17, VAR_11);
 }

 FUNC_13(&VAR_27, VAR_25, VAR_23);

create_conn:
 VAR_28 = FUNC_18(&VAR_27, VAR_16);
 if (VAR_28) {
  FUNC_4(VAR_25);
  return FUNC_0(VAR_28);
 }

 return VAR_25;
}
