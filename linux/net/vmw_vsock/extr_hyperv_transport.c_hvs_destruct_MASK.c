
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {struct hvsock* trans; } ;
struct vmbus_channel {int dummy; } ;
struct hvsock {struct vmbus_channel* chan; } ;


 int FUNC_0 (struct hvsock*) ;
 int FUNC_1 (struct vmbus_channel*) ;

__attribute__((used)) static void FUNC_2(struct vsock_sock *VAR_0)
{
 struct hvsock *VAR_1 = VAR_0->trans;
 struct vmbus_channel *VAR_2 = VAR_1->chan;

 if (VAR_2)
  FUNC_1(VAR_2);

 FUNC_0(VAR_1);
}
