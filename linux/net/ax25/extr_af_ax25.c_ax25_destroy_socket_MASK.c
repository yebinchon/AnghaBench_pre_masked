
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct sock {int sk_write_queue; int sk_state; int sk_receive_queue; } ;
struct sk_buff {struct sock* sk; } ;
struct TYPE_16__ {scalar_t__ expires; } ;
struct TYPE_15__ {struct sock* sk; TYPE_2__ dtimer; int state; } ;
typedef TYPE_1__ ax25_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sock*) ;
 TYPE_1__* FUNC_12 (struct sock*) ;
 struct sk_buff* FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*) ;
 int FUNC_17 (TYPE_2__*,int ,int ) ;

void FUNC_18(ax25_cb *VAR_5)
{
 struct sk_buff *VAR_6;

 FUNC_1(VAR_5);

 FUNC_5(VAR_5);
 FUNC_7(VAR_5);
 FUNC_8(VAR_5);
 FUNC_9(VAR_5);
 FUNC_6(VAR_5);

 FUNC_3(VAR_5);

 if (VAR_5->sk != ((void*)0)) {
  while ((VAR_6 = FUNC_13(&VAR_5->sk->sk_receive_queue)) != ((void*)0)) {
   if (VAR_6->sk != VAR_5->sk) {

    ax25_cb *VAR_7 = FUNC_12(VAR_6->sk);


    FUNC_15(VAR_6->sk);


    VAR_6->sk->sk_state = VAR_2;

    FUNC_4(VAR_7);
    VAR_7->state = VAR_0;
   }

   FUNC_10(VAR_6);
  }
  FUNC_14(&VAR_5->sk->sk_write_queue);
 }

 if (VAR_5->sk != ((void*)0)) {
  if (FUNC_11(VAR_5->sk)) {

   FUNC_17(&VAR_5->dtimer, VAR_3, 0);
   VAR_5->dtimer.expires = VAR_4 + 2 * VAR_1;
   FUNC_0(&VAR_5->dtimer);
  } else {
   struct sock *VAR_8=VAR_5->sk;
   VAR_5->sk=((void*)0);
   FUNC_16(VAR_8);
  }
 } else {
  FUNC_2(VAR_5);
 }
}
