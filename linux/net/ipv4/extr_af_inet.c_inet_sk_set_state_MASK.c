
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; } ;


 int FUNC_0 (struct sock*,int,int) ;

void FUNC_1(struct sock *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0, VAR_0->sk_state, VAR_1);
 VAR_0->sk_state = VAR_1;
}
