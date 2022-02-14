
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct sock {int sk_rcvbuf; int sk_rmem_alloc; int sk_state; } ;
struct nr_sock {int state; int condition; int vr; int vl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct sock* FUNC_3 (int ,struct timer_list*,int ) ;
 int FUNC_4 (struct sock*) ;
 struct nr_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,int ) ;
 struct sock* VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct sock*,int ) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;

__attribute__((used)) static void FUNC_11(struct timer_list *VAR_8)
{
 struct sock *VAR_9 = FUNC_3(VAR_9, VAR_8, VAR_7);
 struct nr_sock *VAR_10 = FUNC_5(VAR_9);

 FUNC_1(VAR_9);
 switch (VAR_10->state) {
 case 129:


  if (FUNC_8(VAR_9, VAR_4) ||
      (VAR_9->sk_state == VAR_5 && FUNC_8(VAR_9, VAR_3))) {
   FUNC_9(VAR_9);
   FUNC_2(VAR_9);
   FUNC_4(VAR_9);
   FUNC_10(VAR_9);
   return;
  }
  break;

 case 128:



  if (FUNC_0(&VAR_9->sk_rmem_alloc) < (VAR_9->sk_rcvbuf / 2) &&
      (VAR_10->condition & VAR_1)) {
   VAR_10->condition &= ~VAR_1;
   VAR_10->condition &= ~VAR_0;
   VAR_10->vl = VAR_10->vr;
   FUNC_7(VAR_9, VAR_2);
   break;
  }
  break;
 }

 FUNC_6(VAR_9);
 FUNC_2(VAR_9);
}
