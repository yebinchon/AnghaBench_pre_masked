
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {int dummy; } ;
struct hci_conn_params {int dummy; } ;
typedef int bdaddr_t ;


 int FUNC_0 (char*,int *,int ) ;
 int FUNC_1 (struct hci_conn_params*) ;
 struct hci_conn_params* FUNC_2 (struct hci_dev*,int *,int ) ;
 int FUNC_3 (struct hci_dev*) ;

void FUNC_4(struct hci_dev *VAR_0, bdaddr_t *VAR_1, u8 VAR_2)
{
 struct hci_conn_params *VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (!VAR_3)
  return;

 FUNC_1(VAR_3);

 FUNC_3(VAR_0);

 FUNC_0("addr %pMR (type %u)", VAR_1, VAR_2);
}
