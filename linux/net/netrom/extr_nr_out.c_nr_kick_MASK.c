
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_write_queue; } ;
struct sk_buff {int dummy; } ;
struct nr_sock {scalar_t__ state; int condition; unsigned short va; unsigned short vs; int window; int vr; int vl; int ack_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sock*,struct sk_buff*) ;
 struct nr_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 int FUNC_8 (int *,struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,struct sock*) ;

void FUNC_10(struct sock *VAR_5)
{
 struct nr_sock *VAR_6 = FUNC_1(VAR_5);
 struct sk_buff *VAR_7, *VAR_8;
 unsigned short VAR_9, VAR_10;

 if (VAR_6->state != VAR_4)
  return;

 if (VAR_6->condition & VAR_2)
  return;

 if (!FUNC_6(&VAR_5->sk_write_queue))
  return;

 VAR_9 = (FUNC_6(&VAR_6->ack_queue) == ((void*)0)) ? VAR_6->va : VAR_6->vs;
 VAR_10 = (VAR_6->va + VAR_6->window) % VAR_3;

 if (VAR_9 == VAR_10)
  return;

 VAR_6->vs = VAR_9;
 VAR_7 = FUNC_5(&VAR_5->sk_write_queue);

 do {
  if ((VAR_8 = FUNC_4(VAR_7, VAR_0)) == ((void*)0)) {
   FUNC_7(&VAR_5->sk_write_queue, VAR_7);
   break;
  }

  FUNC_9(VAR_8, VAR_5);




  FUNC_0(VAR_5, VAR_8);

  VAR_6->vs = (VAR_6->vs + 1) % VAR_3;




  FUNC_8(&VAR_6->ack_queue, VAR_7);

 } while (VAR_6->vs != VAR_10 &&
   (VAR_7 = FUNC_5(&VAR_5->sk_write_queue)) != ((void*)0));

 VAR_6->vl = VAR_6->vr;
 VAR_6->condition &= ~VAR_1;

 if (!FUNC_3(VAR_5))
  FUNC_2(VAR_5);
}
