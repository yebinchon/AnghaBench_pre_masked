
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_shutdown; } ;
struct l2cap_chan {struct sock* data; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct l2cap_chan *VAR_1)
{
 struct sock *VAR_2 = VAR_1->data;

 FUNC_0(VAR_2);
 VAR_2->sk_shutdown = VAR_0;
 FUNC_1(VAR_2);
}
