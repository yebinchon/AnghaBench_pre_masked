
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct sock *VAR_1)
{
 return VAR_1->sk_state == VAR_0;
}
