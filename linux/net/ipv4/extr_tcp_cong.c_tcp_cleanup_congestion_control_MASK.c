
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct inet_connection_sock {TYPE_1__* icsk_ca_ops; } ;
struct TYPE_2__ {int owner; int (* release ) (struct sock*) ;} ;


 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sock*) ;

void FUNC_3(struct sock *VAR_0)
{
 struct inet_connection_sock *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->icsk_ca_ops->release)
  VAR_1->icsk_ca_ops->release(VAR_0);
 FUNC_1(VAR_1->icsk_ca_ops->owner);
}
