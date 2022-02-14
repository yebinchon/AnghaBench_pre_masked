
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct request_sock {int dummy; } ;
struct TYPE_2__ {int icsk_accept_queue; } ;


 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct request_sock*) ;
 int FUNC_2 (int *,struct request_sock*) ;
 scalar_t__ FUNC_3 (struct request_sock*) ;

void FUNC_4(struct sock *VAR_0, struct request_sock *VAR_1)
{
 if (FUNC_3(VAR_1)) {
  FUNC_2(&FUNC_0(VAR_0)->icsk_accept_queue, VAR_1);
  FUNC_1(VAR_1);
 }
}
