
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_remote_features {int status; int handle; int features; } ;
struct hci_dev {scalar_t__ state; int flags; int dst; int * features; int name; } ;
struct hci_cp_remote_name_req {int page; int pscan_rep_mode; int bdaddr; int handle; } ;
struct hci_cp_read_remote_ext_features {int page; int pscan_rep_mode; int bdaddr; int handle; } ;
struct hci_conn {scalar_t__ state; int flags; int dst; int * features; int name; } ;
typedef int cp ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct hci_dev*) ;
 struct hci_dev* FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_dev*,struct hci_dev*) ;
 int FUNC_9 (struct hci_dev*,int ,int,struct hci_cp_remote_name_req*) ;
 scalar_t__ FUNC_10 (struct hci_dev*) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (struct hci_cp_remote_name_req*,int ,int) ;
 int FUNC_13 (struct hci_dev*,struct hci_dev*,int ,int *,int ) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static void FUNC_16(struct hci_dev *VAR_5,
        struct sk_buff *VAR_6)
{
 struct hci_ev_remote_features *VAR_7 = (void *) VAR_6->data;
 struct hci_conn *VAR_8;

 FUNC_0("%s status 0x%2.2x", VAR_5->name, VAR_7->status);

 FUNC_6(VAR_5);

 VAR_8 = FUNC_4(VAR_5, FUNC_1(VAR_7->handle));
 if (!VAR_8)
  goto unlock;

 if (!VAR_7->status)
  FUNC_11(VAR_8->features[0], VAR_7->features, 8);

 if (VAR_8->state != VAR_0)
  goto unlock;

 if (!VAR_7->status && FUNC_10(VAR_5) &&
     FUNC_10(VAR_8)) {
  struct hci_cp_read_remote_ext_features VAR_9;
  VAR_9.handle = VAR_7->handle;
  VAR_9.page = 0x01;
  FUNC_9(VAR_5, VAR_3,
        sizeof(VAR_9), &VAR_9);
  goto unlock;
 }

 if (!VAR_7->status && !FUNC_15(VAR_2, &VAR_8->flags)) {
  struct hci_cp_remote_name_req VAR_10;
  FUNC_12(&VAR_10, 0, sizeof(VAR_10));
  FUNC_2(&VAR_10.bdaddr, &VAR_8->dst);
  VAR_10.pscan_rep_mode = 0x02;
  FUNC_9(VAR_5, VAR_4, sizeof(VAR_10), &VAR_10);
 } else if (!FUNC_14(VAR_2, &VAR_8->flags))
  FUNC_13(VAR_5, VAR_8, 0, ((void*)0), 0);

 if (!FUNC_8(VAR_5, VAR_8)) {
  VAR_8->state = VAR_1;
  FUNC_5(VAR_8, VAR_7->status);
  FUNC_3(VAR_8);
 }

unlock:
 FUNC_7(VAR_5);
}
