
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int winsize_out; } ;
struct x25_sock {scalar_t__ state; int condition; unsigned short vs; unsigned short va; int vr; int vl; int ack_queue; TYPE_1__ facilities; TYPE_2__* neighbour; int interrupt_out_queue; int flags; } ;
struct sock {int sk_write_queue; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {scalar_t__ extended; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct sk_buff* FUNC_0 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct sock*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct sock*,struct sk_buff*) ;
 struct x25_sock* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sk_buff*,TYPE_2__*) ;

void FUNC_11(struct sock *VAR_7)
{
 struct sk_buff *VAR_8, *VAR_9;
 unsigned short VAR_10, VAR_11;
 int VAR_12;
 struct x25_sock *VAR_13 = FUNC_8(VAR_7);

 if (VAR_13->state != VAR_6)
  return;




 if (FUNC_2(&VAR_13->interrupt_out_queue) != ((void*)0) &&
  !FUNC_6(VAR_4, &VAR_13->flags)) {

  VAR_8 = FUNC_1(&VAR_13->interrupt_out_queue);
  FUNC_10(VAR_8, VAR_13->neighbour);
 }

 if (VAR_13->condition & VAR_2)
  return;

 if (!FUNC_2(&VAR_7->sk_write_queue))
  return;

 VAR_12 = VAR_13->neighbour->extended ? VAR_3 : VAR_5;

 VAR_10 = FUNC_2(&VAR_13->ack_queue) ? VAR_13->vs : VAR_13->va;
 VAR_11 = (VAR_13->va + VAR_13->facilities.winsize_out) % VAR_12;

 if (VAR_10 == VAR_11)
  return;

 VAR_13->vs = VAR_10;






 VAR_8 = FUNC_1(&VAR_7->sk_write_queue);

 do {
  if ((VAR_9 = FUNC_0(VAR_8, VAR_0)) == ((void*)0)) {
   FUNC_3(&VAR_7->sk_write_queue, VAR_8);
   break;
  }

  FUNC_5(VAR_9, VAR_7);




  FUNC_7(VAR_7, VAR_9);

  VAR_13->vs = (VAR_13->vs + 1) % VAR_12;




  FUNC_4(&VAR_13->ack_queue, VAR_8);

 } while (VAR_13->vs != VAR_11 &&
   (VAR_8 = FUNC_1(&VAR_7->sk_write_queue)) != ((void*)0));

 VAR_13->vl = VAR_13->vr;
 VAR_13->condition &= ~VAR_1;

 FUNC_9(VAR_7);
}
