
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {struct virtio_vsock_sock* trans; } ;
struct virtio_vsock_sock {scalar_t__ peer_buf_alloc; scalar_t__ tx_cnt; scalar_t__ peer_fwd_cnt; } ;
typedef scalar_t__ s64 ;



__attribute__((used)) static s64 FUNC_0(struct vsock_sock *VAR_0)
{
 struct virtio_vsock_sock *VAR_1 = VAR_0->trans;
 s64 VAR_2;

 VAR_2 = VAR_1->peer_buf_alloc - (VAR_1->tx_cnt - VAR_1->peer_fwd_cnt);
 if (VAR_2 < 0)
  VAR_2 = 0;

 return VAR_2;
}
