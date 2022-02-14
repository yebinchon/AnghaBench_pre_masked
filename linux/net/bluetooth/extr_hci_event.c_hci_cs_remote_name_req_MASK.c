
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int name; } ;
struct hci_cp_remote_name_req {int bdaddr; } ;
struct hci_cp_auth_requested {int handle; } ;
struct hci_conn {int handle; int flags; } ;
typedef int auth_cp ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*,struct hci_conn*,int *,int *,int ) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ,int *) ;
 int FUNC_4 (struct hci_dev*) ;
 scalar_t__ FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*,struct hci_conn*) ;
 int FUNC_8 (struct hci_dev*,int ,int,struct hci_cp_auth_requested*) ;
 struct hci_cp_remote_name_req* FUNC_9 (struct hci_dev*,int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static void FUNC_12(struct hci_dev *VAR_6, __u8 VAR_7)
{
 struct hci_cp_remote_name_req *VAR_8;
 struct hci_conn *VAR_9;

 FUNC_0("%s status 0x%2.2x", VAR_6->name, VAR_7);



 if (!VAR_7)
  return;

 VAR_8 = FUNC_9(VAR_6, VAR_5);
 if (!VAR_8)
  return;

 FUNC_4(VAR_6);

 VAR_9 = FUNC_3(VAR_6, VAR_0, &VAR_8->bdaddr);

 if (FUNC_5(VAR_6, VAR_3))
  FUNC_2(VAR_6, VAR_9, &VAR_8->bdaddr, ((void*)0), 0);

 if (!VAR_9)
  goto unlock;

 if (!FUNC_7(VAR_6, VAR_9))
  goto unlock;

 if (!FUNC_11(VAR_2, &VAR_9->flags)) {
  struct hci_cp_auth_requested VAR_10;

  FUNC_10(VAR_1, &VAR_9->flags);

  VAR_10.handle = FUNC_1(VAR_9->handle);
  FUNC_8(VAR_6, VAR_4,
        sizeof(VAR_10), &VAR_10);
 }

unlock:
 FUNC_6(VAR_6);
}
