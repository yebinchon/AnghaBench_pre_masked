
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct request_sock {int dummy; } ;
struct TYPE_2__ {int icsk_accept_queue; } ;


 int FUNC_0 (struct sock*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sock*,struct request_sock*,struct sock*) ;
 int FUNC_3 (struct sock*,struct request_sock*) ;
 int FUNC_4 (int *,struct request_sock*) ;
 int FUNC_5 (struct sock*) ;

struct sock *FUNC_6(struct sock *VAR_0, struct sock *VAR_1,
      struct request_sock *VAR_2, bool VAR_3)
{
 if (VAR_3) {
  FUNC_3(VAR_0, VAR_2);
  FUNC_4(&FUNC_1(VAR_0)->icsk_accept_queue, VAR_2);
  if (FUNC_2(VAR_0, VAR_2, VAR_1))
   return VAR_1;
 }

 FUNC_0(VAR_1);
 FUNC_5(VAR_1);
 return ((void*)0);
}
