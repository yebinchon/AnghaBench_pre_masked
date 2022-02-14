
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ priority; int len; } ;
struct hci_dev {int le_cnt; int acl_cnt; scalar_t__ le_pkts; scalar_t__ le_last_tx; int name; } ;
struct hci_chan {TYPE_1__* conn; int sent; int data_q; } ;
struct TYPE_2__ {int sent; } ;


 int FUNC_0 (char*,struct hci_chan*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hci_chan* FUNC_1 (struct hci_dev*,int ,int*) ;
 int FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (struct hci_dev*,struct sk_buff*) ;
 scalar_t__ VAR_3 ;
 struct sk_buff* FUNC_7 (int *) ;
 struct sk_buff* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct hci_dev *VAR_4)
{
 struct hci_chan *VAR_5;
 struct sk_buff *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 FUNC_0("%s", VAR_4->name);

 if (!FUNC_2(VAR_4, VAR_2))
  return;

 if (!FUNC_3(VAR_4, VAR_0)) {


  if (!VAR_4->le_cnt && VAR_4->le_pkts &&
      FUNC_9(VAR_3, VAR_4->le_last_tx + VAR_1 * 45))
   FUNC_4(VAR_4, VAR_2);
 }

 VAR_8 = VAR_4->le_pkts ? VAR_4->le_cnt : VAR_4->acl_cnt;
 VAR_9 = VAR_8;
 while (VAR_8 && (VAR_5 = FUNC_1(VAR_4, VAR_2, &VAR_7))) {
  u32 VAR_10 = (FUNC_8(&VAR_5->data_q))->priority;
  while (VAR_7-- && (VAR_6 = FUNC_8(&VAR_5->data_q))) {
   FUNC_0("chan %p skb %p len %d priority %u", VAR_5, VAR_6,
          VAR_6->len, VAR_6->priority);


   if (VAR_6->priority < VAR_10)
    break;

   VAR_6 = FUNC_7(&VAR_5->data_q);

   FUNC_6(VAR_4, VAR_6);
   VAR_4->le_last_tx = VAR_3;

   VAR_8--;
   VAR_5->sent++;
   VAR_5->conn->sent++;
  }
 }

 if (VAR_4->le_pkts)
  VAR_4->le_cnt = VAR_8;
 else
  VAR_4->acl_cnt = VAR_8;

 if (VAR_8 != VAR_9)
  FUNC_5(VAR_4, VAR_2);
}
