
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_auth_complete {scalar_t__ status; int handle; } ;
struct hci_dev {int name; } ;
struct hci_cp_set_conn_encrypt {int encrypt; int handle; } ;
struct hci_conn {scalar_t__ state; int flags; int disc_timeout; int pending_sec_level; int sec_level; } ;
typedef int cp ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct hci_conn*,scalar_t__) ;
 int FUNC_5 (struct hci_conn*) ;
 struct hci_conn* FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 (struct hci_conn*) ;
 scalar_t__ FUNC_8 (struct hci_conn*) ;
 int FUNC_9 (struct hci_conn*,scalar_t__) ;
 int FUNC_10 (struct hci_dev*) ;
 int FUNC_11 (struct hci_dev*) ;
 int FUNC_12 (struct hci_conn*,scalar_t__,int) ;
 int FUNC_13 (struct hci_dev*,int ,int,struct hci_cp_set_conn_encrypt*) ;
 int FUNC_14 (struct hci_conn*,scalar_t__) ;
 int FUNC_15 (int ,int *) ;
 scalar_t__ FUNC_16 (int ,int *) ;

__attribute__((used)) static void FUNC_17(struct hci_dev *VAR_10, struct sk_buff *VAR_11)
{
 struct hci_ev_auth_complete *VAR_12 = (void *) VAR_11->data;
 struct hci_conn *VAR_13;

 FUNC_0("%s status 0x%2.2x", VAR_10->name, VAR_12->status);

 FUNC_10(VAR_10);

 VAR_13 = FUNC_6(VAR_10, FUNC_1(VAR_12->handle));
 if (!VAR_13)
  goto unlock;

 if (!VAR_12->status) {
  FUNC_3(VAR_3, &VAR_13->flags);

  if (!FUNC_8(VAR_13) &&
      FUNC_16(VAR_6, &VAR_13->flags)) {
   FUNC_2(VAR_10, "re-auth of legacy device is not possible.");
  } else {
   FUNC_15(VAR_2, &VAR_13->flags);
   VAR_13->sec_level = VAR_13->pending_sec_level;
  }
 } else {
  if (VAR_12->status == VAR_8)
   FUNC_15(VAR_3, &VAR_13->flags);

  FUNC_14(VAR_13, VAR_12->status);
 }

 FUNC_3(VAR_4, &VAR_13->flags);
 FUNC_3(VAR_6, &VAR_13->flags);

 if (VAR_13->state == VAR_0) {
  if (!VAR_12->status && FUNC_8(VAR_13)) {
   struct hci_cp_set_conn_encrypt VAR_14;
   VAR_14.handle = VAR_12->handle;
   VAR_14.encrypt = 0x01;
   FUNC_13(VAR_10, VAR_9, sizeof(VAR_14),
         &VAR_14);
  } else {
   VAR_13->state = VAR_1;
   FUNC_9(VAR_13, VAR_12->status);
   FUNC_5(VAR_13);
  }
 } else {
  FUNC_4(VAR_13, VAR_12->status);

  FUNC_7(VAR_13);
  VAR_13->disc_timeout = VAR_7;
  FUNC_5(VAR_13);
 }

 if (FUNC_16(VAR_5, &VAR_13->flags)) {
  if (!VAR_12->status) {
   struct hci_cp_set_conn_encrypt VAR_15;
   VAR_15.handle = VAR_12->handle;
   VAR_15.encrypt = 0x01;
   FUNC_13(VAR_10, VAR_9, sizeof(VAR_15),
         &VAR_15);
  } else {
   FUNC_3(VAR_5, &VAR_13->flags);
   FUNC_12(VAR_13, VAR_12->status, 0x00);
  }
 }

unlock:
 FUNC_11(VAR_10);
}
