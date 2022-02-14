
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {int ato; } ;
struct inet_connection_sock {TYPE_1__ icsk_ack; } ;


 int VAR_0 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,unsigned int) ;

void FUNC_3(struct sock *VAR_1, unsigned int VAR_2)
{
 struct inet_connection_sock *VAR_3 = FUNC_0(VAR_1);

 FUNC_2(VAR_1, VAR_2);
 FUNC_1(VAR_1);
 VAR_3->icsk_ack.ato = VAR_0;
}
