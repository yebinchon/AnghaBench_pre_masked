
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {int dummy; } ;
struct virtio_vsock_pkt_info {int reply; struct vsock_sock* vsk; int remote_port; int remote_cid; int type; int op; } ;
struct TYPE_2__ {int src_port; int src_cid; } ;
struct virtio_vsock_pkt {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vsock_sock*,struct virtio_vsock_pkt_info*) ;

__attribute__((used)) static int
FUNC_3(struct vsock_sock *VAR_2,
          struct virtio_vsock_pkt *VAR_3)
{
 struct virtio_vsock_pkt_info VAR_4 = {
  .op = VAR_0,
  .type = VAR_1,
  .remote_cid = FUNC_1(VAR_3->hdr.src_cid),
  .remote_port = FUNC_0(VAR_3->hdr.src_port),
  .reply = 1,
  .vsk = VAR_2,
 };

 return FUNC_2(VAR_2, &VAR_4);
}
