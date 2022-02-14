
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct hci_ev_sync_conn_complete {int status; scalar_t__ link_type; int handle; int bdaddr; } ;
struct hci_dev {int esco_type; int name; } ;
struct hci_conn {scalar_t__ type; int pkt_type; int state; TYPE_1__* link; int out; int handle; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_conn*) ;
 int FUNC_3 (struct hci_conn*) ;
 struct hci_conn* FUNC_4 (struct hci_dev*,scalar_t__,int *) ;
 int FUNC_5 (struct hci_conn*,int) ;
 int FUNC_6 (struct hci_conn*) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (struct hci_conn*,int ) ;

__attribute__((used)) static void FUNC_10(struct hci_dev *VAR_5,
           struct sk_buff *VAR_6)
{
 struct hci_ev_sync_conn_complete *VAR_7 = (void *) VAR_6->data;
 struct hci_conn *VAR_8;

 FUNC_0("%s status 0x%2.2x", VAR_5->name, VAR_7->status);

 FUNC_7(VAR_5);

 VAR_8 = FUNC_4(VAR_5, VAR_7->link_type, &VAR_7->bdaddr);
 if (!VAR_8) {
  if (VAR_7->link_type == VAR_3)
   goto unlock;
  VAR_8 = FUNC_4(VAR_5, VAR_3, &VAR_7->bdaddr);
  if (!VAR_8)
   goto unlock;
 }

 switch (VAR_7->status) {
 case 0x00:
  VAR_8->handle = FUNC_1(VAR_7->handle);
  VAR_8->state = VAR_1;
  VAR_8->type = VAR_7->link_type;

  FUNC_6(VAR_8);
  FUNC_2(VAR_8);
  break;

 case 0x10:
 case 0x0d:
 case 0x11:
 case 0x1c:
 case 0x1a:
 case 0x1f:
 case 0x20:
  if (VAR_8->out) {
   VAR_8->pkt_type = (VAR_5->esco_type & VAR_4) |
     (VAR_5->esco_type & VAR_2);
   if (FUNC_9(VAR_8, VAR_8->link->handle))
    goto unlock;
  }


 default:
  VAR_8->state = VAR_0;
  break;
 }

 FUNC_5(VAR_8, VAR_7->status);
 if (VAR_7->status)
  FUNC_3(VAR_8);

unlock:
 FUNC_8(VAR_5);
}
