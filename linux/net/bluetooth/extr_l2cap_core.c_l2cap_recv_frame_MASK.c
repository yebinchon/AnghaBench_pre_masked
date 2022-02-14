
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct l2cap_hdr {int len; int cid; } ;
struct l2cap_conn {int pending_rx; struct hci_conn* hcon; } ;
struct hci_conn {scalar_t__ state; scalar_t__ type; int dst; TYPE_1__* hdev; } ;
typedef int __le16 ;
struct TYPE_2__ {int blacklist; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;



 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct hci_conn*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct l2cap_conn*,int ,struct sk_buff*) ;
 int FUNC_7 (struct l2cap_conn*,scalar_t__,struct sk_buff*) ;
 int FUNC_8 (struct l2cap_conn*,struct sk_buff*) ;
 int FUNC_9 (struct l2cap_conn*,struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_12(struct l2cap_conn *VAR_4, struct sk_buff *VAR_5)
{
 struct l2cap_hdr *VAR_6 = (void *) VAR_5->data;
 struct hci_conn *VAR_7 = VAR_4->hcon;
 u16 VAR_8, VAR_9;
 __le16 VAR_10;

 if (VAR_7->state != VAR_0) {
  FUNC_0("queueing pending rx skb");
  FUNC_11(&VAR_4->pending_rx, VAR_5);
  return;
 }

 FUNC_10(VAR_5, VAR_1);
 VAR_8 = FUNC_1(VAR_6->cid);
 VAR_9 = FUNC_1(VAR_6->len);

 if (VAR_9 != VAR_5->len) {
  FUNC_5(VAR_5);
  return;
 }




 if (VAR_7->type == VAR_3 &&
     FUNC_4(&VAR_7->hdev->blacklist, &VAR_7->dst,
       FUNC_2(VAR_7))) {
  FUNC_5(VAR_5);
  return;
 }

 FUNC_0("len %d, cid 0x%4.4x", VAR_9, VAR_8);

 switch (VAR_8) {
 case 128:
  FUNC_9(VAR_4, VAR_5);
  break;

 case 130:
  VAR_10 = FUNC_3((__le16 *) VAR_5->data);
  FUNC_10(VAR_5, VAR_2);
  FUNC_6(VAR_4, VAR_10, VAR_5);
  break;

 case 129:
  FUNC_8(VAR_4, VAR_5);
  break;

 default:
  FUNC_7(VAR_4, VAR_8, VAR_5);
  break;
 }
}
