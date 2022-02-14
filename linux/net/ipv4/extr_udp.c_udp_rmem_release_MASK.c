
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_sock {int forward_deficit; int reader_queue; } ;
struct sk_buff_head {int lock; } ;
struct sock {int sk_rcvbuf; int sk_forward_alloc; int sk_rmem_alloc; struct sk_buff_head sk_receive_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*,int) ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff_head*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct udp_sock* FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_2, int VAR_3, int VAR_4,
        bool VAR_5)
{
 struct udp_sock *VAR_6 = FUNC_6(VAR_2);
 struct sk_buff_head *VAR_7;
 int VAR_8;

 if (FUNC_2(VAR_4)) {
  VAR_6->forward_deficit += VAR_3;
  VAR_3 = VAR_6->forward_deficit;
  if (VAR_3 < (VAR_2->sk_rcvbuf >> 2))
   return;
 } else {
  VAR_3 += VAR_6->forward_deficit;
 }
 VAR_6->forward_deficit = 0;




 VAR_7 = &VAR_2->sk_receive_queue;
 if (!VAR_5)
  FUNC_4(&VAR_7->lock);


 VAR_2->sk_forward_alloc += VAR_3;
 VAR_8 = (VAR_2->sk_forward_alloc - VAR_4) & ~(VAR_0 - 1);
 VAR_2->sk_forward_alloc -= VAR_8;

 if (VAR_8)
  FUNC_0(VAR_2, VAR_8 >> VAR_1);

 FUNC_1(VAR_3, &VAR_2->sk_rmem_alloc);


 FUNC_3(VAR_7, &VAR_6->reader_queue);

 if (!VAR_5)
  FUNC_5(&VAR_7->lock);
}
