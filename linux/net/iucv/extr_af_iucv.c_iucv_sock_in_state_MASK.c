
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; } ;



__attribute__((used)) static int FUNC_0(struct sock *VAR_0, int VAR_1, int VAR_2)
{
 return (VAR_0->sk_state == VAR_1 || VAR_0->sk_state == VAR_2);
}
