
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_cp_set_conn_encrypt {int encrypt; int handle; } ;
struct hci_conn {int hdev; int handle; int flags; } ;
typedef int cp ;


 int FUNC_0 (char*,struct hci_conn*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,struct hci_cp_set_conn_encrypt*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct hci_conn *VAR_2)
{
 FUNC_0("hcon %p", VAR_2);

 if (!FUNC_3(VAR_0, &VAR_2->flags)) {
  struct hci_cp_set_conn_encrypt VAR_3;
  VAR_3.handle = FUNC_1(VAR_2->handle);
  VAR_3.encrypt = 0x01;
  FUNC_2(VAR_2->hdev, VAR_1, sizeof(VAR_3),
        &VAR_3);
 }
}
