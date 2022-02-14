
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
struct TYPE_2__ {int type; int bdaddr; } ;
struct mgmt_ev_device_unpaired {TYPE_1__ addr; } ;
struct hci_dev {int dummy; } ;
typedef int ev ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,struct hci_dev*,struct mgmt_ev_device_unpaired*,int,struct sock*) ;

__attribute__((used)) static int FUNC_2(struct hci_dev *VAR_1, bdaddr_t *VAR_2,
      u8 VAR_3, struct sock *VAR_4)
{
 struct mgmt_ev_device_unpaired VAR_5;

 FUNC_0(&VAR_5.addr.bdaddr, VAR_2);
 VAR_5.addr.type = VAR_3;

 return FUNC_1(VAR_0, VAR_1, &VAR_5, sizeof(VAR_5),
     VAR_4);
}
