
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_conn {scalar_t__ key_type; int flags; int hdev; } ;


 int FUNC_0 (char*,struct hci_conn*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hci_conn*) ;
 scalar_t__ FUNC_2 (struct hci_conn*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct hci_conn *VAR_4)
{
 FUNC_0("hcon %p", VAR_4);





 if (FUNC_3(VAR_4->hdev, VAR_3)) {
  if (!FUNC_1(VAR_4) ||
      !FUNC_4(VAR_0, &VAR_4->flags) ||
      VAR_4->key_type != VAR_2)
   return 0;
 }

 if (FUNC_2(VAR_4) &&
     !FUNC_4(VAR_1, &VAR_4->flags))
  return 0;

 return 1;
}
