
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct hci_dev {int cmd_work; int workqueue; int cmd_q; int name; } ;
typedef int __u32 ;
typedef int __u16 ;
struct TYPE_3__ {int req_flags; } ;
struct TYPE_4__ {TYPE_1__ hci; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct hci_dev*,char*) ;
 struct sk_buff* FUNC_3 (struct hci_dev*,int ,int ,void const*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,struct sk_buff*) ;

int FUNC_6(struct hci_dev *VAR_2, __u16 VAR_3, __u32 VAR_4,
   const void *VAR_5)
{
 struct sk_buff *VAR_6;

 FUNC_0("%s opcode 0x%4.4x plen %d", VAR_2->name, VAR_3, VAR_4);

 VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
 if (!VAR_6) {
  FUNC_2(VAR_2, "no memory for command");
  return -VAR_0;
 }




 FUNC_1(VAR_6)->hci.req_flags |= VAR_1;

 FUNC_5(&VAR_2->cmd_q, VAR_6);
 FUNC_4(VAR_2->workqueue, &VAR_2->cmd_work);

 return 0;
}
