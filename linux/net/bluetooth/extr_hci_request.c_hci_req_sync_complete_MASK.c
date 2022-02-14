
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct hci_dev {scalar_t__ req_status; int req_wait_q; int req_skb; int req_result; int name; } ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct hci_dev *VAR_2, u8 VAR_3, u16 VAR_4,
      struct sk_buff *VAR_5)
{
 FUNC_0("%s result 0x%2.2x", VAR_2->name, VAR_3);

 if (VAR_2->req_status == VAR_1) {
  VAR_2->req_result = VAR_3;
  VAR_2->req_status = VAR_0;
  if (VAR_5)
   VAR_2->req_skb = FUNC_1(VAR_5);
  FUNC_2(&VAR_2->req_wait_q);
 }
}
