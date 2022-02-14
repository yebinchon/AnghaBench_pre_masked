
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_vsock_sock {scalar_t__ rx_bytes; scalar_t__ buf_alloc; } ;
struct virtio_vsock_pkt {scalar_t__ len; } ;



__attribute__((used)) static bool FUNC_0(struct virtio_vsock_sock *VAR_0,
     struct virtio_vsock_pkt *VAR_1)
{
 if (VAR_0->rx_bytes + VAR_1->len > VAR_0->buf_alloc)
  return 0;

 VAR_0->rx_bytes += VAR_1->len;
 return 1;
}
