
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
struct TYPE_2__ {int type; int bdaddr; } ;
struct mgmt_ev_device_removed {TYPE_1__ addr; } ;
struct hci_dev {int dummy; } ;
typedef int ev ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,struct hci_dev*,struct mgmt_ev_device_removed*,int,struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_1, struct hci_dev *VAR_2,
      bdaddr_t *VAR_3, u8 VAR_4)
{
 struct mgmt_ev_device_removed VAR_5;

 FUNC_0(&VAR_5.addr.bdaddr, VAR_3);
 VAR_5.addr.type = VAR_4;

 FUNC_1(VAR_0, VAR_2, &VAR_5, sizeof(VAR_5), VAR_1);
}
