
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_7__ {int lock; } ;
struct hci_dev {TYPE_3__ cmd_q; struct sk_buff* sent_cmd; int flags; } ;
typedef scalar_t__ hci_req_complete_t ;
typedef int hci_req_complete_skb_t ;
struct TYPE_5__ {int req_flags; scalar_t__ req_complete; int req_complete_skb; } ;
struct TYPE_6__ {TYPE_1__ hci; } ;


 int FUNC_0 (char*,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,struct sk_buff*) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (int ,int *) ;

void FUNC_12(struct hci_dev *VAR_5, u16 VAR_6, u8 VAR_7,
     hci_req_complete_t *VAR_8,
     hci_req_complete_skb_t *VAR_9)
{
 struct sk_buff *VAR_10;
 unsigned long VAR_11;

 FUNC_0("opcode 0x%04x status 0x%02x", VAR_6, VAR_7);




 if (!FUNC_7(VAR_5, VAR_6)) {






  if (FUNC_11(VAR_1, &VAR_5->flags) && VAR_6 == VAR_2)
   FUNC_6(VAR_5);

  return;
 }


 FUNC_4(VAR_5, VAR_0);




 if (!VAR_7 && !FUNC_5(VAR_5))
  return;





 if (FUNC_3(VAR_5->sent_cmd)->hci.req_flags & VAR_3) {
  *VAR_9 = FUNC_3(VAR_5->sent_cmd)->hci.req_complete_skb;
  return;
 }

 if (FUNC_3(VAR_5->sent_cmd)->hci.req_complete) {
  *VAR_8 = FUNC_3(VAR_5->sent_cmd)->hci.req_complete;
  return;
 }


 FUNC_9(&VAR_5->cmd_q.lock, VAR_11);
 while ((VAR_10 = FUNC_1(&VAR_5->cmd_q))) {
  if (FUNC_3(VAR_10)->hci.req_flags & VAR_4) {
   FUNC_2(&VAR_5->cmd_q, VAR_10);
   break;
  }

  if (FUNC_3(VAR_10)->hci.req_flags & VAR_3)
   *VAR_9 = FUNC_3(VAR_10)->hci.req_complete_skb;
  else
   *VAR_8 = FUNC_3(VAR_10)->hci.req_complete;
  FUNC_8(VAR_10);
 }
 FUNC_10(&VAR_5->cmd_q.lock, VAR_11);
}
