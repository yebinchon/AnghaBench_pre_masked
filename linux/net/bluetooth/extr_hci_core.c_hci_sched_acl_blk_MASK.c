
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ priority; int len; } ;
struct hci_dev {unsigned int block_cnt; scalar_t__ dev_type; int acl_last_tx; int name; } ;
struct hci_chan {int sent; TYPE_1__* conn; int data_q; } ;
struct TYPE_4__ {int force_active; } ;
struct TYPE_3__ {int sent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct hci_chan*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct hci_dev*,unsigned int) ;
 int FUNC_2 (struct hci_dev*,struct sk_buff*) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 struct hci_chan* FUNC_4 (struct hci_dev*,int ,int*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 (struct hci_dev*,struct sk_buff*) ;
 int VAR_3 ;
 struct sk_buff* FUNC_8 (int *) ;
 struct sk_buff* FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct hci_dev *VAR_4)
{
 unsigned int VAR_5 = VAR_4->block_cnt;
 struct hci_chan *VAR_6;
 struct sk_buff *VAR_7;
 int VAR_8;
 u8 VAR_9;

 FUNC_1(VAR_4, VAR_5);

 FUNC_0("%s", VAR_4->name);

 if (VAR_4->dev_type == VAR_2)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_0;

 while (VAR_4->block_cnt > 0 &&
        (VAR_6 = FUNC_4(VAR_4, VAR_9, &VAR_8))) {
  u32 VAR_10 = (FUNC_9(&VAR_6->data_q))->priority;
  while (VAR_8 > 0 && (VAR_7 = FUNC_9(&VAR_6->data_q))) {
   int VAR_11;

   FUNC_0("chan %p skb %p len %d priority %u", VAR_6, VAR_7,
          VAR_7->len, VAR_7->priority);


   if (VAR_7->priority < VAR_10)
    break;

   VAR_7 = FUNC_8(&VAR_6->data_q);

   VAR_11 = FUNC_2(VAR_4, VAR_7);
   if (VAR_11 > VAR_4->block_cnt)
    return;

   FUNC_5(VAR_6->conn,
         FUNC_3(VAR_7)->force_active);

   FUNC_7(VAR_4, VAR_7);
   VAR_4->acl_last_tx = VAR_3;

   VAR_4->block_cnt -= VAR_11;
   VAR_8 -= VAR_11;

   VAR_6->sent += VAR_11;
   VAR_6->conn->sent += VAR_11;
  }
 }

 if (VAR_5 != VAR_4->block_cnt)
  FUNC_6(VAR_4, VAR_9);
}
