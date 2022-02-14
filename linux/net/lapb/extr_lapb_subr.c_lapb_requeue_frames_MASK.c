
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct lapb_cb {int write_queue; int ack_queue; } ;


 int FUNC_0 (struct sk_buff*,struct sk_buff*,int *) ;
 struct sk_buff* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct sk_buff*) ;

void FUNC_3(struct lapb_cb *VAR_0)
{
 struct sk_buff *VAR_1, *VAR_2 = ((void*)0);






 while ((VAR_1 = FUNC_1(&VAR_0->ack_queue)) != ((void*)0)) {
  if (!VAR_2)
   FUNC_2(&VAR_0->write_queue, VAR_1);
  else
   FUNC_0(VAR_2, VAR_1, &VAR_0->write_queue);
  VAR_2 = VAR_1;
 }
}
