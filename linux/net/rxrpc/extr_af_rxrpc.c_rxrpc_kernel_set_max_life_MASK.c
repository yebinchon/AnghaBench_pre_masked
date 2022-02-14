
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct rxrpc_call {int user_mutex; int expect_term_by; } ;


 int FUNC_0 (int ,unsigned long) ;
 unsigned long VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rxrpc_call*,unsigned long,unsigned long,int ) ;
 int VAR_1 ;

void FUNC_4(struct socket *VAR_2, struct rxrpc_call *VAR_3,
          unsigned long VAR_4)
{
 unsigned long VAR_5;

 FUNC_1(&VAR_3->user_mutex);

 VAR_5 = VAR_0;
 VAR_4 += VAR_5;
 FUNC_0(VAR_3->expect_term_by, VAR_4);
 FUNC_3(VAR_3, VAR_4, VAR_5, VAR_1);

 FUNC_2(&VAR_3->user_mutex);
}
