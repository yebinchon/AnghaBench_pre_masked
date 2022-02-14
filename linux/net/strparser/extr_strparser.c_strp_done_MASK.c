
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strparser {int * skb_head; int work; int msg_timer_work; int stopped; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct strparser *VAR_0)
{
 FUNC_0(!VAR_0->stopped);

 FUNC_1(&VAR_0->msg_timer_work);
 FUNC_2(&VAR_0->work);

 if (VAR_0->skb_head) {
  FUNC_3(VAR_0->skb_head);
  VAR_0->skb_head = ((void*)0);
 }
}
