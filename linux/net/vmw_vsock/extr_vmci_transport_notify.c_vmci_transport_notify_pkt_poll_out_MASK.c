
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {int dummy; } ;
struct sock {int dummy; } ;
typedef scalar_t__ s64 ;


 int FUNC_0 (struct sock*,int) ;
 struct vsock_sock* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct vsock_sock*) ;

__attribute__((used)) static int
FUNC_3(struct sock *VAR_0,
       size_t VAR_1, bool *VAR_2)
{
 s64 VAR_3;
 struct vsock_sock *VAR_4 = FUNC_1(VAR_0);

 VAR_3 = FUNC_2(VAR_4);
 if (VAR_3 > 0) {
  *VAR_2 = 1;
  return 0;
 } else if (VAR_3 == 0) {
  if (!FUNC_0(VAR_0, 1))
   return -1;

  *VAR_2 = 0;
 }

 return 0;
}
