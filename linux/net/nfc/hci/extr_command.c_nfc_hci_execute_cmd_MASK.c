
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nfc_hci_dev {int dummy; } ;
struct hcp_exec_waiter {int exec_complete; scalar_t__ exec_result; struct sk_buff* result_skb; int * wq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct nfc_hci_dev*,int ,int ,int ,int const*,size_t,int ,struct hcp_exec_waiter*,int ) ;
 int FUNC_3 (char*,int ,int ,size_t) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct nfc_hci_dev *VAR_4, u8 VAR_5, u8 VAR_6,
          const u8 *VAR_7, size_t VAR_8,
          struct sk_buff **VAR_9)
{
 FUNC_0(VAR_2);
 struct hcp_exec_waiter VAR_10;
 VAR_10.wq = &VAR_2;
 VAR_10.exec_complete = 0;
 VAR_10.result_skb = ((void*)0);

 FUNC_3("exec cmd sync through pipe=%d, cmd=%d, plen=%zd\n", VAR_5,
   VAR_6, VAR_8);




 VAR_10.exec_result = FUNC_2(VAR_4, VAR_5,
          VAR_1, VAR_6,
          VAR_7, VAR_8,
          VAR_3, &VAR_10,
          VAR_0);
 if (VAR_10.exec_result < 0)
  return VAR_10.exec_result;

 FUNC_4(VAR_2, VAR_10.exec_complete == 1);

 if (VAR_10.exec_result == 0) {
  if (VAR_9)
   *VAR_9 = VAR_10.result_skb;
  else
   FUNC_1(VAR_10.result_skb);
 }

 return VAR_10.exec_result;
}
