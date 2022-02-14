
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vsock_sock {struct virtio_vsock_sock* trans; } ;
struct virtio_vsock_sock {int buf_size_max; } ;



u64 FUNC_0(struct vsock_sock *VAR_0)
{
 struct virtio_vsock_sock *VAR_1 = VAR_0->trans;

 return VAR_1->buf_size_max;
}
