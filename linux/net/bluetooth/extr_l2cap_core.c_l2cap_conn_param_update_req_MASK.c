
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct l2cap_conn_param_update_rsp {void* result; } ;
struct l2cap_conn_param_update_req {int to_multiplier; int latency; int max; int min; } ;
struct l2cap_conn {struct hci_conn* hcon; } ;
struct l2cap_cmd_hdr {int ident; } ;
struct hci_conn {scalar_t__ role; int dst_type; int dst; int hdev; } ;
typedef int rsp ;


 int FUNC_0 (char*,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int,int,int,int) ;
 int FUNC_4 (struct hci_conn*,int,int,int,int) ;
 int FUNC_5 (struct l2cap_conn*,int ,int ,int,struct l2cap_conn_param_update_rsp*) ;
 int FUNC_6 (struct l2cap_conn_param_update_rsp*,int ,int) ;
 int FUNC_7 (int ,int *,int ,int ,int,int,int,int) ;

__attribute__((used)) static inline int FUNC_8(struct l2cap_conn *VAR_6,
           struct l2cap_cmd_hdr *VAR_7,
           u16 VAR_8, u8 *VAR_9)
{
 struct hci_conn *VAR_10 = VAR_6->hcon;
 struct l2cap_conn_param_update_req *VAR_11;
 struct l2cap_conn_param_update_rsp VAR_12;
 u16 VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17;

 if (VAR_10->role != VAR_2)
  return -VAR_0;

 if (VAR_8 != sizeof(struct l2cap_conn_param_update_req))
  return -VAR_1;

 VAR_11 = (struct l2cap_conn_param_update_req *) VAR_9;
 VAR_13 = FUNC_1(VAR_11->min);
 VAR_14 = FUNC_1(VAR_11->max);
 VAR_15 = FUNC_1(VAR_11->latency);
 VAR_16 = FUNC_1(VAR_11->to_multiplier);

 FUNC_0("min 0x%4.4x max 0x%4.4x latency: 0x%4.4x Timeout: 0x%4.4x",
        VAR_13, VAR_14, VAR_15, VAR_16);

 FUNC_6(&VAR_12, 0, sizeof(VAR_12));

 VAR_17 = FUNC_3(VAR_13, VAR_14, VAR_15, VAR_16);
 if (VAR_17)
  VAR_12.result = FUNC_2(VAR_4);
 else
  VAR_12.result = FUNC_2(VAR_3);

 FUNC_5(VAR_6, VAR_7->ident, VAR_5,
         sizeof(VAR_12), &VAR_12);

 if (!VAR_17) {
  u8 VAR_18;

  VAR_18 = FUNC_4(VAR_10, VAR_13, VAR_14, VAR_15,
      VAR_16);
  FUNC_7(VAR_10->hdev, &VAR_10->dst, VAR_10->dst_type,
        VAR_18, VAR_13, VAR_14, VAR_15,
        VAR_16);

 }

 return 0;
}
