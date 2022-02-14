
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ priority; int len; } ;
struct hci_dev {unsigned int acl_cnt; int acl_last_tx; } ;
struct hci_chan {TYPE_1__* conn; int sent; int data_q; } ;
struct TYPE_4__ {int force_active; } ;
struct TYPE_3__ {int sent; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct hci_chan*,struct sk_buff*,int ,scalar_t__) ;
 int FUNC_1 (struct hci_dev*,unsigned int) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 struct hci_chan* FUNC_3 (struct hci_dev*,int ,int*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (struct hci_dev*,struct sk_buff*) ;
 int VAR_1 ;
 struct sk_buff* FUNC_7 (int *) ;
 struct sk_buff* FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct hci_dev *VAR_2)
{
 unsigned int VAR_3 = VAR_2->acl_cnt;
 struct hci_chan *VAR_4;
 struct sk_buff *VAR_5;
 int VAR_6;

 FUNC_1(VAR_2, VAR_3);

 while (VAR_2->acl_cnt &&
        (VAR_4 = FUNC_3(VAR_2, VAR_0, &VAR_6))) {
  u32 VAR_7 = (FUNC_8(&VAR_4->data_q))->priority;
  while (VAR_6-- && (VAR_5 = FUNC_8(&VAR_4->data_q))) {
   FUNC_0("chan %p skb %p len %d priority %u", VAR_4, VAR_5,
          VAR_5->len, VAR_5->priority);


   if (VAR_5->priority < VAR_7)
    break;

   VAR_5 = FUNC_7(&VAR_4->data_q);

   FUNC_4(VAR_4->conn,
         FUNC_2(VAR_5)->force_active);

   FUNC_6(VAR_2, VAR_5);
   VAR_2->acl_last_tx = VAR_1;

   VAR_2->acl_cnt--;
   VAR_4->sent++;
   VAR_4->conn->sent++;
  }
 }

 if (VAR_3 != VAR_2->acl_cnt)
  FUNC_5(VAR_2, VAR_0);
}
