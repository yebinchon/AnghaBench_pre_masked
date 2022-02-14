
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {int dummy; } ;
typedef scalar_t__ s64 ;


 scalar_t__ FUNC_0 (struct vsock_sock*) ;

int
FUNC_1(struct vsock_sock *VAR_0,
     size_t VAR_1,
     bool *VAR_2)
{
 s64 VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 > 0)
  *VAR_2 = 1;
 else if (VAR_3 == 0)
  *VAR_2 = 0;

 return 0;
}
