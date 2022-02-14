
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* sk; int state; scalar_t__ n2count; } ;
typedef TYPE_1__ ax25_cb ;
struct TYPE_13__ {int (* sk_state_change ) (TYPE_2__*) ;int sk_shutdown; scalar_t__ sk_err; int sk_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*) ;

void FUNC_9(ax25_cb *VAR_4)
{
 FUNC_1(VAR_4);

 VAR_4->n2count = 0;
 VAR_4->state = VAR_0;

 FUNC_0(VAR_4);
 FUNC_2(VAR_4);
 FUNC_3(VAR_4);

 if (VAR_4->sk != ((void*)0)) {
  FUNC_4(VAR_4->sk);
  VAR_4->sk->sk_state = VAR_3;
  VAR_4->sk->sk_err = 0;
  VAR_4->sk->sk_shutdown |= VAR_1;
  if (!FUNC_6(VAR_4->sk, VAR_2)) {
   VAR_4->sk->sk_state_change(VAR_4->sk);
   FUNC_7(VAR_4->sk, VAR_2);
  }
  FUNC_5(VAR_4->sk);
 }
}
