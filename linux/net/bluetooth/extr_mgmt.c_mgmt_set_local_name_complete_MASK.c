
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mgmt_pending_cmd {int * sk; } ;
struct mgmt_cp_set_local_name {int short_name; int name; } ;
struct hci_dev {int dev_name; scalar_t__* short_name; } ;
typedef int ev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hci_dev*,int *) ;
 int FUNC_1 (int ,scalar_t__*,int) ;
 int FUNC_2 (struct mgmt_cp_set_local_name*,int ,int) ;
 int FUNC_3 (int ,struct hci_dev*,struct mgmt_cp_set_local_name*,int,int ,int *) ;
 struct mgmt_pending_cmd* FUNC_4 (int ,struct hci_dev*) ;

void FUNC_5(struct hci_dev *VAR_6, u8 *VAR_7, u8 VAR_8)
{
 struct mgmt_cp_set_local_name VAR_9;
 struct mgmt_pending_cmd *VAR_10;

 if (VAR_8)
  return;

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 FUNC_1(VAR_9.name, VAR_7, VAR_0);
 FUNC_1(VAR_9.short_name, VAR_6->short_name, VAR_1);

 VAR_10 = FUNC_4(VAR_4, VAR_6);
 if (!VAR_10) {
  FUNC_1(VAR_6->dev_name, VAR_7, sizeof(VAR_6->dev_name));




  if (FUNC_4(VAR_5, VAR_6))
   return;
 }

 FUNC_3(VAR_3, VAR_6, &VAR_9, sizeof(VAR_9),
      VAR_2, VAR_10 ? VAR_10->sk : ((void*)0));
 FUNC_0(VAR_6, VAR_10 ? VAR_10->sk : ((void*)0));
}
