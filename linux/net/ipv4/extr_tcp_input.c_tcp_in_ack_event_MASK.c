
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct inet_connection_sock {TYPE_1__* icsk_ca_ops; } ;
struct TYPE_2__ {int (* in_ack_event ) (struct sock*,int ) ;} ;


 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct sock *VAR_0, u32 VAR_1)
{
 const struct inet_connection_sock *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->icsk_ca_ops->in_ack_event)
  VAR_2->icsk_ca_ops->in_ack_event(VAR_0, VAR_1);
}
