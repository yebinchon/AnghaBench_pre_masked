
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct hci_request {TYPE_1__* hdev; } ;
struct hci_cp_reject_sync_conn_req {void* reason; int bdaddr; int handle; int phy_handle; } ;
struct hci_cp_reject_conn_req {void* reason; int bdaddr; int handle; int phy_handle; } ;
struct hci_cp_disconnect {void* reason; int bdaddr; int handle; int phy_handle; } ;
struct hci_cp_disconn_phy_link {void* reason; int bdaddr; int handle; int phy_handle; } ;
struct hci_conn {int state; struct hci_cp_reject_sync_conn_req dst; int type; int flags; int handle; } ;
typedef int rej ;
typedef int dc ;
typedef int cp ;
struct TYPE_2__ {int hci_ver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int *,struct hci_cp_reject_sync_conn_req*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hci_request*,int ,int,struct hci_cp_reject_sync_conn_req*) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct hci_request *VAR_16, struct hci_conn *VAR_17,
        u8 VAR_18)
{
 switch (VAR_17->state) {
 case 128:
 case 131:
  if (VAR_17->type == VAR_1) {
   struct hci_cp_disconn_phy_link VAR_19;

   VAR_19.phy_handle = FUNC_0(VAR_17->handle);
   VAR_19.reason = VAR_18;
   FUNC_3(VAR_16, VAR_10, sizeof(VAR_19),
        &VAR_19);
  } else {
   struct hci_cp_disconnect VAR_20;

   VAR_20.handle = FUNC_2(VAR_17->handle);
   VAR_20.reason = VAR_18;
   FUNC_3(VAR_16, VAR_9, sizeof(VAR_20), &VAR_20);
  }

  VAR_17->state = VAR_4;

  break;
 case 130:
  if (VAR_17->type == VAR_14) {
   if (FUNC_4(VAR_6, &VAR_17->flags))
    break;
   FUNC_3(VAR_16, VAR_11,
        0, ((void*)0));
  } else if (VAR_17->type == VAR_0) {
   if (VAR_16->hdev->hci_ver < VAR_2)
    break;
   FUNC_3(VAR_16, VAR_8,
        6, &VAR_17->dst);
  }
  break;
 case 129:
  if (VAR_17->type == VAR_0) {
   struct hci_cp_reject_conn_req VAR_21;

   FUNC_1(&VAR_21.bdaddr, &VAR_17->dst);
   VAR_21.reason = VAR_18;

   FUNC_3(VAR_16, VAR_12,
        sizeof(VAR_21), &VAR_21);
  } else if (VAR_17->type == VAR_15 || VAR_17->type == VAR_5) {
   struct hci_cp_reject_sync_conn_req VAR_22;

   FUNC_1(&VAR_22.bdaddr, &VAR_17->dst);







   VAR_22.reason = VAR_7;

   FUNC_3(VAR_16, VAR_13,
        sizeof(VAR_22), &VAR_22);
  }
  break;
 default:
  VAR_17->state = VAR_3;
  break;
 }
}
