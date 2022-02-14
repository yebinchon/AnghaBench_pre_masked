
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct inet_connection_sock {TYPE_1__* icsk_ca_ops; } ;
struct TYPE_4__ {scalar_t__ prior_ssthresh; } ;
struct TYPE_3__ {int (* init ) (struct sock*) ;} ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 struct inet_connection_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct sock*) ;
 TYPE_2__* FUNC_5 (struct sock*) ;

void FUNC_6(struct sock *VAR_0)
{
 const struct inet_connection_sock *VAR_1 = FUNC_2(VAR_0);

 FUNC_5(VAR_0)->prior_ssthresh = 0;
 if (VAR_1->icsk_ca_ops->init)
  VAR_1->icsk_ca_ops->init(VAR_0);
 if (FUNC_4(VAR_0))
  FUNC_1(VAR_0);
 else
  FUNC_0(VAR_0);
}
