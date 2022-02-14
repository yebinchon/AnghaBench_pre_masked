
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct l2cap_chan {struct sock* data; } ;


 int FUNC_0 (struct sock*) ;

__attribute__((used)) static void FUNC_1(struct l2cap_chan *VAR_0)
{
 struct sock *VAR_1 = VAR_0->data;

 FUNC_0(VAR_1);
}
