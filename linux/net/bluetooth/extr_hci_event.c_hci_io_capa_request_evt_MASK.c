
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_io_capa_request {int bdaddr; } ;
struct hci_dev {int name; } ;
struct hci_cp_io_capability_reply {int capability; int authentication; int reason; int bdaddr; int oob_data; } ;
struct hci_cp_io_capability_neg_reply {int capability; int authentication; int reason; int bdaddr; int oob_data; } ;
struct hci_conn {int remote_auth; int io_capability; int auth_type; int flags; } ;
typedef int cp ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
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
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct hci_conn*) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ,int *) ;
 int FUNC_4 (struct hci_conn*) ;
 int FUNC_5 (struct hci_dev*) ;
 scalar_t__ FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_conn*) ;
 int FUNC_9 (struct hci_dev*,int ,int,struct hci_cp_io_capability_reply*) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct hci_dev *VAR_11, struct sk_buff *VAR_12)
{
 struct hci_ev_io_capa_request *VAR_13 = (void *) VAR_12->data;
 struct hci_conn *VAR_14;

 FUNC_0("%s", VAR_11->name);

 FUNC_5(VAR_11);

 VAR_14 = FUNC_3(VAR_11, VAR_0, &VAR_13->bdaddr);
 if (!VAR_14)
  goto unlock;

 FUNC_4(VAR_14);

 if (!FUNC_6(VAR_11, VAR_8))
  goto unlock;




 if (FUNC_6(VAR_11, VAR_3) ||
     FUNC_10(VAR_4, &VAR_14->flags) ||
     (VAR_14->remote_auth & ~0x01) == VAR_1) {
  struct hci_cp_io_capability_reply VAR_15;

  FUNC_1(&VAR_15.bdaddr, &VAR_13->bdaddr);


  VAR_15.capability = (VAR_14->io_capability == 0x04) ?
    VAR_6 : VAR_14->io_capability;


  if (VAR_14->remote_auth == 0xff) {



   if (VAR_14->io_capability != VAR_7 &&
       VAR_14->auth_type != VAR_1)
    VAR_14->auth_type |= 0x01;
  } else {
   VAR_14->auth_type = FUNC_8(VAR_14);
  }




  if (!FUNC_6(VAR_11, VAR_3))
   VAR_14->auth_type &= VAR_2;

  VAR_15.authentication = VAR_14->auth_type;
  VAR_15.oob_data = FUNC_2(VAR_14);

  FUNC_9(VAR_11, VAR_10,
        sizeof(VAR_15), &VAR_15);
 } else {
  struct hci_cp_io_capability_neg_reply VAR_16;

  FUNC_1(&VAR_16.bdaddr, &VAR_13->bdaddr);
  VAR_16.reason = VAR_5;

  FUNC_9(VAR_11, VAR_9,
        sizeof(VAR_16), &VAR_16);
 }

unlock:
 FUNC_7(VAR_11);
}
