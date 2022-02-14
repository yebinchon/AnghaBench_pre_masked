
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; int sk_err; } ;
struct l2cap_chan {struct sock* data; } ;



__attribute__((used)) static void FUNC_0(struct l2cap_chan *VAR_0, int VAR_1,
           int VAR_2)
{
 struct sock *VAR_3 = VAR_0->data;

 VAR_3->sk_state = VAR_1;

 if (VAR_2)
  VAR_3->sk_err = VAR_2;
}
