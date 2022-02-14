
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {int dummy; } ;
struct sock {scalar_t__ sk_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sock*,int) ;
 struct vsock_sock* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct vsock_sock*) ;

__attribute__((used)) static int
FUNC_3(struct sock *VAR_1,
      size_t VAR_2, bool *VAR_3)
{
 struct vsock_sock *VAR_4 = FUNC_1(VAR_1);

 if (FUNC_2(VAR_4)) {
  *VAR_3 = 1;
 } else {




  if (VAR_1->sk_state == VAR_0) {
   if (!FUNC_0(VAR_1, 1))
    return -1;

  }
  *VAR_3 = 0;
 }

 return 0;
}
