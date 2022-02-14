
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct inet_connection_sock {int * icsk_af_ops; } ;
struct TYPE_2__ {int * af_specific; } ;


 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int VAR_0 ;
 int FUNC_1 (struct sock*) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_2)
{
 struct inet_connection_sock *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_2);

 VAR_3->icsk_af_ops = &VAR_0;





 return 0;
}
