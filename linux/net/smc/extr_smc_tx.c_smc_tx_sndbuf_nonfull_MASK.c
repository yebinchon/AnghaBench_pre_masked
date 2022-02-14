
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* sk_write_space ) (TYPE_2__*) ;TYPE_1__* sk_socket; } ;
struct smc_sock {TYPE_2__ sk; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

void FUNC_2(struct smc_sock *VAR_1)
{
 if (VAR_1->sk.sk_socket &&
     FUNC_1(VAR_0, &VAR_1->sk.sk_socket->flags))
  VAR_1->sk.sk_write_space(&VAR_1->sk);
}
