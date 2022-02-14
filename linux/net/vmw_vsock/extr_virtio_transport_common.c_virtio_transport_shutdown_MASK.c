
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {int dummy; } ;
struct virtio_vsock_pkt_info {int flags; struct vsock_sock* vsk; int type; int op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vsock_sock*,struct virtio_vsock_pkt_info*) ;

int FUNC_1(struct vsock_sock *VAR_6, int VAR_7)
{
 struct virtio_vsock_pkt_info VAR_8 = {
  .op = VAR_2,
  .type = VAR_5,
  .flags = (VAR_7 & VAR_0 ?
     VAR_3 : 0) |
    (VAR_7 & VAR_1 ?
     VAR_4 : 0),
  .vsk = VAR_6,
 };

 return FUNC_0(VAR_6, &VAR_8);
}
