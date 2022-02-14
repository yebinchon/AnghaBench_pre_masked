
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vsock_sock {struct virtio_vsock_sock* trans; } ;
struct virtio_vsock_sock {scalar_t__ buf_size; scalar_t__ buf_size_min; } ;


 scalar_t__ VAR_0 ;

void FUNC_0(struct vsock_sock *VAR_1, u64 VAR_2)
{
 struct virtio_vsock_sock *VAR_3 = VAR_1->trans;

 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;
 if (VAR_2 > VAR_3->buf_size)
  VAR_3->buf_size = VAR_2;
 VAR_3->buf_size_min = VAR_2;
}
