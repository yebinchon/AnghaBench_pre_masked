
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_vsock_sock {int fwd_cnt; int rx_bytes; } ;
struct virtio_vsock_pkt {scalar_t__ len; } ;



__attribute__((used)) static void FUNC_0(struct virtio_vsock_sock *VAR_0,
     struct virtio_vsock_pkt *VAR_1)
{
 VAR_0->rx_bytes -= VAR_1->len;
 VAR_0->fwd_cnt += VAR_1->len;
}
