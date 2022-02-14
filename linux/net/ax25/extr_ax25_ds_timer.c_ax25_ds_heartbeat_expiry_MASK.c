
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int sk_rcvbuf; int sk_rmem_alloc; int sk_state; } ;
struct TYPE_5__ {int state; int condition; struct sock* sk; } ;
typedef TYPE_1__ ax25_cb ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;

void FUNC_8(ax25_cb *VAR_5)
{
 struct sock *VAR_6=VAR_5->sk;

 if (VAR_6)
  FUNC_3(VAR_6);

 switch (VAR_5->state) {

 case 130:
 case 129:


  if (!VAR_6 || FUNC_5(VAR_6, VAR_3) ||
      (VAR_6->sk_state == VAR_4 &&
       FUNC_5(VAR_6, VAR_2))) {
   if (VAR_6) {
    FUNC_6(VAR_6);
    FUNC_1(VAR_5);
    FUNC_4(VAR_6);

    FUNC_7(VAR_6);
   } else
    FUNC_1(VAR_5);
   return;
  }
  break;

 case 128:



  if (VAR_6 != ((void*)0)) {
   if (FUNC_0(&VAR_6->sk_rmem_alloc) <
       (VAR_6->sk_rcvbuf >> 1) &&
       (VAR_5->condition & VAR_1)) {
    VAR_5->condition &= ~VAR_1;
    VAR_5->condition &= ~VAR_0;
    break;
   }
  }
  break;
 }

 if (VAR_6)
  FUNC_4(VAR_6);

 FUNC_2(VAR_5);
}
