
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {int dummy; } ;
struct virtio_vsock_pkt_info {struct vsock_sock* vsk; int type; int op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vsock_sock*,struct virtio_vsock_pkt_info*) ;

int FUNC_1(struct vsock_sock *VAR_2)
{
 struct virtio_vsock_pkt_info VAR_3 = {
  .op = VAR_0,
  .type = VAR_1,
  .vsk = VAR_2,
 };

 return FUNC_0(VAR_2, &VAR_3);
}
