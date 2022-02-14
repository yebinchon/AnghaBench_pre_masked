
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int type; int bdaddr; } ;
struct mgmt_ev_new_conn_param {void* timeout; void* latency; void* max_interval; void* min_interval; int store_hint; TYPE_1__ addr; } ;
struct hci_dev {int dummy; } ;
typedef int ev ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mgmt_ev_new_conn_param*,int ,int) ;
 int FUNC_5 (int ,struct hci_dev*,struct mgmt_ev_new_conn_param*,int,int *) ;

void FUNC_6(struct hci_dev *VAR_2, bdaddr_t *VAR_3,
    u8 VAR_4, u8 VAR_5, u16 VAR_6,
    u16 VAR_7, u16 VAR_8, u16 VAR_9)
{
 struct mgmt_ev_new_conn_param VAR_10;

 if (!FUNC_2(VAR_3, VAR_4))
  return;

 FUNC_4(&VAR_10, 0, sizeof(VAR_10));
 FUNC_0(&VAR_10.addr.bdaddr, VAR_3);
 VAR_10.addr.type = FUNC_3(VAR_0, VAR_4);
 VAR_10.store_hint = VAR_5;
 VAR_10.min_interval = FUNC_1(VAR_6);
 VAR_10.max_interval = FUNC_1(VAR_7);
 VAR_10.latency = FUNC_1(VAR_8);
 VAR_10.timeout = FUNC_1(VAR_9);

 FUNC_5(VAR_1, VAR_2, &VAR_10, sizeof(VAR_10), ((void*)0));
}
