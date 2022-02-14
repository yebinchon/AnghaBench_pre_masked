
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct hci_dev {scalar_t__ amp_type; } ;
struct hci_conn {int dummy; } ;
struct amp_mgr {int ident; int state; } ;
struct amp_ctrl {size_t assoc_len; size_t assoc_rem_len; scalar_t__ assoc_len_so_far; int * assoc; } ;
struct a2mp_physlink_rsp {scalar_t__ status; int remote_id; int local_id; } ;
struct a2mp_physlink_req {int local_id; int amp_assoc; int remote_id; } ;
struct a2mp_cmd {int len; int ident; } ;
typedef int rsp ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct amp_mgr*,int ,int ,int,struct a2mp_physlink_rsp*) ;
 int FUNC_2 (struct hci_dev*,struct amp_mgr*,struct hci_conn*) ;
 struct amp_ctrl* FUNC_3 (struct amp_mgr*,int ) ;
 int FUNC_4 (struct amp_ctrl*) ;
 struct amp_ctrl* FUNC_5 (struct amp_mgr*,int ) ;
 int FUNC_6 (struct amp_ctrl*) ;
 struct hci_dev* FUNC_7 (int ) ;
 int FUNC_8 (struct hci_dev*) ;
 int * FUNC_9 (int ,size_t,int ) ;
 int FUNC_10 (int ) ;
 struct hci_conn* FUNC_11 (struct hci_dev*,struct amp_mgr*,int ,int) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_14(struct amp_mgr *VAR_9, struct sk_buff *VAR_10,
       struct a2mp_cmd *VAR_11)
{
 struct a2mp_physlink_req *VAR_12 = (void *) VAR_10->data;

 struct a2mp_physlink_rsp VAR_13;
 struct hci_dev *VAR_14;
 struct hci_conn *VAR_15;
 struct amp_ctrl *VAR_16;

 if (FUNC_10(VAR_11->len) < sizeof(*VAR_12))
  return -VAR_5;

 FUNC_0("local_id %d, remote_id %d", VAR_12->local_id, VAR_12->remote_id);

 VAR_13.local_id = VAR_12->remote_id;
 VAR_13.remote_id = VAR_12->local_id;

 VAR_14 = FUNC_7(VAR_12->remote_id);
 if (!VAR_14 || VAR_14->amp_type == VAR_4) {
  VAR_13.status = VAR_1;
  goto send_rsp;
 }

 VAR_16 = FUNC_5(VAR_9, VAR_13.remote_id);
 if (!VAR_16) {
  VAR_16 = FUNC_3(VAR_9, VAR_13.remote_id);
  if (VAR_16) {
   FUNC_4(VAR_16);
  } else {
   VAR_13.status = VAR_3;
   goto send_rsp;
  }
 }

 if (VAR_16) {
  size_t VAR_17 = FUNC_10(VAR_11->len) - sizeof(*VAR_12);
  u8 *VAR_18;

  VAR_18 = FUNC_9(VAR_12->amp_assoc, VAR_17, VAR_7);
  if (!VAR_18) {
   FUNC_6(VAR_16);
   return -VAR_6;
  }

  VAR_16->assoc = VAR_18;
  VAR_16->assoc_len = VAR_17;
  VAR_16->assoc_rem_len = VAR_17;
  VAR_16->assoc_len_so_far = 0;

  FUNC_6(VAR_16);
 }

 VAR_15 = FUNC_11(VAR_14, VAR_9, VAR_12->local_id, 0);
 if (VAR_15) {
  FUNC_2(VAR_14, VAR_9, VAR_15);
  VAR_13.status = VAR_2;
 } else {
  VAR_13.status = VAR_3;
 }

send_rsp:
 if (VAR_14)
  FUNC_8(VAR_14);




 if (VAR_13.status != VAR_2) {
  FUNC_1(VAR_9, VAR_0, VAR_11->ident,
     sizeof(VAR_13), &VAR_13);
 } else {
  FUNC_12(VAR_8, &VAR_9->state);
  VAR_9->ident = VAR_11->ident;
 }

 FUNC_13(VAR_10, FUNC_10(VAR_11->len));
 return 0;
}
