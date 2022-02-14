
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {int dummy; } ;
struct TYPE_2__ {int context; } ;
struct vmci_datagram {TYPE_1__ src; } ;
struct sock {int dummy; } ;
struct sk_buff {int data; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct vmci_datagram*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_1 (size_t,int ) ;
 int FUNC_2 (int ,struct vmci_datagram*,size_t) ;
 int FUNC_3 (struct sock*,struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,size_t) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct vsock_sock*,int ) ;
 struct vsock_sock* FUNC_7 (struct sock*) ;

__attribute__((used)) static int FUNC_8(void *VAR_4, struct vmci_datagram *VAR_5)
{
 struct sock *VAR_6;
 size_t VAR_7;
 struct sk_buff *VAR_8;
 struct vsock_sock *VAR_9;

 VAR_6 = (struct sock *)VAR_4;
 VAR_9 = FUNC_7(VAR_6);
 if (!FUNC_6(VAR_9, VAR_5->src.context))
  return VAR_1;

 VAR_7 = FUNC_0(VAR_5);


 VAR_8 = FUNC_1(VAR_7, VAR_0);
 if (!VAR_8)
  return VAR_2;


 FUNC_5(VAR_6);
 FUNC_4(VAR_8, VAR_7);
 FUNC_2(VAR_8->data, VAR_5, VAR_7);
 FUNC_3(VAR_6, VAR_8, 0);

 return VAR_3;
}
