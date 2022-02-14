
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {int dummy; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vsock_sock*) ;
 int FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (struct sock*) ;
 struct sock* FUNC_3 (struct vsock_sock*) ;
 int FUNC_4 (struct vsock_sock*) ;

__attribute__((used)) static void FUNC_5(struct vsock_sock *VAR_1)
{
 struct sock *VAR_2 = FUNC_3(VAR_1);
 bool VAR_3;

 FUNC_1(VAR_2, VAR_0);
 VAR_3 = FUNC_0(VAR_1);
 FUNC_2(VAR_2);
 if (VAR_3)
  FUNC_4(VAR_1);
}
