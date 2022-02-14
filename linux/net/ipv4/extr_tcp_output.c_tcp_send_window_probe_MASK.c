
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; } ;
struct TYPE_3__ {scalar_t__ rcv_nxt; scalar_t__ snd_wl1; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ,int ) ;

void FUNC_3(struct sock *VAR_2)
{
 if (VAR_2->sk_state == VAR_1) {
  FUNC_1(VAR_2)->snd_wl1 = FUNC_1(VAR_2)->rcv_nxt - 1;
  FUNC_0(FUNC_1(VAR_2));
  FUNC_2(VAR_2, 0, VAR_0);
 }
}
