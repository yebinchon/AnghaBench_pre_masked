
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {int le_supv_timeout; int le_conn_latency; int le_conn_max_interval; int le_conn_min_interval; int le_conn_params; } ;
struct hci_conn_params {int auto_connect; int supervision_timeout; int conn_latency; int conn_max_interval; int conn_min_interval; int action; int list; int addr_type; int addr; } ;
typedef int bdaddr_t ;


 int FUNC_0 (char*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct hci_dev*,char*) ;
 struct hci_conn_params* FUNC_4 (struct hci_dev*,int *,int ) ;
 struct hci_conn_params* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;

struct hci_conn_params *FUNC_7(struct hci_dev *VAR_2,
         bdaddr_t *VAR_3, u8 VAR_4)
{
 struct hci_conn_params *VAR_5;

 VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_0);
 if (!VAR_5) {
  FUNC_3(VAR_2, "out of memory");
  return ((void*)0);
 }

 FUNC_2(&VAR_5->addr, VAR_3);
 VAR_5->addr_type = VAR_4;

 FUNC_6(&VAR_5->list, &VAR_2->le_conn_params);
 FUNC_1(&VAR_5->action);

 VAR_5->conn_min_interval = VAR_2->le_conn_min_interval;
 VAR_5->conn_max_interval = VAR_2->le_conn_max_interval;
 VAR_5->conn_latency = VAR_2->le_conn_latency;
 VAR_5->supervision_timeout = VAR_2->le_supv_timeout;
 VAR_5->auto_connect = VAR_1;

 FUNC_0("addr %pMR (type %u)", VAR_3, VAR_4);

 return VAR_5;
}
