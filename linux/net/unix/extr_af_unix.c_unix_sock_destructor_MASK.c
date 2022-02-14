
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unix_sock {scalar_t__ addr; } ;
struct sock {int sk_socket; int sk_prot; int sk_wmem_alloc; int sk_receive_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,struct sock*,int ) ;
 int FUNC_6 (char*,struct sock*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sock*,int ) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_13 (scalar_t__) ;
 struct unix_sock* FUNC_14 (struct sock*) ;

__attribute__((used)) static void FUNC_15(struct sock *VAR_2)
{
 struct unix_sock *VAR_3 = FUNC_14(VAR_2);

 FUNC_9(&VAR_2->sk_receive_queue);

 FUNC_0(FUNC_7(&VAR_2->sk_wmem_alloc));
 FUNC_0(!FUNC_8(VAR_2));
 FUNC_0(VAR_2->sk_socket);
 if (!FUNC_10(VAR_2, VAR_0)) {
  FUNC_6("Attempt to release alive unix socket: %p\n", VAR_2);
  return;
 }

 if (VAR_3->addr)
  FUNC_13(VAR_3->addr);

 FUNC_1(&VAR_1);
 FUNC_3();
 FUNC_12(FUNC_11(VAR_2), VAR_2->sk_prot, -1);
 FUNC_4();




}
