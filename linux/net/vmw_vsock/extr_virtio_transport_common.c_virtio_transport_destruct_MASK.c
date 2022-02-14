
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {struct virtio_vsock_sock* trans; } ;
struct virtio_vsock_sock {int dummy; } ;


 int FUNC_0 (struct virtio_vsock_sock*) ;

void FUNC_1(struct vsock_sock *VAR_0)
{
 struct virtio_vsock_sock *VAR_1 = VAR_0->trans;

 FUNC_0(VAR_1);
}
