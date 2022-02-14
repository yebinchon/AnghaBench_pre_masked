
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int lock; int prev; } ;
struct sock {struct sk_buff_head sk_receive_queue; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (struct sock*,struct sk_buff_head*,unsigned int,void (*) (struct sock*,struct sk_buff*),int*,int*,struct sk_buff**) ;
 int FUNC_2 (struct sock*,unsigned int) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

struct sk_buff *FUNC_7(struct sock *VAR_2, unsigned int VAR_3,
     void (*VAR_4)(struct sock *VAR_5,
          struct sk_buff *VAR_6),
     int *VAR_7, int *VAR_8,
     struct sk_buff **VAR_9)
{
 struct sk_buff_head *VAR_10 = &VAR_2->sk_receive_queue;
 struct sk_buff *VAR_11;
 unsigned long VAR_12;



 int VAR_13 = FUNC_4(VAR_2);

 if (VAR_13)
  goto no_packet;

 do {






  FUNC_5(&VAR_10->lock, VAR_12);
  VAR_11 = FUNC_1(VAR_2, VAR_10, VAR_3, VAR_4,
      VAR_7, &VAR_13, VAR_9);
  FUNC_6(&VAR_10->lock, VAR_12);
  if (VAR_13)
   goto no_packet;
  if (VAR_11)
   return VAR_11;

  if (!FUNC_3(VAR_2))
   break;

  FUNC_2(VAR_2, VAR_3 & VAR_1);
 } while (FUNC_0(VAR_2->sk_receive_queue.prev) != *VAR_9);

 VAR_13 = -VAR_0;

no_packet:
 *VAR_8 = VAR_13;
 return ((void*)0);
}
