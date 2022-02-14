
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef void* u16 ;
struct smp_irk {scalar_t__ addr_type; int bdaddr; } ;
struct hci_dev {scalar_t__ adv_addr_type; int* le_features; int pend_le_conns; int blacklist; int le_conn_max_interval; int le_conn_min_interval; int bdaddr; int random_addr; int rpa; } ;
struct hci_cp_le_read_remote_features {int handle; } ;
struct hci_conn_params {struct hci_conn* conn; int action; } ;
struct hci_conn {scalar_t__ dst_type; scalar_t__ resp_addr_type; int dst; int state; void* handle; scalar_t__ out; void* le_supv_timeout; void* le_conn_latency; void* le_conn_interval; int sec_level; int flags; int le_conn_max_interval; int le_conn_min_interval; int init_addr; void* init_addr_type; int resp_addr; int le_conn_timeout; } ;
typedef int cp ;
typedef int bdaddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct hci_dev*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hci_dev*) ;
 scalar_t__ FUNC_5 (int *,int *,void*) ;
 struct hci_conn* FUNC_6 (struct hci_dev*,int ,int *,void*) ;
 int FUNC_7 (struct hci_conn*) ;
 int FUNC_8 (struct hci_conn*) ;
 int FUNC_9 (struct hci_conn*) ;
 int FUNC_10 (struct hci_conn*) ;
 int FUNC_11 (struct hci_conn*,void*) ;
 int FUNC_12 (struct hci_dev*,int *,void**) ;
 int FUNC_13 (struct hci_conn*) ;
 int FUNC_14 (struct hci_dev*,int ) ;
 int FUNC_15 (struct hci_dev*) ;
 scalar_t__ FUNC_16 (struct hci_dev*,int ) ;
 int FUNC_17 (struct hci_dev*) ;
 struct smp_irk* FUNC_18 (struct hci_dev*,int *,scalar_t__) ;
 int FUNC_19 (struct hci_conn*,void*) ;
 struct hci_conn* FUNC_20 (struct hci_dev*) ;
 struct hci_conn_params* FUNC_21 (int *,int *,scalar_t__) ;
 int FUNC_22 (struct hci_dev*,int ,int,struct hci_cp_le_read_remote_features*) ;
 int FUNC_23 (struct hci_dev*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (struct hci_dev*,struct hci_conn*,int ,int *,int ) ;
 int FUNC_26 (int ,int *) ;

__attribute__((used)) static void FUNC_27(struct hci_dev *VAR_13, u8 VAR_14,
   bdaddr_t *VAR_15, u8 VAR_16, u8 VAR_17, u16 VAR_18,
   u16 VAR_19, u16 VAR_20, u16 VAR_21)
{
 struct hci_conn_params *VAR_22;
 struct hci_conn *VAR_23;
 struct smp_irk *VAR_24;
 u8 VAR_25;

 FUNC_15(VAR_13);




 FUNC_14(VAR_13, VAR_8);

 VAR_23 = FUNC_20(VAR_13);
 if (!VAR_23) {
  VAR_23 = FUNC_6(VAR_13, VAR_12, VAR_15, VAR_17);
  if (!VAR_23) {
   FUNC_2(VAR_13, "no memory for new connection");
   goto unlock;
  }

  VAR_23->dst_type = VAR_16;
  if (VAR_23->out) {
   VAR_23->resp_addr_type = VAR_16;
   FUNC_1(&VAR_23->resp_addr, VAR_15);
   if (FUNC_16(VAR_13, VAR_11)) {
    VAR_23->init_addr_type = VAR_1;
    FUNC_1(&VAR_23->init_addr, &VAR_13->rpa);
   } else {
    FUNC_12(VAR_13,
         &VAR_23->init_addr,
         &VAR_23->init_addr_type);
   }
  }
 } else {
  FUNC_3(&VAR_23->le_conn_timeout);
 }

 if (!VAR_23->out) {



  VAR_23->resp_addr_type = VAR_13->adv_addr_type;
  if (VAR_13->adv_addr_type == VAR_1) {



   if (!FUNC_4(VAR_13))
    FUNC_1(&VAR_23->resp_addr, &VAR_13->random_addr);
  } else {
   FUNC_1(&VAR_23->resp_addr, &VAR_13->bdaddr);
  }

  VAR_23->init_addr_type = VAR_16;
  FUNC_1(&VAR_23->init_addr, VAR_15);






  VAR_23->le_conn_min_interval = VAR_13->le_conn_min_interval;
  VAR_23->le_conn_max_interval = VAR_13->le_conn_max_interval;
 }
 VAR_24 = FUNC_18(VAR_13, &VAR_23->dst, VAR_23->dst_type);
 if (VAR_24) {
  FUNC_1(&VAR_23->dst, &VAR_24->bdaddr);
  VAR_23->dst_type = VAR_24->addr_type;
 }

 if (VAR_14) {
  FUNC_19(VAR_23, VAR_14);
  goto unlock;
 }

 if (VAR_23->dst_type == VAR_0)
  VAR_25 = VAR_2;
 else
  VAR_25 = VAR_3;


 if (FUNC_5(&VAR_13->blacklist, &VAR_23->dst, VAR_25)) {
  FUNC_8(VAR_23);
  goto unlock;
 }

 if (!FUNC_26(VAR_7, &VAR_23->flags))
  FUNC_25(VAR_13, VAR_23, 0, ((void*)0), 0);

 VAR_23->sec_level = VAR_6;
 VAR_23->handle = VAR_18;
 VAR_23->state = VAR_4;

 VAR_23->le_conn_interval = VAR_19;
 VAR_23->le_conn_latency = VAR_20;
 VAR_23->le_supv_timeout = VAR_21;

 FUNC_13(VAR_23);
 FUNC_7(VAR_23);
 if (VAR_23->out ||
     (VAR_13->le_features[0] & VAR_9)) {
  struct hci_cp_le_read_remote_features VAR_26;

  VAR_26.handle = FUNC_0(VAR_23->handle);

  FUNC_22(VAR_13, VAR_10,
        sizeof(VAR_26), &VAR_26);

  FUNC_9(VAR_23);
 } else {
  VAR_23->state = VAR_5;
  FUNC_11(VAR_23, VAR_14);
 }

 VAR_22 = FUNC_21(&VAR_13->pend_le_conns, &VAR_23->dst,
        VAR_23->dst_type);
 if (VAR_22) {
  FUNC_24(&VAR_22->action);
  if (VAR_22->conn) {
   FUNC_8(VAR_22->conn);
   FUNC_10(VAR_22->conn);
   VAR_22->conn = ((void*)0);
  }
 }

unlock:
 FUNC_23(VAR_13);
 FUNC_17(VAR_13);
}
