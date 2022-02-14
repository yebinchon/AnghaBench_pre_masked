
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {int dummy; } ;
struct sock {int sk_receive_queue; int sk_shutdown; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int (* release ) (struct vsock_sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sock*,int) ;
 int FUNC_2 (struct sock*) ;
 struct sk_buff* FUNC_3 (int *) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct vsock_sock*) ;
 TYPE_1__* VAR_2 ;
 struct sock* FUNC_7 (struct sock*) ;
 struct vsock_sock* FUNC_8 (struct sock*) ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_3, int VAR_4)
{
 if (VAR_3) {
  struct sk_buff *VAR_5;
  struct sock *VAR_6;
  struct vsock_sock *VAR_7;

  VAR_7 = FUNC_8(VAR_3);
  VAR_6 = ((void*)0);




  VAR_2->release(VAR_7);






  FUNC_1(VAR_3, VAR_4);
  FUNC_4(VAR_3);
  VAR_3->sk_shutdown = VAR_0;

  while ((VAR_5 = FUNC_3(&VAR_3->sk_receive_queue)))
   FUNC_0(VAR_5);


  while ((VAR_6 = FUNC_7(VAR_3)) != ((void*)0)) {
   FUNC_9(VAR_6, VAR_1);
   FUNC_5(VAR_6);
  }

  FUNC_2(VAR_3);
  FUNC_5(VAR_3);
 }
}
