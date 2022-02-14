
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {int pend_le_conns; int pend_le_reports; } ;
struct hci_conn_params {int auto_connect; int action; int explicit_connect; } ;
typedef int bdaddr_t ;


 int FUNC_0 (char*,int *,int,int) ;
 int VAR_0 ;





 struct hci_conn_params* FUNC_1 (struct hci_dev*,int *,int) ;
 int FUNC_2 (struct hci_dev*,int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct hci_dev *VAR_1, bdaddr_t *VAR_2,
          u8 VAR_3, u8 VAR_4)
{
 struct hci_conn_params *VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (!VAR_5)
  return -VAR_0;

 if (VAR_5->auto_connect == VAR_4)
  return 0;

 FUNC_4(&VAR_5->action);

 switch (VAR_4) {
 case 130:
 case 129:



  if (VAR_5->explicit_connect)
   FUNC_3(&VAR_5->action, &VAR_1->pend_le_conns);
  break;
 case 128:
  if (VAR_5->explicit_connect)
   FUNC_3(&VAR_5->action, &VAR_1->pend_le_conns);
  else
   FUNC_3(&VAR_5->action, &VAR_1->pend_le_reports);
  break;
 case 131:
 case 132:
  if (!FUNC_2(VAR_1, VAR_2, VAR_3))
   FUNC_3(&VAR_5->action, &VAR_1->pend_le_conns);
  break;
 }

 VAR_5->auto_connect = VAR_4;

 FUNC_0("addr %pMR (type %u) auto_connect %u", VAR_2, VAR_3,
        VAR_4);

 return 0;
}
