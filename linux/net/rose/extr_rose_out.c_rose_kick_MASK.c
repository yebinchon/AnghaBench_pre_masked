
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_write_queue; } ;
struct sk_buff {int dummy; } ;
struct rose_sock {scalar_t__ state; int condition; unsigned short va; unsigned short vs; int vr; int vl; int ack_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sock*,struct sk_buff*) ;
 struct rose_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct sk_buff* FUNC_3 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,struct sock*) ;
 int VAR_5 ;

void FUNC_9(struct sock *VAR_6)
{
 struct rose_sock *VAR_7 = FUNC_1(VAR_6);
 struct sk_buff *VAR_8, *VAR_9;
 unsigned short VAR_10, VAR_11;

 if (VAR_7->state != VAR_4)
  return;

 if (VAR_7->condition & VAR_2)
  return;

 if (!FUNC_5(&VAR_6->sk_write_queue))
  return;

 VAR_10 = (FUNC_5(&VAR_7->ack_queue) == ((void*)0)) ? VAR_7->va : VAR_7->vs;
 VAR_11 = (VAR_7->va + VAR_5) % VAR_3;

 if (VAR_10 == VAR_11)
  return;

 VAR_7->vs = VAR_10;






 VAR_8 = FUNC_4(&VAR_6->sk_write_queue);

 do {
  if ((VAR_9 = FUNC_3(VAR_8, VAR_0)) == ((void*)0)) {
   FUNC_6(&VAR_6->sk_write_queue, VAR_8);
   break;
  }

  FUNC_8(VAR_9, VAR_6);




  FUNC_0(VAR_6, VAR_9);

  VAR_7->vs = (VAR_7->vs + 1) % VAR_3;




  FUNC_7(&VAR_7->ack_queue, VAR_8);

 } while (VAR_7->vs != VAR_11 &&
   (VAR_8 = FUNC_4(&VAR_6->sk_write_queue)) != ((void*)0));

 VAR_7->vl = VAR_7->vr;
 VAR_7->condition &= ~VAR_1;

 FUNC_2(VAR_6);
}
