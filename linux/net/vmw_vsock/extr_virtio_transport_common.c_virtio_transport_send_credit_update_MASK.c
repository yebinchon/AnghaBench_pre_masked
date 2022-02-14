
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {int dummy; } ;
struct virtio_vsock_pkt_info {int type; struct vsock_sock* vsk; int op; } ;
struct virtio_vsock_hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vsock_sock*,struct virtio_vsock_pkt_info*) ;

__attribute__((used)) static int FUNC_1(struct vsock_sock *VAR_1,
            int VAR_2,
            struct virtio_vsock_hdr *VAR_3)
{
 struct virtio_vsock_pkt_info VAR_4 = {
  .op = VAR_0,
  .type = VAR_2,
  .vsk = VAR_1,
 };

 return FUNC_0(VAR_1, &VAR_4);
}
