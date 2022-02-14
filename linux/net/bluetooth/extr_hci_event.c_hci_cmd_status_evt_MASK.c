
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct hci_ev_cmd_status {scalar_t__ status; scalar_t__ ncmd; int opcode; } ;
struct hci_dev {int cmd_work; int workqueue; int cmd_q; int cmd_cnt; scalar_t__ sent_cmd; int flags; int cmd_timer; int name; } ;
typedef int hci_req_complete_t ;
typedef int hci_req_complete_skb_t ;
struct TYPE_3__ {int req_event; } ;
struct TYPE_4__ {TYPE_1__ hci; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 TYPE_2__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct hci_dev*,char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct hci_dev*,scalar_t__) ;
 int FUNC_8 (struct hci_dev*,scalar_t__) ;
 int FUNC_9 (struct hci_dev*,scalar_t__) ;
 int FUNC_10 (struct hci_dev*,scalar_t__) ;
 int FUNC_11 (struct hci_dev*,scalar_t__) ;
 int FUNC_12 (struct hci_dev*,scalar_t__) ;
 int FUNC_13 (struct hci_dev*,scalar_t__) ;
 int FUNC_14 (struct hci_dev*,scalar_t__) ;
 int FUNC_15 (struct hci_dev*,scalar_t__) ;
 int FUNC_16 (struct hci_dev*,scalar_t__) ;
 int FUNC_17 (struct hci_dev*,scalar_t__) ;
 int FUNC_18 (struct hci_dev*,scalar_t__) ;
 int FUNC_19 (struct hci_dev*,scalar_t__) ;
 int FUNC_20 (struct hci_dev*,scalar_t__) ;
 int FUNC_21 (struct hci_dev*,scalar_t__) ;
 int FUNC_22 (struct hci_dev*,scalar_t__) ;
 int FUNC_23 (struct hci_dev*,scalar_t__) ;
 scalar_t__ FUNC_24 (struct hci_dev*,int ) ;
 int FUNC_25 (struct hci_dev*,int ,scalar_t__,int *,int *) ;
 int FUNC_26 (int ,int *) ;
 int FUNC_27 (struct sk_buff*,int) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int ,int *) ;

__attribute__((used)) static void FUNC_30(struct hci_dev *VAR_3, struct sk_buff *VAR_4,
          u16 *VAR_5, u8 *VAR_6,
          hci_req_complete_t *VAR_7,
          hci_req_complete_skb_t *VAR_8)
{
 struct hci_ev_cmd_status *VAR_9 = (void *) VAR_4->data;

 FUNC_27(VAR_4, sizeof(*VAR_9));

 *VAR_5 = FUNC_1(VAR_9->opcode);
 *VAR_6 = VAR_9->status;

 switch (*VAR_5) {
 case 139:
  FUNC_12(VAR_3, VAR_9->status);
  break;

 case 142:
  FUNC_9(VAR_3, VAR_9->status);
  break;

 case 141:
  FUNC_10(VAR_3, VAR_9->status);
  break;

 case 144:
  FUNC_7(VAR_3, VAR_9->status);
  break;

 case 143:
  FUNC_8(VAR_3, VAR_9->status);
  break;

 case 130:
  FUNC_20(VAR_3, VAR_9->status);
  break;

 case 132:
  FUNC_19(VAR_3, VAR_9->status);
  break;

 case 133:
  FUNC_18(VAR_3, VAR_9->status);
  break;

 case 134:
  FUNC_17(VAR_3, VAR_9->status);
  break;

 case 131:
  FUNC_21(VAR_3, VAR_9->status);
  break;

 case 129:
  FUNC_22(VAR_3, VAR_9->status);
  break;

 case 140:
  FUNC_11(VAR_3, VAR_9->status);
  break;

 case 128:
  FUNC_23(VAR_3, VAR_9->status);
  break;

 case 138:
  FUNC_13(VAR_3, VAR_9->status);
  break;

 case 136:
  FUNC_15(VAR_3, VAR_9->status);
  break;

 case 135:
  FUNC_16(VAR_3, VAR_9->status);
  break;

 case 137:
  FUNC_14(VAR_3, VAR_9->status);
  break;

 default:
  FUNC_0("%s opcode 0x%4.4x", VAR_3->name, *VAR_5);
  break;
 }

 if (*VAR_5 != VAR_1)
  FUNC_6(&VAR_3->cmd_timer);

 if (VAR_9->ncmd && !FUNC_29(VAR_2, &VAR_3->flags))
  FUNC_3(&VAR_3->cmd_cnt, 1);







 if (VAR_9->status ||
     (VAR_3->sent_cmd && !FUNC_4(VAR_3->sent_cmd)->hci.req_event))
  FUNC_25(VAR_3, *VAR_5, VAR_9->status, VAR_7,
         VAR_8);

 if (FUNC_24(VAR_3, VAR_0)) {
  FUNC_5(VAR_3,
      "unexpected event for opcode 0x%4.4x", *VAR_5);
  return;
 }

 if (FUNC_2(&VAR_3->cmd_cnt) && !FUNC_28(&VAR_3->cmd_q))
  FUNC_26(VAR_3->workqueue, &VAR_3->cmd_work);
}
