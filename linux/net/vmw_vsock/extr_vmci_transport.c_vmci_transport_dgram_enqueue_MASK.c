
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int svm_port; int svm_cid; } ;
struct vsock_sock {TYPE_1__ local_addr; } ;
struct vmci_datagram {size_t payload_size; void* src; void* dst; } ;
struct sockaddr_vm {int svm_port; int svm_cid; } ;
struct msghdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vmci_datagram*) ;
 size_t VAR_4 ;
 int FUNC_1 (struct vmci_datagram*) ;
 struct vmci_datagram* FUNC_2 (size_t,int ) ;
 int FUNC_3 (int ,struct msghdr*,size_t) ;
 int FUNC_4 (struct vmci_datagram*) ;
 void* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct vsock_sock*,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(
 struct vsock_sock *VAR_5,
 struct sockaddr_vm *VAR_6,
 struct msghdr *VAR_7,
 size_t VAR_8)
{
 int VAR_9;
 struct vmci_datagram *VAR_10;

 if (VAR_8 > VAR_4)
  return -VAR_0;

 if (!FUNC_6(VAR_5, VAR_6->svm_cid))
  return -VAR_2;


 VAR_10 = FUNC_2(VAR_8 + sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_1;

 FUNC_3(FUNC_0(VAR_10), VAR_7, VAR_8);

 VAR_10->dst = FUNC_5(VAR_6->svm_cid,
       VAR_6->svm_port);
 VAR_10->src = FUNC_5(VAR_5->local_addr.svm_cid,
       VAR_5->local_addr.svm_port);
 VAR_10->payload_size = VAR_8;

 VAR_9 = FUNC_4(VAR_10);
 FUNC_1(VAR_10);
 if (VAR_9 < 0)
  return FUNC_7(VAR_9);

 return VAR_9 - sizeof(*VAR_10);
}
