
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {struct virtio_vsock_sock* trans; } ;
struct virtio_vsock_sock {int rx_lock; int rx_bytes; } ;
typedef int s64 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

s64 FUNC_2(struct vsock_sock *VAR_0)
{
 struct virtio_vsock_sock *VAR_1 = VAR_0->trans;
 s64 VAR_2;

 FUNC_0(&VAR_1->rx_lock);
 VAR_2 = VAR_1->rx_bytes;
 FUNC_1(&VAR_1->rx_lock);

 return VAR_2;
}
