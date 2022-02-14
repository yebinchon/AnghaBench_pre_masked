
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ data; } ;
struct hci_ev_disconn_complete {int reason; scalar_t__ status; int handle; } ;
struct hci_dev {int pend_le_conns; int name; } ;
struct hci_conn_params {int auto_connect; int action; } ;
struct hci_conn {scalar_t__ type; int dst_type; int dst; int flags; int state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,scalar_t__) ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_conn*) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ) ;
 struct hci_conn_params* FUNC_4 (struct hci_dev*,int *,int ) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_conn*,int ) ;
 int FUNC_8 (struct hci_dev*,int *) ;
 int FUNC_9 (struct hci_dev*) ;
 int FUNC_10 (struct hci_dev*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct hci_dev*) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct hci_dev*,int *,scalar_t__,int ,scalar_t__,int) ;
 int FUNC_16 (struct hci_dev*,int *,scalar_t__,int ,scalar_t__) ;
 int FUNC_17 (int ,int *) ;
 scalar_t__ FUNC_18 (int ,int *) ;

__attribute__((used)) static void FUNC_19(struct hci_dev *VAR_8, struct sk_buff *VAR_9)
{
 struct hci_ev_disconn_complete *VAR_10 = (void *) VAR_9->data;
 u8 VAR_11;
 struct hci_conn_params *VAR_12;
 struct hci_conn *VAR_13;
 bool VAR_14;
 u8 VAR_15;

 FUNC_0("%s status 0x%2.2x", VAR_8->name, VAR_10->status);

 FUNC_5(VAR_8);

 VAR_13 = FUNC_3(VAR_8, FUNC_1(VAR_10->handle));
 if (!VAR_13)
  goto unlock;

 if (VAR_10->status) {
  FUNC_16(VAR_8, &VAR_13->dst, VAR_13->type,
           VAR_13->dst_type, VAR_10->status);
  goto unlock;
 }

 VAR_13->state = VAR_1;

 VAR_14 = FUNC_17(VAR_4, &VAR_13->flags);

 if (FUNC_18(VAR_2, &VAR_13->flags))
  VAR_11 = VAR_7;
 else
  VAR_11 = FUNC_11(VAR_10->reason);

 FUNC_15(VAR_8, &VAR_13->dst, VAR_13->type, VAR_13->dst_type,
    VAR_11, VAR_14);

 if (VAR_13->type == VAR_0) {
  if (FUNC_18(VAR_3, &VAR_13->flags))
   FUNC_8(VAR_8, &VAR_13->dst);

  FUNC_10(VAR_8);
 }

 VAR_12 = FUNC_4(VAR_8, &VAR_13->dst, VAR_13->dst_type);
 if (VAR_12) {
  switch (VAR_12->auto_connect) {
  case 128:
   if (VAR_10->reason != VAR_5)
    break;


  case 129:
  case 130:
   FUNC_14(&VAR_12->action);
   FUNC_13(&VAR_12->action, &VAR_8->pend_le_conns);
   FUNC_12(VAR_8);
   break;

  default:
   break;
  }
 }

 VAR_15 = VAR_13->type;

 FUNC_7(VAR_13, VAR_10->reason);
 FUNC_2(VAR_13);
 if (VAR_15 == VAR_6)
  FUNC_9(VAR_8);

unlock:
 FUNC_6(VAR_8);
}
