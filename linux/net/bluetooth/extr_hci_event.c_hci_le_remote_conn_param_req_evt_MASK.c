
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u16 ;
struct sk_buff {scalar_t__ data; } ;
struct hci_ev_le_remote_conn_param_req {int timeout; int latency; int interval_max; int interval_min; int handle; } ;
struct hci_dev {int dummy; } ;
struct hci_cp_le_conn_param_req_reply {scalar_t__ max_ce_len; scalar_t__ min_ce_len; int timeout; int latency; int interval_max; int interval_min; int handle; } ;
struct hci_conn_params {void* supervision_timeout; void* conn_latency; void* conn_max_interval; void* conn_min_interval; } ;
struct hci_conn {scalar_t__ state; scalar_t__ role; int dst_type; int dst; } ;
typedef int cp ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (void*,void*,void*,void*) ;
 struct hci_conn* FUNC_1 (struct hci_dev*,void*) ;
 struct hci_conn_params* FUNC_2 (struct hci_dev*,int *,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*,int ,int,struct hci_cp_le_conn_param_req_reply*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct hci_dev*,int *,int ,int,void*,void*,void*,void*) ;
 void FUNC_8 (struct hci_dev*,void*,int ) ;

__attribute__((used)) static void FUNC_9(struct hci_dev *VAR_5,
          struct sk_buff *VAR_6)
{
 struct hci_ev_le_remote_conn_param_req *VAR_7 = (void *) VAR_6->data;
 struct hci_cp_le_conn_param_req_reply VAR_8;
 struct hci_conn *VAR_9;
 u16 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_10 = FUNC_6(VAR_7->handle);
 VAR_11 = FUNC_6(VAR_7->interval_min);
 VAR_12 = FUNC_6(VAR_7->interval_max);
 VAR_13 = FUNC_6(VAR_7->latency);
 VAR_14 = FUNC_6(VAR_7->timeout);

 VAR_9 = FUNC_1(VAR_5, VAR_10);
 if (!VAR_9 || VAR_9->state != VAR_0)
  return FUNC_8(VAR_5, VAR_10,
       VAR_2);

 if (FUNC_0(VAR_11, VAR_12, VAR_13, VAR_14))
  return FUNC_8(VAR_5, VAR_10,
       VAR_1);

 if (VAR_9->role == VAR_4) {
  struct hci_conn_params *VAR_15;
  u8 VAR_16;

  FUNC_3(VAR_5);

  VAR_15 = FUNC_2(VAR_5, &VAR_9->dst,
      VAR_9->dst_type);
  if (VAR_15) {
   VAR_15->conn_min_interval = VAR_11;
   VAR_15->conn_max_interval = VAR_12;
   VAR_15->conn_latency = VAR_13;
   VAR_15->supervision_timeout = VAR_14;
   VAR_16 = 0x01;
  } else{
   VAR_16 = 0x00;
  }

  FUNC_4(VAR_5);

  FUNC_7(VAR_5, &VAR_9->dst, VAR_9->dst_type,
        VAR_16, VAR_11, VAR_12, VAR_13, VAR_14);
 }

 VAR_8.handle = VAR_7->handle;
 VAR_8.interval_min = VAR_7->interval_min;
 VAR_8.interval_max = VAR_7->interval_max;
 VAR_8.latency = VAR_7->latency;
 VAR_8.timeout = VAR_7->timeout;
 VAR_8.min_ce_len = 0;
 VAR_8.max_ce_len = 0;

 FUNC_5(VAR_5, VAR_3, sizeof(VAR_8), &VAR_8);
}
