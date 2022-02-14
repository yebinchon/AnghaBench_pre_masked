
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int (* sk_data_ready ) (struct sock*) ;int (* sk_state_change ) (struct sock*) ;int sk_state; } ;
struct l2cap_chan {struct sock* data; } ;
struct TYPE_2__ {struct sock* parent; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct sock*,struct sock*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static void FUNC_6(struct l2cap_chan *VAR_1)
{
 struct sock *VAR_2 = VAR_1->data;
 struct sock *VAR_3;

 FUNC_2(VAR_2);

 VAR_3 = FUNC_1(VAR_2)->parent;

 FUNC_0("sk %p, parent %p", VAR_2, VAR_3);

 VAR_2->sk_state = VAR_0;
 VAR_2->sk_state_change(VAR_2);

 if (VAR_3)
  VAR_3->sk_data_ready(VAR_3);

 FUNC_3(VAR_2);
}
