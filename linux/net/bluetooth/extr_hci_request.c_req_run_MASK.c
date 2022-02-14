
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct hci_request {int err; int cmd_q; struct hci_dev* hdev; } ;
struct TYPE_5__ {int lock; } ;
struct hci_dev {int cmd_work; int workqueue; TYPE_2__ cmd_q; } ;
typedef scalar_t__ hci_req_complete_t ;
typedef scalar_t__ hci_req_complete_skb_t ;
struct TYPE_4__ {int req_flags; scalar_t__ req_complete_skb; scalar_t__ req_complete; } ;
struct TYPE_6__ {TYPE_1__ hci; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int *) ;
 struct sk_buff* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct hci_request *VAR_2, hci_req_complete_t VAR_3,
     hci_req_complete_skb_t VAR_4)
{
 struct hci_dev *VAR_5 = VAR_2->hdev;
 struct sk_buff *VAR_6;
 unsigned long VAR_7;

 FUNC_0("length %u", FUNC_5(&VAR_2->cmd_q));




 if (VAR_2->err) {
  FUNC_6(&VAR_2->cmd_q);
  return VAR_2->err;
 }


 if (FUNC_4(&VAR_2->cmd_q))
  return -VAR_0;

 VAR_6 = FUNC_3(&VAR_2->cmd_q);
 if (VAR_3) {
  FUNC_1(VAR_6)->hci.req_complete = VAR_3;
 } else if (VAR_4) {
  FUNC_1(VAR_6)->hci.req_complete_skb = VAR_4;
  FUNC_1(VAR_6)->hci.req_flags |= VAR_1;
 }

 FUNC_8(&VAR_5->cmd_q.lock, VAR_7);
 FUNC_7(&VAR_2->cmd_q, &VAR_5->cmd_q);
 FUNC_9(&VAR_5->cmd_q.lock, VAR_7);

 FUNC_2(VAR_5->workqueue, &VAR_5->cmd_work);

 return 0;
}
