
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; int sk_sndbuf; int sk_wmem_alloc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(const struct sock *VAR_1)
{
 return VAR_1->sk_state != VAR_0 &&
        (FUNC_0(&VAR_1->sk_wmem_alloc) << 2) <= VAR_1->sk_sndbuf;
}
