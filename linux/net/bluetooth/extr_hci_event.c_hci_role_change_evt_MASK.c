
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_role_change {int role; int status; int bdaddr; } ;
struct hci_dev {int name; } ;
struct hci_conn {int flags; int role; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,int ,int *) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_conn*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct hci_dev *VAR_2, struct sk_buff *VAR_3)
{
 struct hci_ev_role_change *VAR_4 = (void *) VAR_3->data;
 struct hci_conn *VAR_5;

 FUNC_0("%s status 0x%2.2x", VAR_2->name, VAR_4->status);

 FUNC_3(VAR_2);

 VAR_5 = FUNC_2(VAR_2, VAR_0, &VAR_4->bdaddr);
 if (VAR_5) {
  if (!VAR_4->status)
   VAR_5->role = VAR_4->role;

  FUNC_1(VAR_1, &VAR_5->flags);

  FUNC_5(VAR_5, VAR_4->status, VAR_4->role);
 }

 FUNC_4(VAR_2);
}
