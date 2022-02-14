
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct hci_request {int dummy; } ;
struct hci_dev {int req_status; int req_result; int name; struct sk_buff* req_skb; int req_wait_q; } ;


 int FUNC_0 (char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_1 (int) ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct hci_request*,int ,int ,void const*,int ) ;
 int FUNC_4 (struct hci_request*,struct hci_dev*) ;
 int FUNC_5 (struct hci_request*,int ) ;
 int VAR_5 ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,int,int ) ;

struct sk_buff *FUNC_8(struct hci_dev *VAR_6, u16 VAR_7, u32 VAR_8,
      const void *VAR_9, u8 VAR_10, u32 VAR_11)
{
 struct hci_request VAR_12;
 struct sk_buff *VAR_13;
 int VAR_14 = 0;

 FUNC_0("%s", VAR_6->name);

 FUNC_4(&VAR_12, VAR_6);

 FUNC_3(&VAR_12, VAR_7, VAR_8, VAR_9, VAR_10);

 VAR_6->req_status = VAR_4;

 VAR_14 = FUNC_5(&VAR_12, VAR_5);
 if (VAR_14 < 0)
  return FUNC_1(VAR_14);

 VAR_14 = FUNC_7(VAR_6->req_wait_q,
   VAR_6->req_status != VAR_4, VAR_11);

 if (VAR_14 == -VAR_2)
  return FUNC_1(-VAR_0);

 switch (VAR_6->req_status) {
 case 128:
  VAR_14 = -FUNC_2(VAR_6->req_result);
  break;

 case 129:
  VAR_14 = -VAR_6->req_result;
  break;

 default:
  VAR_14 = -VAR_3;
  break;
 }

 VAR_6->req_status = VAR_6->req_result = 0;
 VAR_13 = VAR_6->req_skb;
 VAR_6->req_skb = ((void*)0);

 FUNC_0("%s end: err %d", VAR_6->name, VAR_14);

 if (VAR_14 < 0) {
  FUNC_6(VAR_13);
  return FUNC_1(VAR_14);
 }

 if (!VAR_13)
  return FUNC_1(-VAR_1);

 return VAR_13;
}
