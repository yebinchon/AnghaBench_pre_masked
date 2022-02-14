
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {int pend_le_conns; } ;
struct hci_conn_params {scalar_t__ auto_connect; int explicit_connect; int action; } ;
typedef int bdaddr_t ;


 int FUNC_0 (char*,int *,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct hci_conn_params* FUNC_1 (struct hci_dev*,int *,int ) ;
 struct hci_conn_params* FUNC_2 (struct hci_dev*,int *,int ) ;
 scalar_t__ FUNC_3 (struct hci_dev*,int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct hci_dev *VAR_5,
     bdaddr_t *VAR_6, u8 VAR_7)
{
 struct hci_conn_params *VAR_8;

 if (FUNC_3(VAR_5, VAR_6, VAR_7))
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_5, VAR_6, VAR_7);
 if (!VAR_8) {
  VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_7);
  if (!VAR_8)
   return -VAR_1;





  VAR_8->auto_connect = VAR_3;
 }


 if (VAR_8->auto_connect == VAR_2 ||
     VAR_8->auto_connect == VAR_4 ||
     VAR_8->auto_connect == VAR_3) {
  FUNC_5(&VAR_8->action);
  FUNC_4(&VAR_8->action, &VAR_5->pend_le_conns);
 }

 VAR_8->explicit_connect = 1;

 FUNC_0("addr %pMR (type %u) auto_connect %u", VAR_6, VAR_7,
        VAR_8->auto_connect);

 return 0;
}
