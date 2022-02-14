
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_cp_switch_role {scalar_t__ role; int bdaddr; } ;
struct hci_conn {scalar_t__ role; int hdev; int dst; int flags; } ;
typedef int cp ;
typedef scalar_t__ __u8 ;


 int FUNC_0 (char*,struct hci_conn*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ,int,struct hci_cp_switch_role*) ;
 int FUNC_3 (int ,int *) ;

int FUNC_4(struct hci_conn *VAR_2, __u8 VAR_3)
{
 FUNC_0("hcon %p", VAR_2);

 if (VAR_3 == VAR_2->role)
  return 1;

 if (!FUNC_3(VAR_0, &VAR_2->flags)) {
  struct hci_cp_switch_role VAR_4;
  FUNC_1(&VAR_4.bdaddr, &VAR_2->dst);
  VAR_4.role = VAR_3;
  FUNC_2(VAR_2->hdev, VAR_1, sizeof(VAR_4), &VAR_4);
 }

 return 0;
}
