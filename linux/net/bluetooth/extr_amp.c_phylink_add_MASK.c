
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct hci_dev {int dummy; } ;
struct hci_conn {int amp_mgr; int remote_id; int handle; int attempt; int state; } ;
struct amp_mgr {TYPE_2__* l2cap_conn; } ;
typedef int bdaddr_t ;
struct TYPE_4__ {TYPE_1__* hcon; } ;
struct TYPE_3__ {int dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct hci_conn*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct amp_mgr*) ;
 int FUNC_2 (struct amp_mgr*) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ,int *,int ) ;

struct hci_conn *FUNC_4(struct hci_dev *VAR_4, struct amp_mgr *VAR_5,
        u8 VAR_6, bool VAR_7)
{
 bdaddr_t *VAR_8 = &VAR_5->l2cap_conn->hcon->dst;
 struct hci_conn *VAR_9;
 u8 VAR_10 = VAR_7 ? VAR_2 : VAR_3;

 VAR_9 = FUNC_3(VAR_4, VAR_0, VAR_8, VAR_10);
 if (!VAR_9)
  return ((void*)0);

 FUNC_0("hcon %p dst %pMR", VAR_9, VAR_8);

 VAR_9->state = VAR_1;
 VAR_9->attempt++;
 VAR_9->handle = FUNC_1(VAR_5);
 VAR_9->remote_id = VAR_6;
 VAR_9->amp_mgr = FUNC_2(VAR_5);

 return VAR_9;
}
