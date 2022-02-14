
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_socket; int sk_wmem_alloc; int sk_receive_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,struct sock*) ;
 int FUNC_2 (char*,struct sock*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_1)
{
 FUNC_1("%p", VAR_1);

 FUNC_4(&VAR_1->sk_receive_queue);

 FUNC_0(FUNC_3(&VAR_1->sk_wmem_alloc));
 FUNC_0(!FUNC_5(VAR_1));
 FUNC_0(VAR_1->sk_socket);

 if (!FUNC_6(VAR_1, VAR_0)) {
  FUNC_2("Attempt to release alive rxrpc socket: %p\n", VAR_1);
  return;
 }
}
