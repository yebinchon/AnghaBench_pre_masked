
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_remote_name {scalar_t__ status; int bdaddr; int * name; } ;
struct hci_dev {int name; } ;
struct hci_cp_auth_requested {int handle; } ;
struct hci_conn {int handle; int flags; } ;
typedef int cp ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*,struct hci_conn*,int *,int *,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 struct hci_conn* FUNC_4 (struct hci_dev*,int ,int *) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_dev*,struct hci_conn*) ;
 int FUNC_9 (struct hci_dev*,int ,int,struct hci_cp_auth_requested*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static void FUNC_13(struct hci_dev *VAR_6, struct sk_buff *VAR_7)
{
 struct hci_ev_remote_name *VAR_8 = (void *) VAR_7->data;
 struct hci_conn *VAR_9;

 FUNC_0("%s", VAR_6->name);

 FUNC_3(VAR_6);

 FUNC_5(VAR_6);

 VAR_9 = FUNC_4(VAR_6, VAR_0, &VAR_8->bdaddr);

 if (!FUNC_6(VAR_6, VAR_4))
  goto check_auth;

 if (VAR_8->status == 0)
  FUNC_2(VAR_6, VAR_9, &VAR_8->bdaddr, VAR_8->name,
           FUNC_11(VAR_8->name, VAR_3));
 else
  FUNC_2(VAR_6, VAR_9, &VAR_8->bdaddr, ((void*)0), 0);

check_auth:
 if (!VAR_9)
  goto unlock;

 if (!FUNC_8(VAR_6, VAR_9))
  goto unlock;

 if (!FUNC_12(VAR_2, &VAR_9->flags)) {
  struct hci_cp_auth_requested VAR_10;

  FUNC_10(VAR_1, &VAR_9->flags);

  VAR_10.handle = FUNC_1(VAR_9->handle);
  FUNC_9(VAR_6, VAR_5, sizeof(VAR_10), &VAR_10);
 }

unlock:
 FUNC_7(VAR_6);
}
