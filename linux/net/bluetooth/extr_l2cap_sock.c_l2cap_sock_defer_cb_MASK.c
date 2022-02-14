
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int (* sk_data_ready ) (struct sock*) ;} ;
struct l2cap_chan {struct sock* data; } ;
struct TYPE_2__ {struct sock* parent; } ;


 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct l2cap_chan *VAR_0)
{
 struct sock *VAR_1, *VAR_2 = VAR_0->data;

 FUNC_1(VAR_2);

 VAR_1 = FUNC_0(VAR_2)->parent;
 if (VAR_1)
  VAR_1->sk_data_ready(VAR_1);

 FUNC_2(VAR_2);
}
