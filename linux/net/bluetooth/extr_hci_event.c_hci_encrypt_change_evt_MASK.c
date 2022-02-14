
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_request {int dummy; } ;
struct hci_ev_encrypt_change {scalar_t__ status; int encrypt; int handle; } ;
struct hci_dev {int* commands; int* le_features; int auth_payload_timeout; int name; } ;
struct hci_cp_write_auth_payload_to {void* timeout; void* handle; } ;
struct hci_cp_read_enc_key_size {void* handle; } ;
struct hci_conn {scalar_t__ key_type; scalar_t__ type; scalar_t__ state; int hdev; int handle; int flags; void* enc_key_size; int pending_sec_level; int sec_level; } ;
typedef int cp ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*,char*) ;
 int FUNC_3 (int ,int *) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct hci_dev*,int) ;
 int FUNC_6 (struct hci_conn*) ;
 struct hci_conn* FUNC_7 (struct hci_dev*,int ) ;
 int FUNC_8 (struct hci_conn*,scalar_t__) ;
 int FUNC_9 (struct hci_dev*) ;
 int FUNC_10 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_11 (struct hci_dev*,int ) ;
 int FUNC_12 (struct hci_dev*) ;
 int FUNC_13 (struct hci_conn*,scalar_t__) ;
 int FUNC_14 (struct hci_conn*,scalar_t__,int) ;
 int FUNC_15 (struct hci_request*,int ,int,struct hci_cp_read_enc_key_size*) ;
 int FUNC_16 (struct hci_request*,struct hci_dev*) ;
 scalar_t__ FUNC_17 (struct hci_request*,int ) ;
 int FUNC_18 (int ,int ,int,struct hci_cp_write_auth_payload_to*) ;
 scalar_t__ FUNC_19 (struct hci_dev*) ;
 int VAR_19 ;
 int FUNC_20 (int ,int *) ;
 scalar_t__ FUNC_21 (int ,int *) ;

__attribute__((used)) static void FUNC_22(struct hci_dev *VAR_20, struct sk_buff *VAR_21)
{
 struct hci_ev_encrypt_change *VAR_22 = (void *) VAR_21->data;
 struct hci_conn *VAR_23;

 FUNC_0("%s status 0x%2.2x", VAR_20->name, VAR_22->status);

 FUNC_9(VAR_20);

 VAR_23 = FUNC_7(VAR_20, FUNC_1(VAR_22->handle));
 if (!VAR_23)
  goto unlock;

 if (!VAR_22->status) {
  if (VAR_22->encrypt) {

   FUNC_20(VAR_4, &VAR_23->flags);
   FUNC_20(VAR_6, &VAR_23->flags);
   VAR_23->sec_level = VAR_23->pending_sec_level;


   if (VAR_23->key_type == VAR_13)
    FUNC_20(VAR_8, &VAR_23->flags);

   if ((VAR_23->type == VAR_0 && VAR_22->encrypt == 0x02) ||
       VAR_23->type == VAR_18)
    FUNC_20(VAR_3, &VAR_23->flags);
  } else {
   FUNC_3(VAR_6, &VAR_23->flags);
   FUNC_3(VAR_3, &VAR_23->flags);
  }
 }




 if (VAR_22->status && VAR_23->type == VAR_18) {
  FUNC_10(VAR_20, VAR_16);
  FUNC_5(VAR_20, 1);
 }

 FUNC_3(VAR_7, &VAR_23->flags);

 if (VAR_22->status && VAR_23->state == VAR_2) {
  if (VAR_22->status == VAR_10)
   FUNC_20(VAR_5, &VAR_23->flags);

  FUNC_13(VAR_23, VAR_9);
  FUNC_6(VAR_23);
  goto unlock;
 }





 if (FUNC_11(VAR_20, VAR_17) &&
     (!FUNC_21(VAR_3, &VAR_23->flags) ||
      VAR_23->key_type != VAR_13)) {
  FUNC_8(VAR_23, VAR_9);
  FUNC_6(VAR_23);
  goto unlock;
 }


 if (!VAR_22->status && VAR_22->encrypt && VAR_23->type == VAR_0) {
  struct hci_cp_read_enc_key_size VAR_24;
  struct hci_request VAR_25;





  if (!(VAR_20->commands[20] & 0x10)) {
   VAR_23->enc_key_size = VAR_12;
   goto notify;
  }

  FUNC_16(&VAR_25, VAR_20);

  VAR_24.handle = FUNC_4(VAR_23->handle);
  FUNC_15(&VAR_25, VAR_14, sizeof(VAR_24), &VAR_24);

  if (FUNC_17(&VAR_25, VAR_19)) {
   FUNC_2(VAR_20, "sending read key size failed");
   VAR_23->enc_key_size = VAR_12;
   goto notify;
  }

  goto unlock;
 }
 if (FUNC_21(VAR_6, &VAR_23->flags) &&
     FUNC_21(VAR_3, &VAR_23->flags) &&
     ((VAR_23->type == VAR_0 && FUNC_19(VAR_20)) ||
      (VAR_23->type == VAR_18 && (VAR_20->le_features[0] & VAR_11)))) {
  struct hci_cp_write_auth_payload_to VAR_26;

  VAR_26.handle = FUNC_4(VAR_23->handle);
  VAR_26.timeout = FUNC_4(VAR_20->auth_payload_timeout);
  FUNC_18(VAR_23->hdev, VAR_15,
        sizeof(VAR_26), &VAR_26);
 }

notify:
 if (VAR_23->state == VAR_1) {
  if (!VAR_22->status)
   VAR_23->state = VAR_2;

  FUNC_8(VAR_23, VAR_22->status);
  FUNC_6(VAR_23);
 } else
  FUNC_14(VAR_23, VAR_22->status, VAR_22->encrypt);

unlock:
 FUNC_12(VAR_20);
}
