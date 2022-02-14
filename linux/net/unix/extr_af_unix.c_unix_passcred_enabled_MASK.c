
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int flags; } ;
struct sock {TYPE_1__* sk_socket; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static bool FUNC_1(const struct socket *VAR_1,
      const struct sock *VAR_2)
{
 return FUNC_0(VAR_0, &VAR_1->flags) ||
        !VAR_2->sk_socket ||
        FUNC_0(VAR_0, &VAR_2->sk_socket->flags);
}
