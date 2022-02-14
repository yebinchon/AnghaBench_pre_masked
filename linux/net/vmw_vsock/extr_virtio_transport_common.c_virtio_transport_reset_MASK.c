
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {int dummy; } ;
struct virtio_vsock_pkt_info {scalar_t__ op; int reply; struct vsock_sock* vsk; int type; } ;
struct TYPE_2__ {int op; } ;
struct virtio_vsock_pkt {TYPE_1__ hdr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct vsock_sock*,struct virtio_vsock_pkt_info*) ;

__attribute__((used)) static int FUNC_2(struct vsock_sock *VAR_2,
      struct virtio_vsock_pkt *VAR_3)
{
 struct virtio_vsock_pkt_info VAR_4 = {
  .op = VAR_0,
  .type = VAR_1,
  .reply = !!VAR_3,
  .vsk = VAR_2,
 };


 if (VAR_3 && FUNC_0(VAR_3->hdr.op) == VAR_0)
  return 0;

 return FUNC_1(VAR_2, &VAR_4);
}
