
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct sock {int dummy; } ;
struct mgmt_rp_add_advertising {int instance; } ;
struct mgmt_pending_cmd {int dummy; } ;
struct mgmt_cp_add_advertising {int instance; scalar_t__ adv_data_len; scalar_t__ scan_rsp_len; scalar_t__ data; int duration; int timeout; int flags; } ;
struct hci_request {int dummy; } ;
struct hci_dev {unsigned int adv_instance_cnt; int cur_adv_instance; int id; int adv_instance_timeout; int name; } ;
struct adv_info {int instance; } ;
typedef int rp ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct hci_request*,int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_12 ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*,int,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct hci_dev*) ;
 scalar_t__ FUNC_8 (struct hci_dev*,int ) ;
 int FUNC_9 (struct hci_dev*) ;
 struct adv_info* FUNC_10 (struct hci_dev*,int) ;
 int FUNC_11 (struct hci_request*,struct hci_dev*) ;
 int FUNC_12 (struct hci_request*,int ) ;
 int FUNC_13 (struct hci_dev*) ;
 int FUNC_14 (struct sock*,struct hci_dev*,int) ;
 int FUNC_15 (struct sock*,int ,int ,int ,struct mgmt_rp_add_advertising*,int) ;
 int FUNC_16 (struct sock*,int ,int ,int) ;
 int FUNC_17 (struct hci_dev*) ;
 struct mgmt_pending_cmd* FUNC_18 (struct sock*,int ,struct hci_dev*,void*,scalar_t__) ;
 int FUNC_19 (struct mgmt_pending_cmd*) ;
 scalar_t__ FUNC_20 (int ,struct hci_dev*) ;
 int FUNC_21 (struct hci_dev*,int,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_22(struct sock *VAR_13, struct hci_dev *VAR_14,
      void *VAR_15, u16 VAR_16)
{
 struct mgmt_cp_add_advertising *VAR_17 = VAR_15;
 struct mgmt_rp_add_advertising VAR_18;
 u32 VAR_19;
 u32 VAR_20, VAR_21;
 u8 VAR_22;
 u16 VAR_23, VAR_24;
 unsigned int VAR_25 = VAR_14->adv_instance_cnt;
 u8 VAR_26 = 0;
 struct adv_info *VAR_27;
 int VAR_28;
 struct mgmt_pending_cmd *VAR_29;
 struct hci_request VAR_30;

 FUNC_0("%s", VAR_14->name);

 VAR_22 = FUNC_17(VAR_14);
 if (VAR_22)
  return FUNC_16(VAR_13, VAR_14->id, VAR_4,
           VAR_22);

 if (VAR_17->instance < 1 || VAR_17->instance > VAR_2)
  return FUNC_16(VAR_13, VAR_14->id, VAR_4,
           VAR_9);

 if (VAR_16 != sizeof(*VAR_17) + VAR_17->adv_data_len + VAR_17->scan_rsp_len)
  return FUNC_16(VAR_13, VAR_14->id, VAR_4,
           VAR_9);

 VAR_19 = FUNC_3(VAR_17->flags);
 VAR_23 = FUNC_2(VAR_17->timeout);
 VAR_24 = FUNC_2(VAR_17->duration);




 VAR_20 = FUNC_5(VAR_14);
 VAR_21 = VAR_19 & VAR_3;
 if (VAR_19 & ~VAR_20 ||
     ((VAR_21 && (VAR_21 ^ (VAR_21 & -VAR_21)))))
  return FUNC_16(VAR_13, VAR_14->id, VAR_4,
           VAR_9);

 FUNC_7(VAR_14);

 if (VAR_23 && !FUNC_13(VAR_14)) {
  VAR_28 = FUNC_16(VAR_13, VAR_14->id, VAR_4,
          VAR_10);
  goto unlock;
 }

 if (FUNC_20(VAR_4, VAR_14) ||
     FUNC_20(VAR_5, VAR_14) ||
     FUNC_20(VAR_6, VAR_14)) {
  VAR_28 = FUNC_16(VAR_13, VAR_14->id, VAR_4,
          VAR_7);
  goto unlock;
 }

 if (!FUNC_21(VAR_14, VAR_19, VAR_17->data, VAR_17->adv_data_len, 1) ||
     !FUNC_21(VAR_14, VAR_19, VAR_17->data + VAR_17->adv_data_len,
          VAR_17->scan_rsp_len, 0)) {
  VAR_28 = FUNC_16(VAR_13, VAR_14->id, VAR_4,
          VAR_9);
  goto unlock;
 }

 VAR_28 = FUNC_6(VAR_14, VAR_17->instance, VAR_19,
       VAR_17->adv_data_len, VAR_17->data,
       VAR_17->scan_rsp_len,
       VAR_17->data + VAR_17->adv_data_len,
       VAR_23, VAR_24);
 if (VAR_28 < 0) {
  VAR_28 = FUNC_16(VAR_13, VAR_14->id, VAR_4,
          VAR_8);
  goto unlock;
 }




 if (VAR_14->adv_instance_cnt > VAR_25)
  FUNC_14(VAR_13, VAR_14, VAR_17->instance);

 if (VAR_14->cur_adv_instance == VAR_17->instance) {





  FUNC_4(VAR_14);

  VAR_27 = FUNC_10(VAR_14, VAR_17->instance);
  if (VAR_27)
   VAR_26 = VAR_27->instance;
 } else if (!VAR_14->adv_instance_timeout) {



  VAR_26 = VAR_17->instance;
 }





 if (!FUNC_13(VAR_14) ||
     FUNC_8(VAR_14, VAR_1) ||
     !VAR_26) {
  VAR_18.instance = VAR_17->instance;
  VAR_28 = FUNC_15(VAR_13, VAR_14->id, VAR_4,
     VAR_11, &VAR_18, sizeof(VAR_18));
  goto unlock;
 }




 VAR_29 = FUNC_18(VAR_13, VAR_4, VAR_14, VAR_15,
          VAR_16);
 if (!VAR_29) {
  VAR_28 = -VAR_0;
  goto unlock;
 }

 FUNC_11(&VAR_30, VAR_14);

 VAR_28 = FUNC_1(&VAR_30, VAR_26, 1);

 if (!VAR_28)
  VAR_28 = FUNC_12(&VAR_30, VAR_12);

 if (VAR_28 < 0)
  FUNC_19(VAR_29);

unlock:
 FUNC_9(VAR_14);

 return VAR_28;
}
