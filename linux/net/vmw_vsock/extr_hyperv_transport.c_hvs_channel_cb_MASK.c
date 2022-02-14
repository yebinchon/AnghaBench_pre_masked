
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {struct hvsock* trans; } ;
struct vmbus_channel {int outbound; } ;
struct sock {int (* sk_write_space ) (struct sock*) ;int (* sk_data_ready ) (struct sock*) ;} ;
struct hvsock {struct vmbus_channel* chan; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct vmbus_channel*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 struct vsock_sock* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(void *VAR_0)
{
 struct sock *VAR_1 = (struct sock *)VAR_0;
 struct vsock_sock *VAR_2 = FUNC_4(VAR_1);
 struct hvsock *VAR_3 = VAR_2->trans;
 struct vmbus_channel *VAR_4 = VAR_3->chan;

 if (FUNC_1(VAR_4))
  VAR_1->sk_data_ready(VAR_1);

 if (FUNC_0(&VAR_4->outbound) > 0)
  VAR_1->sk_write_space(VAR_1);
}
