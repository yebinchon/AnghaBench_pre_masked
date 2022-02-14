
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int (* sk_state_change ) (struct sock*) ;} ;
struct l2cap_chan {struct sock* data; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct l2cap_chan *VAR_1)
{
 struct sock *VAR_2 = VAR_1->data;

 FUNC_1(VAR_0, &FUNC_0(VAR_2)->flags);
 VAR_2->sk_state_change(VAR_2);
}
