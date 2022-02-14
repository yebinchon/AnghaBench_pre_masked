
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ sk; } ;
struct lapb_cb {int mode; unsigned short va; unsigned short vs; unsigned short window; int condition; int ack_queue; int write_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned short VAR_6 ;
 int FUNC_0 (struct lapb_cb*,struct sk_buff*,int ) ;
 int FUNC_1 (struct lapb_cb*) ;
 int FUNC_2 (struct lapb_cb*) ;
 struct sk_buff* FUNC_3 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;

void FUNC_9(struct lapb_cb *VAR_7)
{
 struct sk_buff *VAR_8, *VAR_9;
 unsigned short VAR_10, VAR_11, VAR_12;

 VAR_10 = (VAR_7->mode & VAR_3) ? VAR_2 : VAR_6;
 VAR_11 = !FUNC_5(&VAR_7->ack_queue) ? VAR_7->va : VAR_7->vs;
 VAR_12 = (VAR_7->va + VAR_7->window) % VAR_10;

 if (!(VAR_7->condition & VAR_4) &&
     VAR_11 != VAR_12 && FUNC_5(&VAR_7->write_queue)) {
  VAR_7->vs = VAR_11;




  VAR_8 = FUNC_4(&VAR_7->write_queue);

  do {
   if ((VAR_9 = FUNC_3(VAR_8, VAR_0)) == ((void*)0)) {
    FUNC_6(&VAR_7->write_queue, VAR_8);
    break;
   }

   if (VAR_8->sk)
    FUNC_8(VAR_9, VAR_8->sk);




   FUNC_0(VAR_7, VAR_9, VAR_5);

   VAR_7->vs = (VAR_7->vs + 1) % VAR_10;




   FUNC_7(&VAR_7->ack_queue, VAR_8);

  } while (VAR_7->vs != VAR_12 && (VAR_8 = FUNC_4(&VAR_7->write_queue)) != ((void*)0));

  VAR_7->condition &= ~VAR_1;

  if (!FUNC_2(VAR_7))
   FUNC_1(VAR_7);
 }
}
