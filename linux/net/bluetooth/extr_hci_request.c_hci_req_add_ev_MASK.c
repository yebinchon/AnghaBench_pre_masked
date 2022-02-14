
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct hci_request {int err; int cmd_q; struct hci_dev* hdev; } ;
struct hci_dev {int name; } ;
struct TYPE_3__ {int req_event; int req_flags; } ;
struct TYPE_4__ {TYPE_1__ hci; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct hci_dev*,char*,int ) ;
 struct sk_buff* FUNC_3 (struct hci_dev*,int ,int ,void const*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,struct sk_buff*) ;

void FUNC_6(struct hci_request *VAR_2, u16 VAR_3, u32 VAR_4,
      const void *VAR_5, u8 VAR_6)
{
 struct hci_dev *VAR_7 = VAR_2->hdev;
 struct sk_buff *VAR_8;

 FUNC_0("%s opcode 0x%4.4x plen %d", VAR_7->name, VAR_3, VAR_4);




 if (VAR_2->err)
  return;

 VAR_8 = FUNC_3(VAR_7, VAR_3, VAR_4, VAR_5);
 if (!VAR_8) {
  FUNC_2(VAR_7, "no memory for command (opcode 0x%4.4x)",
      VAR_3);
  VAR_2->err = -VAR_0;
  return;
 }

 if (FUNC_4(&VAR_2->cmd_q))
  FUNC_1(VAR_8)->hci.req_flags |= VAR_1;

 FUNC_1(VAR_8)->hci.req_event = VAR_6;

 FUNC_5(&VAR_2->cmd_q, VAR_8);
}
