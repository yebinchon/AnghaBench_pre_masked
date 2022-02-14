
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int (* sk_state_change ) (struct sock*) ;void* sk_state; } ;
struct l2cap_chan {void* state; int flags; struct sock* data; } ;
struct TYPE_2__ {int flags; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct l2cap_chan *VAR_3)
{
 struct sock *VAR_4 = VAR_3->data;

 if (FUNC_3(VAR_2, &VAR_3->flags)) {
  VAR_4->sk_state = VAR_0;
  VAR_3->state = VAR_0;
 }

 FUNC_1(VAR_1, &FUNC_0(VAR_4)->flags);
 VAR_4->sk_state_change(VAR_4);
}
