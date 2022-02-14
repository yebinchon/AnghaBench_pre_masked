
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hcp_exec_waiter {int exec_result; int exec_complete; int wq; struct sk_buff* result_skb; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, struct sk_buff *VAR_1, int VAR_2)
{
 struct hcp_exec_waiter *VAR_3 = (struct hcp_exec_waiter *)VAR_0;

 FUNC_1("HCI Cmd completed with result=%d\n", VAR_2);

 VAR_3->exec_result = VAR_2;
 if (VAR_3->exec_result == 0)
  VAR_3->result_skb = VAR_1;
 else
  FUNC_0(VAR_1);
 VAR_3->exec_complete = 1;

 FUNC_2(VAR_3->wq);
}
