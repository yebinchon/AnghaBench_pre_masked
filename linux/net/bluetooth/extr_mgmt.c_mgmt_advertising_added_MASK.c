
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int dummy; } ;
struct mgmt_ev_advertising_added {int instance; } ;
struct hci_dev {int dummy; } ;
typedef int ev ;


 int VAR_0 ;
 int FUNC_0 (int ,struct hci_dev*,struct mgmt_ev_advertising_added*,int,struct sock*) ;

void FUNC_1(struct sock *VAR_1, struct hci_dev *VAR_2, u8 VAR_3)
{
 struct mgmt_ev_advertising_added VAR_4;

 VAR_4.instance = VAR_3;

 FUNC_0(VAR_0, VAR_2, &VAR_4, sizeof(VAR_4), VAR_1);
}
