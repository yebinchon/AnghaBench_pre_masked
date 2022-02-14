
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int lock; } ;
struct sock {scalar_t__ sk_rcvbuf; int (* sk_data_ready ) (struct sock*) ;int sk_drops; int sk_rmem_alloc; struct sk_buff_head sk_receive_queue; } ;
struct sk_buff {int * dev; int truesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct sock*,struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (struct sock*,struct sk_buff*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*,struct sk_buff*) ;

int FUNC_12(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 unsigned long VAR_5;
 struct sk_buff_head *VAR_6 = &VAR_3->sk_receive_queue;

 if (FUNC_2(&VAR_3->sk_rmem_alloc) >= VAR_3->sk_rcvbuf) {
  FUNC_1(&VAR_3->sk_drops);
  FUNC_11(VAR_3, VAR_4);
  return -VAR_1;
 }

 if (!FUNC_3(VAR_3, VAR_4, VAR_4->truesize)) {
  FUNC_1(&VAR_3->sk_drops);
  return -VAR_0;
 }

 VAR_4->dev = ((void*)0);
 FUNC_5(VAR_4, VAR_3);




 FUNC_4(VAR_4);

 FUNC_8(&VAR_6->lock, VAR_5);
 FUNC_7(VAR_3, VAR_4);
 FUNC_0(VAR_6, VAR_4);
 FUNC_9(&VAR_6->lock, VAR_5);

 if (!FUNC_6(VAR_3, VAR_2))
  VAR_3->sk_data_ready(VAR_3);
 return 0;
}
