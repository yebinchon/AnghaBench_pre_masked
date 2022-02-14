
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int ssp_mode; } ;
struct inquiry_entry {TYPE_1__ data; } ;
struct hci_ev_remote_ext_features {size_t page; int* features; int status; int handle; } ;
struct hci_dev {int name; } ;
struct hci_cp_remote_name_req {int pscan_rep_mode; int bdaddr; } ;
struct hci_conn {scalar_t__ state; int flags; int dst; int * features; } ;
typedef int cp ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct hci_conn*) ;
 struct hci_conn* FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (struct hci_conn*,int ) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_dev*) ;
 struct inquiry_entry* FUNC_9 (struct hci_dev*,int *) ;
 int FUNC_10 (struct hci_dev*,struct hci_conn*) ;
 int FUNC_11 (struct hci_dev*,int ,int,struct hci_cp_remote_name_req*) ;
 int FUNC_12 (int ,int*,int) ;
 int FUNC_13 (struct hci_cp_remote_name_req*,int ,int) ;
 int FUNC_14 (struct hci_dev*,struct hci_conn*,int ,int *,int ) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int ,int *) ;

__attribute__((used)) static void FUNC_18(struct hci_dev *VAR_9,
     struct sk_buff *VAR_10)
{
 struct hci_ev_remote_ext_features *VAR_11 = (void *) VAR_10->data;
 struct hci_conn *VAR_12;

 FUNC_0("%s", VAR_9->name);

 FUNC_7(VAR_9);

 VAR_12 = FUNC_5(VAR_9, FUNC_1(VAR_11->handle));
 if (!VAR_12)
  goto unlock;

 if (VAR_11->page < VAR_5)
  FUNC_12(VAR_12->features[VAR_11->page], VAR_11->features, 8);

 if (!VAR_11->status && VAR_11->page == 0x01) {
  struct inquiry_entry *VAR_13;

  VAR_13 = FUNC_9(VAR_9, &VAR_12->dst);
  if (VAR_13)
   VAR_13->data.ssp_mode = (VAR_11->features[0] & VAR_8);

  if (VAR_11->features[0] & VAR_8) {
   FUNC_15(VAR_4, &VAR_12->flags);
  } else {
   FUNC_3(VAR_4, &VAR_12->flags);
  }

  if (VAR_11->features[0] & VAR_7)
   FUNC_15(VAR_3, &VAR_12->flags);
 }

 if (VAR_12->state != VAR_0)
  goto unlock;

 if (!VAR_11->status && !FUNC_17(VAR_2, &VAR_12->flags)) {
  struct hci_cp_remote_name_req VAR_14;
  FUNC_13(&VAR_14, 0, sizeof(VAR_14));
  FUNC_2(&VAR_14.bdaddr, &VAR_12->dst);
  VAR_14.pscan_rep_mode = 0x02;
  FUNC_11(VAR_9, VAR_6, sizeof(VAR_14), &VAR_14);
 } else if (!FUNC_16(VAR_2, &VAR_12->flags))
  FUNC_14(VAR_9, VAR_12, 0, ((void*)0), 0);

 if (!FUNC_10(VAR_9, VAR_12)) {
  VAR_12->state = VAR_1;
  FUNC_6(VAR_12, VAR_11->status);
  FUNC_4(VAR_12);
 }

unlock:
 FUNC_8(VAR_9);
}
