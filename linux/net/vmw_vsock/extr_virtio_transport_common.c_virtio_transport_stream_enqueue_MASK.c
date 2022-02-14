
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {int dummy; } ;
struct virtio_vsock_pkt_info {size_t pkt_len; struct vsock_sock* vsk; struct msghdr* msg; int type; int op; } ;
struct msghdr {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vsock_sock*,struct virtio_vsock_pkt_info*) ;

ssize_t
FUNC_1(struct vsock_sock *VAR_2,
    struct msghdr *VAR_3,
    size_t VAR_4)
{
 struct virtio_vsock_pkt_info VAR_5 = {
  .op = VAR_0,
  .type = VAR_1,
  .msg = VAR_3,
  .pkt_len = VAR_4,
  .vsk = VAR_2,
 };

 return FUNC_0(VAR_2, &VAR_5);
}
