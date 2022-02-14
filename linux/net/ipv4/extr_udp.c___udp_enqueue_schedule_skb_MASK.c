
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int lock; } ;
struct sock {int sk_rcvbuf; int sk_forward_alloc; int sk_drops; int sk_rmem_alloc; int (* sk_data_ready ) (struct sock*) ;struct sk_buff_head sk_receive_queue; } ;
struct sk_buff {int truesize; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sock*,int,int,int ) ;
 int FUNC_1 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int *) ;
 int * FUNC_6 (struct sock*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sock*,int ) ;
 int FUNC_11 (struct sock*,struct sk_buff*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sk_buff*) ;

int FUNC_16(struct sock *VAR_5, struct sk_buff *VAR_6)
{
 struct sk_buff_head *VAR_7 = &VAR_5->sk_receive_queue;
 int VAR_8, VAR_9, VAR_10, VAR_11 = -VAR_1;
 spinlock_t *VAR_12 = ((void*)0);
 int VAR_13;




 VAR_8 = FUNC_4(&VAR_5->sk_rmem_alloc);
 if (VAR_8 > VAR_5->sk_rcvbuf)
  goto drop;







 if (VAR_8 > (VAR_5->sk_rcvbuf >> 1)) {
  FUNC_9(VAR_6);

  VAR_12 = FUNC_6(VAR_5);
 }
 VAR_13 = VAR_6->truesize;
 FUNC_15(VAR_6);




 VAR_8 = FUNC_2(VAR_13, &VAR_5->sk_rmem_alloc);
 if (VAR_8 > (VAR_13 + VAR_5->sk_rcvbuf))
  goto uncharge_drop;

 FUNC_12(&VAR_7->lock);
 if (VAR_13 >= VAR_5->sk_forward_alloc) {
  VAR_10 = FUNC_8(VAR_13);
  VAR_9 = VAR_10 << VAR_2;
  if (!FUNC_0(VAR_5, VAR_9, VAR_10, VAR_3)) {
   VAR_11 = -VAR_0;
   FUNC_13(&VAR_7->lock);
   goto uncharge_drop;
  }

  VAR_5->sk_forward_alloc += VAR_9;
 }

 VAR_5->sk_forward_alloc -= VAR_13;




 FUNC_11(VAR_5, VAR_6);

 FUNC_1(VAR_7, VAR_6);
 FUNC_13(&VAR_7->lock);

 if (!FUNC_10(VAR_5, VAR_4))
  VAR_5->sk_data_ready(VAR_5);

 FUNC_7(VAR_12);
 return 0;

uncharge_drop:
 FUNC_5(VAR_6->truesize, &VAR_5->sk_rmem_alloc);

drop:
 FUNC_3(&VAR_5->sk_drops);
 FUNC_7(VAR_12);
 return VAR_11;
}
