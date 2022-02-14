
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct hci_dev {int cmd_q; } ;
struct TYPE_3__ {int req_flags; } ;
struct TYPE_4__ {TYPE_1__ hci; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct hci_dev *VAR_1)
{
 struct sk_buff *VAR_2;

 VAR_2 = FUNC_1(&VAR_1->cmd_q);
 if (!VAR_2)
  return 1;

 return (FUNC_0(VAR_2)->hci.req_flags & VAR_0);
}
