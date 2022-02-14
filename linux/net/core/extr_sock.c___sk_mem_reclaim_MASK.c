
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_forward_alloc; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,int) ;

void FUNC_1(struct sock *VAR_1, int VAR_2)
{
 VAR_2 >>= VAR_0;
 VAR_1->sk_forward_alloc -= VAR_2 << VAR_0;
 FUNC_0(VAR_1, VAR_2);
}
