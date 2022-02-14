
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {int trans; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct sock* FUNC_3 (struct vsock_sock*) ;

__attribute__((used)) static int FUNC_4(struct vsock_sock *VAR_1, int VAR_2)
{
 struct sock *VAR_3 = FUNC_3(VAR_1);

 if (!(VAR_2 & VAR_0))
  return 0;

 FUNC_1(VAR_3);
 FUNC_0(VAR_1->trans, VAR_2);
 FUNC_2(VAR_3);
 return 0;
}
