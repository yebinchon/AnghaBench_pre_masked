
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bdaddr; } ;
struct inquiry_entry {TYPE_1__ data; } ;
struct hci_request {struct hci_dev* hdev; } ;
struct discovery_state {scalar_t__ state; scalar_t__ type; } ;
struct hci_dev {int le_scan_disable; int flags; struct discovery_state discovery; int name; } ;
struct hci_cp_remote_name_req_cancel {int bdaddr; } ;
typedef int cp ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct hci_dev*,int ) ;
 struct inquiry_entry* FUNC_4 (struct hci_dev*,int ,int ) ;
 int FUNC_5 (struct hci_request*,int ,int,struct hci_cp_remote_name_req_cancel*) ;
 int FUNC_6 (struct hci_request*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

bool FUNC_8(struct hci_request *VAR_10)
{
 struct hci_dev *VAR_11 = VAR_10->hdev;
 struct discovery_state *VAR_12 = &VAR_11->discovery;
 struct hci_cp_remote_name_req_cancel VAR_13;
 struct inquiry_entry *VAR_14;
 bool VAR_15 = 0;

 FUNC_0("%s state %u", VAR_11->name, VAR_11->discovery.state);

 if (VAR_12->state == VAR_1 || VAR_12->state == VAR_3) {
  if (FUNC_7(VAR_5, &VAR_11->flags))
   FUNC_5(VAR_10, VAR_7, 0, ((void*)0));

  if (FUNC_3(VAR_11, VAR_6)) {
   FUNC_2(&VAR_11->le_scan_disable);
   FUNC_6(VAR_10);
  }

  VAR_15 = 1;
 } else {

  if (FUNC_3(VAR_11, VAR_6)) {
   FUNC_6(VAR_10);
   VAR_15 = 1;
  }
 }


 if (VAR_12->type == VAR_4)
  return VAR_15;

 if (VAR_12->state == VAR_2 || VAR_12->state == VAR_3) {
  VAR_14 = FUNC_4(VAR_11, VAR_0,
           VAR_9);
  if (!VAR_14)
   return VAR_15;

  FUNC_1(&VAR_13.bdaddr, &VAR_14->data.bdaddr);
  FUNC_5(VAR_10, VAR_8, sizeof(VAR_13),
       &VAR_13);
  VAR_15 = 1;
 }

 return VAR_15;
}
